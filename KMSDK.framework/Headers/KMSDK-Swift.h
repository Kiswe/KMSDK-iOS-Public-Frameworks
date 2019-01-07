// Generated by Apple Swift version 4.2.1 effective-3.4.1 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import AVFoundation;
@import CoreGraphics;
@import CoreMedia;
@import Foundation;
@import KiswePlaybackControls;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="KMSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif






SWIFT_CLASS("_TtC5KMSDK8ClipInfo")
@interface ClipInfo : NSObject
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly, copy) NSString * _Nullable stream;
@property (nonatomic, readonly, copy) NSString * _Nullable text;
- (nonnull instancetype)initWithStartTime:(double)startTime endTime:(double)endTime stream:(NSString * _Nullable)stream text:(NSString * _Nullable)text OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


@interface NSDateFormatter (SWIFT_EXTENSION(KMSDK))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) NSDateFormatter * _Nonnull kisweFormat;)
+ (NSDateFormatter * _Nonnull)kisweFormat SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC5KMSDK5Event")
@interface Event : NSObject
@property (nonatomic, copy) NSString * _Nullable eventID;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable status;
@property (nonatomic, copy) NSURL * _Nullable dataUrl;
@property (nonatomic, copy) NSString * _Nullable diaginfoInterval;
@property (nonatomic, copy) NSString * _Nullable mediaServerP;
@property (nonatomic, copy) NSString * _Nullable mediaServerS;
@property (nonatomic, copy) NSString * _Nullable opstatus;
@property (nonatomic, copy) NSString * _Nullable shareUrl;
@property (nonatomic, copy) NSString * _Nullable visibility;
@property (nonatomic, copy) NSString * _Nullable ownedBy;
@property (nonatomic, copy) NSString * _Nullable thumbnail;
@property (nonatomic, copy) NSDate * _Nullable startTime;
@property (nonatomic, copy) NSDate * _Nullable endTime;
@property (nonatomic, copy) NSString * _Nullable channelID;
@property (nonatomic, copy) NSDate * _Nullable videoStartTime;
@property (nonatomic) BOOL togglePlaybackControlsWidget;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable currentStreamsDict;
@property (nonatomic, copy) NSArray * _Nullable streams;
- (nonnull instancetype)initWithDict:(NSDictionary<NSString *, id> * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
+ (Event * _Nonnull)eventWithDict:(NSDictionary<NSString *, id> * _Nonnull)dict SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<Event *> * _Nonnull)eventsWithArray:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)array SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getVideoSrcFromVideosArrayWithId:(NSInteger)sourceId SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getVideoSrcFromClickablesWithClickableId:(NSInteger)sourceID SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)clickableTypeForClickableId:(NSInteger)sourceID SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class WidgetData;

@interface Event (SWIFT_EXTENSION(KMSDK))
@property (nonatomic, readonly, copy) NSArray<WidgetData *> * _Nonnull widgets;
@end


SWIFT_CLASS("_TtC5KMSDK12ImageFactory")
@interface ImageFactory : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5KMSDK18KMAVPlayerObserver")
@interface KMAVPlayerObserver : NSObject
@property (nonatomic, strong) AVPlayer * _Nullable mediaPlayer;
@property (nonatomic) BOOL observing;
- (nonnull instancetype)initWithPlayer:(AVPlayer * _Nonnull)player OBJC_DESIGNATED_INITIALIZER;
- (void)observe;
- (void)attachPeriodicObserverForInterval:(CMTime)interval;
- (void)removePeriodicTimeObserver;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class NSCoder;
@class NSBundle;

