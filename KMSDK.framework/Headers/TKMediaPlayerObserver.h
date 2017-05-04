//
//  TKMediaPlayerObserver.h
//  TrekkerLive
//
//  Created by cb on 1/13/15.
//  Copyright (c) 2015 Kiswe Mobile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <KiswePlaybackControls/TKPlayerControlsView.h>

@class Event;

@class KMPlayerView;

@interface TKMediaPlayerObserver : NSObject

@property (readwrite, assign, nullable) AVPlayer* mPlayer;
@property (nonatomic, assign, nullable) KMPlayerView *mPlayerView;
@property (nonatomic, assign, nullable) TKPlayerControlsView *mPlayerControls;
@property (nonatomic, assign, nullable) Event *event;
@property (nonatomic, strong, nullable) NSMutableDictionary *overlayObjects;
@property (assign) BOOL disableDrawing;
@property (nonatomic, readonly) unsigned int lastMediaEpoch;
@property (nonatomic, readonly) unsigned int lastMediaTimestamp;
@property (nonatomic, readonly) float currentItemDuration;
@property (assign) BOOL ovFlag;
@property (assign) BOOL nascarEnabled;
@property (assign) BOOL updateNascarTrack;
@property (nonatomic, readwrite) BOOL showPipsBorder;
@property (nonatomic, assign) unsigned int nascarTrackMode;
@property CMTime lastKnownPlayTime;
@property (assign) BOOL isRegisteredForObservers;
@property (nonatomic, strong, nonnull) NSString *username;

- (nonnull instancetype)initWithUsername:(nullable NSString *)username;

- (void)setupObservers;
- (void)removeAllObservers;
- (void)setupNascarTrack;
- (void)removeNascarTrack;
- (void)observeValueForKeyPath:(null_unspecified NSString*) path ofObject:(null_unspecified id)object change:(null_unspecified NSDictionary*)change context:(null_unspecified void*)context;

// Drawing
- (void)showPipBorderIfMix;
- (void)hidePipBorder;
- (void)repositionOverlayObjects;

// Static method
- (CGFloat)heightOffsetForLetterbox;

// Define player state enum
typedef enum : NSInteger {
    kPlayerStateInit = 0,
    kPlayerStatePlaying,
    kPlayerStatePaused,
    kPlayerStateReplay
} PlayerStates;

@end
