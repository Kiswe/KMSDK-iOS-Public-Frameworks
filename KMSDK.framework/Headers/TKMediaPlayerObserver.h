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

@property (readwrite, assign) AVPlayer* mPlayer;
@property (nonatomic, assign) KMPlayerView *mPlayerView;
@property (nonatomic, assign) TKPlayerControlsView *mPlayerControls;
@property (nonatomic, assign) Event *event;
@property (nonatomic, strong) NSMutableDictionary *overlayObjects;
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
@property (nonatomic, nonnull) NSString * _Nonnull(^usernameProducer)();

/// @param username username to be used for cstats error reporting
- (nonnull instancetype)initWithUsernameProducer:(nullable NSString * _Nonnull(^)())producer;

- (void)setupObservers;
- (void)removeAllObservers;
- (void)setupNascarTrack;
- (void)removeNascarTrack;
- (void)observeValueForKeyPath:(NSString*) path ofObject:(id)object change:(NSDictionary*)change context:(void*)context;

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