SWIFT_CLASS("_TtC5KMSDK26KMCreateClipViewController")
@interface KMCreateClipViewController : UIViewController
- (nonnull instancetype)initWithVideoURL:(NSString * _Nonnull)videoURL startTime:(CMTime)startTime endTime:(CMTime)endTime minValue:(double)minValue maxValue:(double)maxValue minimumClipLengthSeconds:(double)minimumClipLengthSeconds postClipCallback:(void (^ _Nonnull)(ClipInfo * _Nonnull))postClipCallback initialClipText:(NSString * _Nullable)initialClipText OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@interface KMCreateClipViewController (SWIFT_EXTENSION(KMSDK))
- (void)playerObserver:(KMAVPlayerObserver * _Nonnull)observer periodicTimeObserverObservedPlayer:(AVPlayer * _Nonnull)player;
@end



@class KMPlayerView;

@interface KMCreateClipViewController (SWIFT_EXTENSION(KMSDK))
- (void)playerViewDidPlayToEndTimeWithPlayerView:(KMPlayerView * _Nonnull)playerView;
- (void)playerView:(KMPlayerView * _Nonnull)playerView didObserveItemStatus:(AVPlayerItemStatus)status;
@end



@class UITextView;

@interface KMCreateClipViewController (SWIFT_EXTENSION(KMSDK)) <UITextViewDelegate>
- (BOOL)textView:(UITextView * _Nonnull)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString * _Nonnull)text SWIFT_WARN_UNUSED_RESULT;
- (void)textViewDidChangeSelection:(UITextView * _Nonnull)textView;
@end


SWIFT_CLASS("_TtC5KMSDK20KMLocalizationHelper")
@interface KMLocalizationHelper : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
+ (void)setLocalization:(NSString * _Nonnull)localization;
+ (NSString * _Nonnull)localizedString:(NSString * _Nonnull)string SWIFT_WARN_UNUSED_RESULT;
@end

@class KMMediaViewController;
enum KMMediaState : NSInteger;
enum PlaybackState : NSInteger;

SWIFT_PROTOCOL("_TtP5KMSDK25KMMediaControllerDelegate_")
@protocol KMMediaControllerDelegate
@optional
- (void)mediaController:(KMMediaViewController * _Nonnull)mediaController playerStateDidChange:(enum KMMediaState)newState;
- (void)mediaController:(KMMediaViewController * _Nonnull)mediaController playerSwitchingFromStream:(NSString * _Nullable)fromStreamName toStream:(NSString * _Nullable)toStreamName;
- (void)mediaController:(KMMediaViewController * _Nonnull)mediaController userMovedPlayheadTo:(NSString * _Nonnull)playhead;
- (void)mediaController:(KMMediaViewController * _Nonnull)mediaController userChangedPlaybackTo:(enum PlaybackState)playbackState;
@end

@class AVPlayerItem;
@class UIView;

SWIFT_CLASS("_TtC5KMSDK19KMMediaPlayerHelper")
@interface KMMediaPlayerHelper : NSObject
+ (NSString * _Nullable)initialPlaylistStringForEvent:(Event * _Nonnull)event SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)initialStreamForEvent:(Event * _Nonnull)event SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)playlistStringForVideoName:(NSString * _Nonnull)name event:(Event * _Nonnull)event SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)highVariantPlaylistStringForVideoName:(NSString * _Nonnull)name event:(Event * _Nonnull)event SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)lowVariantPlaylistStringForVideoName:(NSString * _Nonnull)name event:(Event * _Nonnull)event SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)vodHighVariantPlaylistStringForVideoName:(NSString * _Nonnull)name event:(Event * _Nonnull)event SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)vodLowVariantPlaylistStringForVideoName:(NSString * _Nonnull)name event:(Event * _Nonnull)event SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)requestedStreamIdFromFullURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)currentVideoURLForPlayerItem:(AVPlayerItem * _Nonnull)playerItem SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)urlIsMixStream:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
+ (NSURL * _Nullable)mixURLFromVideoURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
+ (NSURL * _Nullable)videoURLFromMixURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)videoNameFromURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
+ (CGRect)videoRectInPlayerView:(UIView * _Nonnull)playerView SWIFT_WARN_UNUSED_RESULT;
/// Set the shared AVAudioSession instance category.
/// \param category String representing category (AVAudioSessionCategoryPlayback, AVAudioSessionCategoryAmbient, …)
///
+ (void)setAudioSessionCategory:(NSString * _Nonnull)category;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, KMMediaState, closed) {
  KMMediaStateUnknown = 0,
  KMMediaStateReadyToPlay = 1,
  KMMediaStateFailed = 2,
  KMMediaStatePlaying = 3,
  KMMediaStatePaused = 4,
  KMMediaStateGeoblocked = 5,
};

