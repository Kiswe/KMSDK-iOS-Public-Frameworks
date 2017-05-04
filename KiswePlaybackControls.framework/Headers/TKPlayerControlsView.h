//
//  TKPlayerControlsView.h
//  TrekkerMediaControls
//
//  Created by Max Campolo on 12/29/14.
//  Copyright (c) 2014 Kiswe Mobile. All rights reserved.
//

// Framework
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h> 
#import <AVFoundation/AVFoundation.h>

@class TKPlayerControlsView;
@class TKControlBarView;

#pragma mark - Enums

// Define enum for player state
typedef NS_ENUM(NSInteger, TKPlayerState) {
    TKPlayerStatePlaying,
    TKPlayerStatePaused
};

// Enum for pip toggle state
typedef NS_ENUM(NSInteger, TKPipState) {
    TKPipStateShowPips,
    TKPipStateHidePips
};

// Controls type - Live or VOD
typedef NS_ENUM(NSInteger, TKControlsType) {
    TKControlsTypeLive,
    TKControlsTypeVOD
};

// Slider drag state
typedef NS_ENUM(NSInteger, TKControlsSliderState) {
    TKControlsSliderStateDragging,
    TKControlsSliderStateNotDragging
};

#pragma mark - Global Constant

extern NSString* const TK_playerControlsViewWillShowControlsNotification;
extern NSString* const TK_playerControlsViewWillHideControlsNotification;
extern NSString* const TK_playerControlsViewDidShowControlsNotification;
extern NSString* const TK_playerControlsViewDidHideControlsNotification;

#pragma mark - Protocol

@protocol TKPlayerControlsViewDelegate <NSObject>

@optional

// Callback methods for controls buttons
- (void)controlsViewDidPressPause:(TKPlayerControlsView*)controlsView;
- (void)controlsViewDidPressPlay:(TKPlayerControlsView*)controlsView;
- (void)controlsViewDidPressSkipBack:(TKPlayerControlsView*)controlsView;
- (void)controlsViewDidPressGoLive:(TKPlayerControlsView*)controlsView;
- (void)controlsViewDidPressExpandView:(TKPlayerControlsView*)controlsView;
- (void)controlsViewDidPressMixView:(TKPlayerControlsView*)controlsView;
- (void)controlsViewDidPressBack:(TKPlayerControlsView*)controlsView;
- (void)controlsViewDidPressSkipForward:(TKPlayerControlsView*)controlsView;
- (void)controlsViewDidPressRotate:(TKPlayerControlsView*)controlsView;
- (void)controlsView:(TKPlayerControlsView*)controlsView didPressCameraSelectorAtIndex:(NSInteger)index;
- (void)controlsViewDidPressTeamSelectorHome:(TKPlayerControlsView*)controlsView;
- (void)controlsViewDidPressTeamSelectorAway:(TKPlayerControlsView*)controlsView;
// Slider
- (void)controlsView:(TKPlayerControlsView*)controlsView sliderDidEndDraggingAtValue:(float)value;
- (void)controlsView:(TKPlayerControlsView *)controlsView sliderDidBeginDraggingAtValue:(float)value;
- (void)controlsView:(TKPlayerControlsView *)controlsView sliderValueDidChange:(float)value;
// Pips
- (void)controlsViewDidPressPipToggleShowPips:(TKPlayerControlsView *)controlsView;
- (void)controlsViewDidPressPipToggleHidePips:(TKPlayerControlsView *)controlsView;
- (void)controlsViewDidPressMixToggleForward:(TKPlayerControlsView *)controlsView;
- (void)controlsViewDidPressMixToggleBack:(TKPlayerControlsView *)controlsView;

// Callack methods for show and hide controls
- (void)controlsViewWillShowControls:(TKPlayerControlsView*)controlsView;
- (void)controlsViewWillHideControls:(TKPlayerControlsView*)controlsView;

@end

@interface TKPlayerControlsView : UIView

#pragma mark - Controls Elements

// Control Buttons
@property (nonatomic, strong) IBOutlet UIButton *buttonPausePlay;
@property (nonatomic, strong) IBOutlet UIButton *buttonSkipBack;
@property (nonatomic, strong) IBOutlet UIButton *buttonGoLive;
@property (nonatomic, strong) IBOutlet UIButton *buttonSwitchView;
@property (nonatomic, strong) IBOutlet UIButton *buttonBack;
@property (nonatomic, strong) IBOutlet UIButton *buttonPipToggle;
@property (weak, nonatomic) IBOutlet UIButton *mixToggle;
@property (weak, nonatomic) IBOutlet UIButton *buttonRotate;

// Archive Control Buttons
@property (nonatomic, strong) IBOutlet UIButton *buttonSkipForward;

#pragma mark - Interface Elements

// Live and Archive
@property (nonatomic, strong) IBOutlet UIView *topControlsOverlayView;
@property (nonatomic, strong) IBOutlet TKControlBarView *bottomControlsOverlayView;

// Live
@property (weak, nonatomic) IBOutlet UIButton *liveButton;

// Archive
@property (nonatomic, strong) IBOutlet UILabel *currentTimeLabel;
@property (nonatomic, strong) IBOutlet UILabel *endTimeLabel;
@property (nonatomic, strong) IBOutlet UISlider *playbackSlider;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *endTimeLabelToSliderStrut;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *liveButtonToPipToggleStrut;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *endTimeLabelToLiveButtonStrut;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *endTimeLabelWidth;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *liveButtonWidth;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *pipsToggleAlignment;

#pragma mark - Class

// Main view for storyboard
@property (nonatomic, strong) IBOutlet UIView *view;

// Delegate
@property (nonatomic, weak) id<TKPlayerControlsViewDelegate> delegate;

// State
@property (nonatomic, readonly) bool controlsVisible;
@property (nonatomic, assign) bool controlsShouldBeVisible;
@property (nonatomic, assign) bool rotateButtonVisible;
@property (nonatomic, readonly) bool isPaused;
@property (nonatomic, readonly) bool isFullView;
@property (nonatomic, readonly) TKControlsSliderState sliderState;
@property (nonatomic, readonly) TKPipState pipState;
@property (nonatomic, assign) bool isLiveOnly;
@property (nonatomic, assign) CGFloat animationDuration;
@property (nonatomic, assign) UIColor *overlayBarBackgroundColor;
@property (nonatomic, assign) UIColor *buttonColor;
@property (nonatomic, assign) UIColor *textColor;


#pragma mark - Public Instance Methods

// Show controls
- (void)showControlsOverlay;
// Hide controls
- (void)hideControlsOverlay;
// Set controls type
- (void)setControlsType:(TKControlsType)type;
// Display portrait or landscape orientation
- (void)displayControlsLandscapeMode;
- (void)displayControlsPortraitMode;
// Set video time
- (void)setVideoEndTimeForSlider:(CMTime)duration;
- (void)setVideoLiveTimeForSlider:(CMTime)duration usingSegmentSize:(float)segmentSize;
- (float)getVideoEndTimeForSlider;
- (void)displayLive:(BOOL)live currentlyLive:(BOOL)currentlyLive;
// Update slider value with current playback time
- (void)updateCurrentTime:(CMTime)currentTime;
// Set player state
- (void)setPlayerState:(TKPlayerState)playerState;
// Hide the pip toggle
- (void)hidePipToggle:(BOOL)hidden;
// Set pip toggle state
- (void)displayPipToggleForState:(TKPipState)pipState;

@end
