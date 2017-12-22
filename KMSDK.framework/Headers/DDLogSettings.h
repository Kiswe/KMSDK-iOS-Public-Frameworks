//
//  DDLogSettings.h
//  
//
//  Created by InfAspire on 23/4/2014.
//
//

#define LOG_LEVEL_DEF ddLogLevel
#define LOG_ASYNC_ENABLED YES
#import <Foundation/Foundation.h>
#import <CocoaLumberjack/CocoaLumberjack.h>

/*
 Levels:
 LOG_LEVEL_VERBOSE
 LOG_LEVEL_DEBUG
 LOG_LEVEL_INFO
 LOG_LEVEL_WARNING
 LOG_LEVEL_ERROR
 
 DDLogVerbose
 DDLogDebug
 DDLogInfo
 DDLogWarning
 DDLogError
 */

#ifdef DEBUG
static const DDLogLevel ddLogLevel = DDLogLevelVerbose;
#else
static const DDLogLevel ddLogLevel = DDLogLevelOff;
#endif

#pragma mark - Notification string constants

// Metadata updated
extern NSString* const metadataNotification;
// Dictionary key for updated stats epoch
extern NSString* const statsChangeEpochKey;
// Player was selected from box score
extern NSString* const selectedPlayerFromBoxScoreNotification;
// Dictionary key for selected player from box score
extern NSString* const selectedPlayerFromBoxScoreKey;
// User tapped player profile to jump to zoom video
extern NSString* const selectedJumpToPlayerZoomFromProfileNotification;
// Dictionary key for player selected in profile
extern NSString* const selectedPlayerFromProfileKey;
// Item was selected from play by play
extern NSString* const selectedPlayByPlayItemNotification;
// Dictionary key for selected item from play by play
extern NSString* const selectedPlayByPlayItemKey;
// Player zoom was selected from video
extern NSString* const selectedPlayerZoomFromVideoNotification;
// Dictionary key for selected player zoom from video
extern NSString* const selectedPlayerZoomFromVideoKey;

// Media player
extern NSString* const kmMediaPlayerDidDismissNotification;

// Set stream from bridge function setStream
extern NSString* const setStreamNotification;
extern NSString* const setStreamKey;

// Login & Logout
extern NSString* const userLoggedInNotification;
extern NSString* const userLoggedOutNotification;

// Pop text bridge function
extern NSString* const popTextValKey;
extern NSString* const popTextValNotification;

// Jump to archives if empty notifications
extern NSString* const kJumpToArchiveEventSection;
extern NSString* const kJumpToArchiveChannelSection;

// Toggle controls notification
extern NSString* const togglePlaybackControlsNotification;

// Switch audio track in avplayer notification
extern NSString* const selectAudioTrackNotification;

// Change state of nascar track size and visibility
extern NSString* const updateNascarTrackNotification;

// Open a website via in-app browser
extern NSString* const openURLNotification;

// Open a channel
extern NSString* const openChannelNotification;
extern NSString* const openFullChannelNotification;

// Sent when an Overlay Widget does not consume a touch event
extern NSString* const onJsEventNotification;

// Idle timer
extern NSString* const resetIdleTimerNotification;
extern NSString* const stopIdleTimerNotification;

//KMSDK Variables
extern NSString* const viewControllerDidCloseNotification;
extern NSString* const statusCodePlayerStateKey;

extern NSString* const playerStateDidChangeNotification;
extern NSString* const playerStateDidChangeNotificationKey;
extern NSString* const currentlySelectedWidgetIndexNotification;

extern NSString* const playerSwitchingStreamNotification;
extern NSString* const playerSwitchingFromStreamKey;
extern NSString* const playerSwitchingToStreamKey;

#pragma mark - Global Enum

// Event time period
typedef NS_ENUM(NSInteger, TKEventTimePeriod) {
    TKEventTimePeriodArchive = 0,
    TKEventTimePeriodLive,
    TKEventTimePeriodUpcoming,
    TKEventTimePeriodLiveAndUpcoming,
    TKEventTimePeriodScheduled,
    TKEventTimePeriodForMe
};

@interface DDLogSettings : NSObject

#pragma mark - Class Methods

+(void)setupLoggingForApplication;

@end