@protocol WidgetDelegate;
@class TKPlayerControlsView;
@class KMParentViewController;
@class TKMediaPlayerObserver;

SWIFT_CLASS("_TtC5KMSDK21KMMediaViewController")
@interface KMMediaViewController : UIViewController
- (nonnull instancetype)initWithEvent:(Event * _Nonnull)event username:(NSString * _Nullable)username token:(NSString * _Nullable)token;
@property (nonatomic, strong) Event * _Nullable event;
@property (nonatomic, strong) KMPlayerView * _Nullable playerView;
@property (nonatomic, strong) KMPlayerView * _Nullable alternatePlayerView;
@property (nonatomic, weak) id <KMMediaControllerDelegate> _Nullable delegate;
@property (nonatomic, weak) id <WidgetDelegate> _Nullable widgetDelegate;
@property (nonatomic) BOOL realTimeArchiveEnabled;
@property (nonatomic, readonly) BOOL shouldUseRealTimeArchive;
@property (nonatomic, strong) TKPlayerControlsView * _Nonnull playerControls;
@property (nonatomic) BOOL playerControlsIdleTimerEnabled;
@property (nonatomic) double playerControlsDefaultIdleTimeSeconds;
@property (nonatomic) CMTime playerSeekTolerance;
@property (nonatomic, strong) KMAVPlayerObserver * _Nullable observer;
@property (nonatomic, copy) NSString * _Nullable username;
@property (nonatomic, weak) KMParentViewController * _Nullable parentVC;
@property (nonatomic, copy) NSString * _Nullable overlayWidgetToken;
@property (nonatomic, strong) TKMediaPlayerObserver * _Nullable metadataObserver;
@property (nonatomic) BOOL overlayWidgetsEnabled;
@property (nonatomic) UIStatusBarStyle playerPreferredStatusBarStyle;
@property (nonatomic) BOOL rotateButtonVisible;
@property (nonatomic) BOOL playerControlsVisible;
@property (nonatomic) BOOL playerOverlaysVisible;
@property (nonatomic) BOOL restartsPlaybackWhenAudioRouteChanges;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end




@interface KMMediaViewController (SWIFT_EXTENSION(KMSDK))
- (void)playerObserver:(KMAVPlayerObserver * _Nonnull)observer periodicTimeObserverObservedPlayer:(AVPlayer * _Nonnull)player;
@end

@class Widget;

SWIFT_PROTOCOL("_TtP5KMSDK14WidgetDelegate_")
@protocol WidgetDelegate
- (void (^ _Nullable)(NSDictionary * _Nonnull, void (^ _Nullable)(id _Nullable)))widget:(Widget * _Nonnull)widget handlerForFunctionNamed:(NSString * _Nonnull)functionName SWIFT_WARN_UNUSED_RESULT;
@end


@interface KMMediaViewController (SWIFT_EXTENSION(KMSDK)) <WidgetDelegate>
- (void (^ _Nullable)(NSDictionary * _Nonnull, void (^ _Nullable)(id _Nullable)))widget:(Widget * _Nonnull)widget handlerForFunctionNamed:(NSString * _Nonnull)functionName SWIFT_WARN_UNUSED_RESULT;
@end


@interface KMMediaViewController (SWIFT_EXTENSION(KMSDK))
- (void)showAlternatePlayerWithPath:(NSString * _Nullable)path;
- (void)dismissAlternatePlayer;
@end

@protocol UIViewControllerTransitionCoordinator;

@interface KMMediaViewController (SWIFT_EXTENSION(KMSDK))
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@end




@interface KMMediaViewController (SWIFT_EXTENSION(KMSDK))
- (void)resetIdleTimer;
- (void)stopIdleTimer;
@end

@class NSNumber;

SWIFT_PROTOCOL("_TtP5KMSDK23MediaPlayerInfoProvider_")
@protocol MediaPlayerInfoProvider
@property (nonatomic, readonly, copy) NSString * _Nullable currentStream;
@property (nonatomic, readonly, strong) NSNumber * _Nullable currentEpoch;
@property (nonatomic, readonly, strong) NSNumber * _Nullable currentTime;
- (void)setPlayheadTo:(double)to;
- (void)setStreamWithNamed:(NSString * _Nonnull)streamName;
@end


@interface KMMediaViewController (SWIFT_EXTENSION(KMSDK)) <MediaPlayerInfoProvider>
@property (nonatomic, readonly, copy) NSString * _Nullable currentStream;
@property (nonatomic, readonly, strong) NSNumber * _Nullable currentTime;
@property (nonatomic, readonly, strong) NSNumber * _Nullable currentEpoch;
@end


SWIFT_PROTOCOL("_TtP5KMSDK17VideoControllable_")
@protocol VideoControllable
/// Current video time in seconds
@property (nonatomic, copy) NSString * _Nullable playhead;
/// Current stream name
@property (nonatomic, copy) NSString * _Nullable stream;
@end


@interface KMMediaViewController (SWIFT_EXTENSION(KMSDK)) <VideoControllable>
@property (nonatomic, copy) NSString * _Nullable playhead;
@property (nonatomic, copy) NSString * _Nullable stream;
@end


@interface KMMediaViewController (SWIFT_EXTENSION(KMSDK))
- (void)pauseVideo;
- (void)playVideo;
- (void)seekLiveWithCompletion:(void (^ _Nullable)(void))completion;
- (void)reloadVideoWithSeekToCurrentTime:(BOOL)seekToCurrentTime;
- (void)setStreamWithNamed:(NSString * _Nonnull)name;
- (void)setPlayheadTo:(double)timeInSeconds;
- (void)togglePlaybackControls;
+ (CMTime)endTimeForPlayerItem:(AVPlayerItem * _Nonnull)item SWIFT_WARN_UNUSED_RESULT;
- (CMTime)liveSeekableTimeForPlayer SWIFT_WARN_UNUSED_RESULT;
@end


@interface KMMediaViewController (SWIFT_EXTENSION(KMSDK)) <TKPlayerControlsViewDelegate>
- (void)controlsViewDidPressBack:(TKPlayerControlsView * _Null_unspecified)controlsView;
- (void)controlsViewDidPressPlay:(TKPlayerControlsView * _Null_unspecified)controlsView;
- (void)controlsViewDidPressPause:(TKPlayerControlsView * _Null_unspecified)controlsView;
- (void)controlsViewDidPressGoLive:(TKPlayerControlsView * _Null_unspecified)controlsView;
- (void)controlsViewDidPressSkipBack:(TKPlayerControlsView * _Null_unspecified)controlsView;
- (void)controlsViewDidPressSkipForward:(TKPlayerControlsView * _Null_unspecified)controlsView;
- (void)controlsViewWillHideControls:(TKPlayerControlsView * _Null_unspecified)controlsView;
- (void)controlsViewWillShowControls:(TKPlayerControlsView * _Null_unspecified)controlsView;
- (void)controlsView:(TKPlayerControlsView * _Null_unspecified)controlsView sliderDidBeginDraggingAtValue:(float)value;
- (void)controlsView:(TKPlayerControlsView * _Null_unspecified)controlsView sliderDidEndDraggingAtValue:(float)value;
- (void)controlsView:(TKPlayerControlsView * _Null_unspecified)controlsView sliderValueDidChange:(float)value;
- (void)controlsViewDidPressPipToggleHidePips:(TKPlayerControlsView * _Null_unspecified)controlsView;
- (void)controlsViewDidPressPipToggleShowPips:(TKPlayerControlsView * _Null_unspecified)controlsView;
- (void)controlsViewDidPressRotate:(TKPlayerControlsView * _Null_unspecified)controlsView;
@end

@class UIGestureRecognizer;

@interface KMMediaViewController (SWIFT_EXTENSION(KMSDK))
- (void)playerView:(KMPlayerView * _Nonnull)playerView didObserveItemStatus:(AVPlayerItemStatus)status;
- (void)playerViewDidPlayToEndTimeWithPlayerView:(KMPlayerView * _Nonnull)playerView;
- (void)playerView:(KMPlayerView * _Nonnull)playerView didReceiveTap:(UIGestureRecognizer * _Nonnull)sender;
- (void)playerView:(KMPlayerView * _Nonnull)playerView didReceiveTapAt:(CGPoint)location;
- (void)playerView:(KMPlayerView * _Nonnull)playerView didObserveIsPlaying:(BOOL)isPlaying;
@end


@interface KMMediaViewController (SWIFT_EXTENSION(KMSDK))
- (void)postMediaPlayerShouldReloadNotification;
@end


@interface KMMediaViewController (SWIFT_EXTENSION(KMSDK))
- (void)loadOrRepositionOverlayWidgets;
- (void)clearOverlayWidgets;
- (void)hideOrShowOverlayWidgetsForCurrentStream;
- (void)hideAllOverlayWidgets;
- (void)reloadWidgetWebviews;
- (void)removeAllWebviewConstraints;
@end

@class CALayer;
@protocol AVAssetResourceLoaderDelegate;

SWIFT_CLASS("_TtC5KMSDK12KMPlayerView")
@interface KMPlayerView : UIView
@property (nonatomic, strong) CALayer * _Nonnull slateLayer;
@property (nonatomic, strong) UIView * _Nonnull videoRectView;
@property (nonatomic, strong) AVPlayer * _Nullable player;
@property (nonatomic, strong) id <AVAssetResourceLoaderDelegate> _Nullable resourceLoaderDelegate;
@property (nonatomic) UIActivityIndicatorViewStyle activityIndicatorStyle;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) Class _Nonnull layerClass;)
+ (Class _Nonnull)layerClass SWIFT_WARN_UNUSED_RESULT;
- (void)layoutSubviews;
- (void)playWithURL:(NSURL * _Nonnull)URL completion:(void (^ _Nullable)(NSError * _Nullable))completion;
- (void)showSpinner;
- (void)stopSpinner;
- (void)slatePlayerView;
- (void)unslatePlayerView;
- (void)resetPlayer;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
@end


SWIFT_CLASS("_TtC5KMSDK5KMSDK")
@interface KMSDK : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) KMSDK * _Nonnull shared;)
+ (KMSDK * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


@interface KMSDK (SWIFT_EXTENSION(KMSDK))
- (void)parentViewControllerWithEventId:(NSString * _Nonnull)eventId username:(NSString * _Nullable)username completion:(void (^ _Nonnull)(KMParentViewController * _Nullable))completion;
- (KMParentViewController * _Nonnull)parentViewControllerWithEventDict:(NSDictionary<NSString *, id> * _Nonnull)eventDict username:(NSString * _Nullable)username SWIFT_WARN_UNUSED_RESULT;
- (KMParentViewController * _Nonnull)parentViewControllerWithEvent:(Event * _Nonnull)event username:(NSString * _Nullable)username SWIFT_WARN_UNUSED_RESULT;
@end


@interface KMSDK (SWIFT_EXTENSION(KMSDK))
- (void)mediaPlayerControllerWithEventId:(NSString * _Nonnull)eventId username:(NSString * _Nullable)username completion:(void (^ _Nonnull)(KMMediaViewController * _Nullable))completion;
- (KMMediaViewController * _Nonnull)mediaPlayerControllerWithEventDict:(NSDictionary<NSString *, id> * _Nonnull)eventDict username:(NSString * _Nullable)username SWIFT_WARN_UNUSED_RESULT;
- (KMMediaViewController * _Nonnull)mediaPlayerControllerWithEvent:(Event * _Nonnull)event username:(NSString * _Nullable)username SWIFT_WARN_UNUSED_RESULT;
@end


@interface KMSDK (SWIFT_EXTENSION(KMSDK))
/// Sets token for Kiswe API
- (void)setAPIToken:(NSString * _Nonnull)token;
- (void)setAPIHostUrl:(NSString * _Nonnull)apiUrlString;
- (void)setMsgHost:(NSString * _Nonnull)msgHostString;
@end


SWIFT_CLASS("_TtC5KMSDK15KMWidgetContext")
@interface KMWidgetContext : NSObject
+ (NSDictionary<NSString *, id> * _Nonnull)getContext SWIFT_WARN_UNUSED_RESULT;
+ (void)setContext:(NSDictionary<NSString *, id> * _Nonnull)context;
+ (void)setPlayer:(AVPlayer * _Nonnull)player;
+ (void)setMetadataObserver:(TKMediaPlayerObserver * _Nonnull)observer;
+ (void)resetContext;
+ (AVPlayer * _Nullable)getCurrentPlayer SWIFT_WARN_UNUSED_RESULT;
+ (CMTime)currentPlayerTime SWIFT_WARN_UNUSED_RESULT;
+ (NSNumber * _Nullable)currentPlayerEpoch SWIFT_WARN_UNUSED_RESULT;
+ (NSURL * _Nullable)currentPlayerURL SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)currentPlayerCurrentStreamName SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@interface NSString (SWIFT_EXTENSION(KMSDK))
+ (NSString * _Nonnull)km_createClipViewControllerWillDismissNotification SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, PlaybackState, closed) {
  PlaybackStatePlay = 0,
  PlaybackStatePause = 1,
};

@class UIColor;
@class NSValue;

SWIFT_CLASS("_TtC5KMSDK12RectMaskView")
@interface RectMaskView : NSObject
/// Color of fill (outer) rect
@property (nonatomic, strong) UIColor * _Nonnull fillColor;
/// Radius of fill (outer) rect
@property (nonatomic) CGFloat radius;
/// Opacity of fill (outer) rect
@property (nonatomic) float opacity;
/// Padding around filled (outer) Rect
@property (nonatomic) CGFloat padding;
/// Indicates if we should animate adding and removing the fillLayer. Default is <code>true</code>.
@property (nonatomic) BOOL animated;
/// Animation duration. Default is <code>0.2</code>.
@property (nonatomic) double animationDuration;
/// Insets for filled (outer) rect
/// note:
/// If you need the edges to be non-uniform this is the property to set.
@property (nonatomic) UIEdgeInsets insets;
- (nonnull instancetype)initWithDrawIn:(UIView * _Nonnull)drawIn maskRects:(NSArray<NSValue *> * _Nonnull)maskRects referenceFrame:(CGRect)referenceFrame OBJC_DESIGNATED_INITIALIZER;
/// Draw a rect mask on a target view with cutouts
- (void)draw;
/// Remove the rect mask view layer
- (void)remove;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC5KMSDK21TKImageDownloadHelper")
@interface TKImageDownloadHelper : NSObject
/// Batch request an array of images for background download task. This method fires completion block when ALL images are downloaded and returns an array of UIImage objects.
/// \param imageURLs Array of strings representing location of images as URL’s
///
/// \param imageScale Scale to interpret image data for UIImage. A scale of 1.0 will keep full size of image. Default (imageScale = nil) is scale factor of UIScreen resolution.
///
/// \param completion Block that provides a dictionary of downloaded images as argument. The dictionary contains images at the index they were passed in the original array and NSNull objects for images that failed to download.
///
+ (void)batchImageDownloadWithImageURLs:(NSArray<NSString *> * _Nonnull)imageURLs imageScale:(NSNumber * _Nullable)imageScale completion:(void (^ _Nullable)(NSDictionary<NSString *, id> * _Nonnull))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UINavigationBar;
@class UIImage;

SWIFT_CLASS("_TtC5KMSDK20TKInterfaceUtilities")
@interface TKInterfaceUtilities : NSObject
+ (void)resetNavigationBar:(UINavigationBar * _Nonnull)navigationBar style:(UIBarStyle)style color:(UIColor * _Nullable)color tintColor:(UIColor * _Nullable)tintColor titleColor:(UIColor * _Nullable)titleColor translucent:(BOOL)translucent hideHairline:(BOOL)hideHairline backgroundImage:(UIImage * _Nullable)backgroundImage shadowImage:(UIImage * _Nullable)shadowImage hidden:(BOOL)hidden;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end






@interface UIColor (SWIFT_EXTENSION(KMSDK))
+ (UIColor * _Nonnull)kiswePrimaryRedColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)kisweGrayOneColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)kisweGrayTwoColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)kisweGrayThreeColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)kisweGrayFourColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)kisweGrayFiveColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)kisweGraySixColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)kisweGraySevenColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)kisweGrayEightColor SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIImage (SWIFT_EXTENSION(KMSDK))
/// Resize the image to be the required size, stretching it as needed.
/// \param newSize The new size of the image.
///
/// \param contentMode The <code>UIViewContentMode</code> to be applied when resizing image. Either <code>UIViewContentModeScaleToFill</code>, <code>UIViewContentModeScaleAspectFill</code>, or <code>UIViewContentModeScaleAspectFit</code>.
///
///
/// returns:
/// Return <code>UIImage</code> of resized image.
- (UIImage * _Nullable)imageByScalingToSize:(CGSize)newSize contentMode:(UIViewContentMode)contentMode SWIFT_WARN_UNUSED_RESULT;
/// Resize the image to be the required size, stretching it as needed.
/// \param newSize The new size of the image.
///
///
/// returns:
/// Resized <code>UIImage</code> of resized image.
- (UIImage * _Nullable)imageByScalingToFillSize:(CGSize)newSize SWIFT_WARN_UNUSED_RESULT;
/// Crop the image to be the required size.
/// \param bounds The bounds to which the new image should be cropped.
///
///
/// returns:
/// Cropped <code>UIImage</code>.
- (UIImage * _Nonnull)imageByCroppingToBounds:(CGRect)bounds SWIFT_WARN_UNUSED_RESULT;
/// Resize the image to fill the rectange of the specified size, preserving the aspect ratio, trimming if needed.
/// \param newSize The new size of the image.
///
///
/// returns:
/// Return <code>UIImage</code> of resized image.
- (UIImage * _Nonnull)imageByScalingAspectFillSize:(CGSize)newSize SWIFT_WARN_UNUSED_RESULT;
/// Resize the image to fit within the required size, preserving the aspect ratio, with no trimming taking place.
/// \param newSize The new size of the image.
///
///
/// returns:
/// Return <code>UIImage</code> of resized image.
- (UIImage * _Nonnull)imageByScalingAspectFitSize:(CGSize)newSize SWIFT_WARN_UNUSED_RESULT;
- (UIImage * _Nonnull)grayScaleImageWithPreserveTransparency:(BOOL)transparent SWIFT_WARN_UNUSED_RESULT;
/// Compares two images by using their data representation.
/// \param image Image to compare to.
///
///
/// returns:
/// Bool true if images are equal.
- (BOOL)isEqualToImage:(UIImage * _Nonnull)image SWIFT_WARN_UNUSED_RESULT;
@end







SWIFT_CLASS("_TtC5KMSDK6Widget")
@interface Widget : UIView
@property (nonatomic, strong) UIColor * _Nullable backgroundColor;
@property (nonatomic, getter=isOpaque) BOOL opaque;
@property (nonatomic, weak) id <WidgetDelegate> _Nullable delegate;
@property (nonatomic, strong) id <MediaPlayerInfoProvider> _Nullable mediaPlayerInfoProvider;
@property (nonatomic, readonly, strong) WidgetData * _Null_unspecified widgetData;
@property (nonatomic, weak) Event * _Nullable event;
@property (nonatomic, copy) NSString * _Nullable apiToken;
@property (nonatomic, copy) NSString * _Nullable username;
- (nonnull instancetype)initWithWidgetData:(WidgetData * _Nonnull)widgetData event:(Event * _Nonnull)event;
- (void)layoutSubviews;
- (void)reload;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIScrollView;

@interface Widget (SWIFT_EXTENSION(KMSDK)) <UIScrollViewDelegate>
- (UIView * _Nullable)viewForZoomingInScrollView:(UIScrollView * _Nonnull)scrollView SWIFT_WARN_UNUSED_RESULT;
@end






SWIFT_CLASS("_TtC5KMSDK29WidgetContainerViewController")
@interface WidgetContainerViewController : UIViewController
@property (nonatomic, readonly, copy) NSArray<Widget *> * _Nonnull widgets;
@property (nonatomic, strong) Event * _Null_unspecified event;
@property (nonatomic, copy) NSString * _Nullable username;
@property (nonatomic, weak) id <WidgetDelegate> _Nullable widgetDelegate;
@property (nonatomic, weak) id <MediaPlayerInfoProvider> _Nullable mediaPlayerInfoProvider;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP5KMSDK29WidgetDisplayTextInputHandler_")
@protocol WidgetDisplayTextInputHandler
- (void)widgetDisplayTextInputWithInitialText:(NSString * _Nullable)initialText sendMessageCallback:(void (^ _Nonnull)(NSString * _Nonnull))sendMessageCallback;
@end


@interface WidgetContainerViewController (SWIFT_EXTENSION(KMSDK)) <WidgetDisplayTextInputHandler>
- (void)widgetDisplayTextInputWithInitialText:(NSString * _Nullable)initialText sendMessageCallback:(void (^ _Nonnull)(NSString * _Nonnull))sendMessageCallback;
@end


SWIFT_PROTOCOL("_TtP5KMSDK31WidgetDisplaySocialShareHandler_")
@protocol WidgetDisplaySocialShareHandler
- (void)widgetDisplaySocialShareWithUrl:(NSURL * _Nonnull)url;
@end


@interface WidgetContainerViewController (SWIFT_EXTENSION(KMSDK)) <WidgetDisplaySocialShareHandler>
- (void)widgetDisplaySocialShareWithUrl:(NSURL * _Nonnull)url;
@end


@interface WidgetContainerViewController (SWIFT_EXTENSION(KMSDK)) <WidgetDelegate>
- (void (^ _Nullable)(NSDictionary * _Nonnull, void (^ _Nullable)(id _Nullable)))widget:(Widget * _Nonnull)widget handlerForFunctionNamed:(NSString * _Nonnull)functionName SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC5KMSDK10WidgetData")
@interface WidgetData : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable title;
@property (nonatomic, readonly, copy) NSURL * _Nullable iconUrl;
@property (nonatomic, readonly, copy) NSString * _Nullable id;
@property (nonatomic, readonly, strong) NSNumber * _Nullable widgetId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end



SWIFT_PROTOCOL("_TtP5KMSDK30WidgetDisplayClipEditorHandler_")
@protocol WidgetDisplayClipEditorHandler
- (void)widgetDisplayClipEditorWithInitialInfo:(ClipInfo * _Nullable)initialInfo postClipCallback:(void (^ _Nonnull)(ClipInfo * _Nonnull))postClipCallback;
@end



typedef SWIFT_ENUM(NSInteger, WidgetType, closed) {
  WidgetTypeWebview = 0,
  WidgetTypeOverlay = 1,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
