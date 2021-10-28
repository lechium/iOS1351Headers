/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVTransportControlsViewDelegate.h>
#import <AVKit/AVRoutePickerViewInternalDelegate.h>
#import <AVKit/AVPlayerViewControllerContentViewDelegate.h>
#import <AVKit/AVScrubbing.h>

@protocol AVVolumeController;
@class AVPlayerController, NSArray, AVPictureInPictureController, AVNowPlayingInfoController, AVSecondScreenContentViewConnection, AVPlayerViewController, AVPlaybackControlsView, AVTurboModePlaybackControlsPlaceholderView, AVObservationController, AVPlayerControllerTimeResolver, AVTimeFormatter, UIAlertController, AVRouteDetectorCoordinator, NSTimer, UIViewPropertyAnimator, AVPlayerControllerVolumeAnimator, NSUUID, AVPlaybackControlsVisibilityControllerItem, NSNumber, NSString;

@interface AVPlaybackControlsController : NSObject <AVTransportControlsViewDelegate, AVRoutePickerViewInternalDelegate, AVPlayerViewControllerContentViewDelegate, AVScrubbing> {

	BOOL _playerViewControllerIsBeingTransitionedWithResizing;
	BOOL _playerViewControllerIsPresentingFullScreen;
	BOOL _playerViewControllerIsPresentedFullScreen;
	BOOL _playerViewControllerHasInvalidViewControllerHierarchy;
	BOOL _entersFullScreenWhenPlaybackBegins;
	BOOL _allowsEnteringFullScreen;
	BOOL _showsMinimalPlaybackControlsWhenEmbeddedInline;
	BOOL _inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
	BOOL _volumeControlsCanShowSlider;
	BOOL _showsPictureInPictureButton;
	BOOL _showsPlaybackControls;
	BOOL _hasCustomPlaybackControls;
	BOOL _canIncludePlaybackControlsWhenInline;
	BOOL _showsVideoGravityButton;
	BOOL _requiresLinearPlayback;
	BOOL _updatesNowPlayingInfoCenter;
	BOOL _showsDoneButtonWhenFullScreen;
	BOOL _playbackControlsIncludeTransportControls;
	BOOL _playbackControlsIncludeDisplayModeControls;
	BOOL _playbackControlsIncludeVolumeControls;
	BOOL _playbackControlsIncludeStartContentTransitionButtons;
	BOOL _playbackControlsShouldControlSystemVolume;
	BOOL _forcePlaybackControlsHidden;
	BOOL _showsTimecodes;
	BOOL _startLeftwardContentTransitionButtonEnabled;
	BOOL _startRightwardContentTransitionButtonEnabled;
	BOOL _showsLoadingIndicator;
	BOOL _prefersVolumeSliderExpanded;
	BOOL _canIncludeVideoGravityButton;
	BOOL _hasStartedUpdates;
	BOOL _coveringWindow;
	BOOL _hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
	BOOL _hasBecomeReadyToPlay;
	BOOL _multipleRoutesDetected;
	BOOL _resumingUpdates;
	BOOL _prefersMuted;
	BOOL _playbackSuspendedForScrubbing;
	BOOL _hasSeekableLiveStreamingContent;
	BOOL _scrubbingOrSeeking;
	BOOL _shouldIgnoreTimeResolverUpdates;
	BOOL _videoScaled;
	AVPlayerController* _playerController;
	long long _preferredUnobscuredArea;
	NSArray* _customControlItems;
	/*^block*/id _playButtonHandlerForLazyPlayerLoading;
	/*^block*/id _contentTransitionAction;
	AVPictureInPictureController* _pictureInPictureController;
	id<AVVolumeController> _volumeController;
	AVNowPlayingInfoController* _nowPlayingInfoControllerIfLoaded;
	AVSecondScreenContentViewConnection* _secondScreenConnection;
	AVPlayerViewController* _playerViewController;
	AVPlaybackControlsView* _playbackControlsView;
	AVTurboModePlaybackControlsPlaceholderView* _turboModePlaybackControlsPlaceholderView;
	AVObservationController* _observationController;
	AVObservationController* _playbackControlsObservationController;
	AVPlayerControllerTimeResolver* _timeResolver;
	AVTimeFormatter* _elapsedTimeFormatter;
	AVTimeFormatter* _remainingTimeFormatter;
	UIAlertController* _routePickerAlertController;
	AVRouteDetectorCoordinator* _routeDetectorCoordinator;
	id _AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
	NSTimer* _loadingIndicatorTimer;
	UIViewPropertyAnimator* _collapseExpandSliderAnimator;
	AVPlayerControllerVolumeAnimator* _volumeAnimator;
	NSUUID* _playerMuteFadeAnimationID;
	AVPlaybackControlsVisibilityControllerItem* _playbackControlsContainerVisibilityItem;
	AVPlaybackControlsVisibilityControllerItem* _volumeControlsContainerVisibilityItem;
	NSArray* _allVisibilityControllerItems;
	NSNumber* _pendingOrientationChange;
	double _loadingIndicatorTimerDelay;
	long long _timeControlStatus;
	long long _videoGravityButtonType;
	NSString* _uniqueIdentifer;
	NSString* _windowSceneSessionIdentifier;
	CGRect _playbackViewFrame;

}

@property (nonatomic,__weak,readonly) AVPlayerViewController * playerViewController;                                                               //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) AVPlaybackControlsView * playbackControlsView;                                                                        //@synthesize playbackControlsView=_playbackControlsView - In the implementation block
@property (assign,nonatomic,__weak) AVTurboModePlaybackControlsPlaceholderView * turboModePlaybackControlsPlaceholderView;                         //@synthesize turboModePlaybackControlsPlaceholderView=_turboModePlaybackControlsPlaceholderView - In the implementation block
@property (nonatomic,retain) AVNowPlayingInfoController * nowPlayingInfoControllerIfLoaded;                                                        //@synthesize nowPlayingInfoControllerIfLoaded=_nowPlayingInfoControllerIfLoaded - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                                                                    //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) AVObservationController * playbackControlsObservationController;                                                      //@synthesize playbackControlsObservationController=_playbackControlsObservationController - In the implementation block
@property (nonatomic,retain) AVPlayerControllerTimeResolver * timeResolver;                                                                        //@synthesize timeResolver=_timeResolver - In the implementation block
@property (nonatomic,readonly) AVTimeFormatter * elapsedTimeFormatter;                                                                             //@synthesize elapsedTimeFormatter=_elapsedTimeFormatter - In the implementation block
@property (nonatomic,readonly) AVTimeFormatter * remainingTimeFormatter;                                                                           //@synthesize remainingTimeFormatter=_remainingTimeFormatter - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * routePickerAlertController;                                                                //@synthesize routePickerAlertController=_routePickerAlertController - In the implementation block
@property (nonatomic,retain) AVRouteDetectorCoordinator * routeDetectorCoordinator;                                                                //@synthesize routeDetectorCoordinator=_routeDetectorCoordinator - In the implementation block
@property (nonatomic,retain) id AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;                                                          //@synthesize AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver=_AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * loadingIndicatorTimer;                                                                               //@synthesize loadingIndicatorTimer=_loadingIndicatorTimer - In the implementation block
@property (assign,nonatomic,__weak) UIViewPropertyAnimator * collapseExpandSliderAnimator;                                                         //@synthesize collapseExpandSliderAnimator=_collapseExpandSliderAnimator - In the implementation block
@property (nonatomic,retain) id<AVVolumeController> volumeController;                                                                              //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,retain) AVPlayerControllerVolumeAnimator * volumeAnimator;                                                                    //@synthesize volumeAnimator=_volumeAnimator - In the implementation block
@property (nonatomic,retain) NSUUID * playerMuteFadeAnimationID;                                                                                   //@synthesize playerMuteFadeAnimationID=_playerMuteFadeAnimationID - In the implementation block
@property (nonatomic,readonly) AVPlaybackControlsVisibilityControllerItem * playbackControlsContainerVisibilityItem;                               //@synthesize playbackControlsContainerVisibilityItem=_playbackControlsContainerVisibilityItem - In the implementation block
@property (nonatomic,readonly) AVPlaybackControlsVisibilityControllerItem * volumeControlsContainerVisibilityItem;                                 //@synthesize volumeControlsContainerVisibilityItem=_volumeControlsContainerVisibilityItem - In the implementation block
@property (nonatomic,readonly) NSArray * allVisibilityControllerItems;                                                                             //@synthesize allVisibilityControllerItems=_allVisibilityControllerItems - In the implementation block
@property (nonatomic,readonly) BOOL showsMediaSelectionButton; 
@property (nonatomic,readonly) BOOL showsSkipButtons; 
@property (nonatomic,readonly) BOOL showsStartContentTransitionButtons; 
@property (nonatomic,readonly) BOOL showsProminentPlayButton; 
@property (nonatomic,readonly) BOOL playButtonsShowPauseGlyph; 
@property (nonatomic,readonly) BOOL prominentPlayButtonCanShowPauseGlyph; 
@property (nonatomic,readonly) BOOL showsRoutePickerView; 
@property (nonatomic,readonly) BOOL showsTransportControls; 
@property (nonatomic,readonly) BOOL canShowLoadingIndicator; 
@property (getter=isSeekingEnabled,nonatomic,readonly) BOOL seekingEnabled; 
@property (assign,nonatomic) BOOL showsLoadingIndicator;                                                                                           //@synthesize showsLoadingIndicator=_showsLoadingIndicator - In the implementation block
@property (assign,nonatomic) BOOL prefersVolumeSliderExpanded;                                                                                     //@synthesize prefersVolumeSliderExpanded=_prefersVolumeSliderExpanded - In the implementation block
@property (assign,nonatomic) BOOL canIncludeVideoGravityButton;                                                                                    //@synthesize canIncludeVideoGravityButton=_canIncludeVideoGravityButton - In the implementation block
@property (nonatomic,retain) NSNumber * pendingOrientationChange;                                                                                  //@synthesize pendingOrientationChange=_pendingOrientationChange - In the implementation block
@property (assign,nonatomic) BOOL hasStartedUpdates;                                                                                               //@synthesize hasStartedUpdates=_hasStartedUpdates - In the implementation block
@property (nonatomic,readonly) BOOL needsTimeResolver; 
@property (assign,getter=isCoveringWindow,nonatomic) BOOL coveringWindow;                                                                          //@synthesize coveringWindow=_coveringWindow - In the implementation block
@property (getter=isFullScreen,nonatomic,readonly) BOOL fullScreen; 
@property (assign,nonatomic) BOOL hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;                                                          //@synthesize hasPlaybackBegunSincePlayerControllerBecameReadyToPlay=_hasPlaybackBegunSincePlayerControllerBecameReadyToPlay - In the implementation block
@property (assign,nonatomic) BOOL hasBecomeReadyToPlay;                                                                                            //@synthesize hasBecomeReadyToPlay=_hasBecomeReadyToPlay - In the implementation block
@property (assign,nonatomic) BOOL multipleRoutesDetected;                                                                                          //@synthesize multipleRoutesDetected=_multipleRoutesDetected - In the implementation block
@property (nonatomic,readonly) double minimumTime; 
@property (nonatomic,readonly) double maximumTime; 
@property (nonatomic,readonly) double targetTime; 
@property (nonatomic,readonly) double currentTime; 
@property (assign,nonatomic) double loadingIndicatorTimerDelay;                                                                                    //@synthesize loadingIndicatorTimerDelay=_loadingIndicatorTimerDelay - In the implementation block
@property (assign,getter=isResumingUpdates,nonatomic) BOOL resumingUpdates;                                                                        //@synthesize resumingUpdates=_resumingUpdates - In the implementation block
@property (assign,nonatomic) BOOL prefersMuted;                                                                                                    //@synthesize prefersMuted=_prefersMuted - In the implementation block
@property (assign,getter=isPlaybackSuspendedForScrubbing,nonatomic) BOOL playbackSuspendedForScrubbing;                                            //@synthesize playbackSuspendedForScrubbing=_playbackSuspendedForScrubbing - In the implementation block
@property (assign,nonatomic) long long timeControlStatus;                                                                                          //@synthesize timeControlStatus=_timeControlStatus - In the implementation block
@property (assign,nonatomic) BOOL hasSeekableLiveStreamingContent;                                                                                 //@synthesize hasSeekableLiveStreamingContent=_hasSeekableLiveStreamingContent - In the implementation block
@property (assign,getter=isScrubbingOrSeeking,nonatomic) BOOL scrubbingOrSeeking;                                                                  //@synthesize scrubbingOrSeeking=_scrubbingOrSeeking - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreTimeResolverUpdates;                                                                                 //@synthesize shouldIgnoreTimeResolverUpdates=_shouldIgnoreTimeResolverUpdates - In the implementation block
@property (assign,nonatomic) long long videoGravityButtonType;                                                                                     //@synthesize videoGravityButtonType=_videoGravityButtonType - In the implementation block
@property (assign,nonatomic) CGRect playbackViewFrame;                                                                                             //@synthesize playbackViewFrame=_playbackViewFrame - In the implementation block
@property (assign,getter=isVideoScaled,nonatomic) BOOL videoScaled;                                                                                //@synthesize videoScaled=_videoScaled - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifer;                                                                                         //@synthesize uniqueIdentifer=_uniqueIdentifer - In the implementation block
@property (nonatomic,retain) NSString * windowSceneSessionIdentifier;                                                                              //@synthesize windowSceneSessionIdentifier=_windowSceneSessionIdentifier - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerController * playerController;                                                                         //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic) BOOL playerViewControllerIsBeingTransitionedWithResizing;                                                             //@synthesize playerViewControllerIsBeingTransitionedWithResizing=_playerViewControllerIsBeingTransitionedWithResizing - In the implementation block
@property (assign,nonatomic) BOOL playerViewControllerIsPresentingFullScreen;                                                                      //@synthesize playerViewControllerIsPresentingFullScreen=_playerViewControllerIsPresentingFullScreen - In the implementation block
@property (assign,nonatomic) BOOL playerViewControllerIsPresentedFullScreen;                                                                       //@synthesize playerViewControllerIsPresentedFullScreen=_playerViewControllerIsPresentedFullScreen - In the implementation block
@property (assign,nonatomic) BOOL playerViewControllerHasInvalidViewControllerHierarchy;                                                           //@synthesize playerViewControllerHasInvalidViewControllerHierarchy=_playerViewControllerHasInvalidViewControllerHierarchy - In the implementation block
@property (assign,nonatomic) BOOL entersFullScreenWhenPlaybackBegins;                                                                              //@synthesize entersFullScreenWhenPlaybackBegins=_entersFullScreenWhenPlaybackBegins - In the implementation block
@property (nonatomic,readonly) BOOL shouldEnterFullScreenWhenPlaybackBegins; 
@property (assign,nonatomic) long long preferredUnobscuredArea;                                                                                    //@synthesize preferredUnobscuredArea=_preferredUnobscuredArea - In the implementation block
@property (assign,nonatomic) BOOL allowsEnteringFullScreen;                                                                                        //@synthesize allowsEnteringFullScreen=_allowsEnteringFullScreen - In the implementation block
@property (assign,nonatomic) BOOL showsMinimalPlaybackControlsWhenEmbeddedInline;                                                                  //@synthesize showsMinimalPlaybackControlsWhenEmbeddedInline=_showsMinimalPlaybackControlsWhenEmbeddedInline - In the implementation block
@property (assign,nonatomic) BOOL inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;                                                       //@synthesize inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused=_inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused - In the implementation block
@property (assign,nonatomic) BOOL volumeControlsCanShowSlider;                                                                                     //@synthesize volumeControlsCanShowSlider=_volumeControlsCanShowSlider - In the implementation block
@property (nonatomic,copy) NSArray * customControlItems;                                                                                           //@synthesize customControlItems=_customControlItems - In the implementation block
@property (assign,nonatomic) BOOL showsPictureInPictureButton;                                                                                     //@synthesize showsPictureInPictureButton=_showsPictureInPictureButton - In the implementation block
@property (assign,nonatomic) BOOL showsPlaybackControls;                                                                                           //@synthesize showsPlaybackControls=_showsPlaybackControls - In the implementation block
@property (assign,nonatomic) BOOL hasCustomPlaybackControls;                                                                                       //@synthesize hasCustomPlaybackControls=_hasCustomPlaybackControls - In the implementation block
@property (assign,nonatomic) BOOL canIncludePlaybackControlsWhenInline;                                                                            //@synthesize canIncludePlaybackControlsWhenInline=_canIncludePlaybackControlsWhenInline - In the implementation block
@property (assign,nonatomic) BOOL showsVideoGravityButton;                                                                                         //@synthesize showsVideoGravityButton=_showsVideoGravityButton - In the implementation block
@property (assign,nonatomic) BOOL requiresLinearPlayback;                                                                                          //@synthesize requiresLinearPlayback=_requiresLinearPlayback - In the implementation block
@property (assign,nonatomic) BOOL updatesNowPlayingInfoCenter;                                                                                     //@synthesize updatesNowPlayingInfoCenter=_updatesNowPlayingInfoCenter - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButtonWhenFullScreen;                                                                                   //@synthesize showsDoneButtonWhenFullScreen=_showsDoneButtonWhenFullScreen - In the implementation block
@property (assign,nonatomic) BOOL playbackControlsIncludeTransportControls;                                                                        //@synthesize playbackControlsIncludeTransportControls=_playbackControlsIncludeTransportControls - In the implementation block
@property (assign,nonatomic) BOOL playbackControlsIncludeDisplayModeControls;                                                                      //@synthesize playbackControlsIncludeDisplayModeControls=_playbackControlsIncludeDisplayModeControls - In the implementation block
@property (assign,nonatomic) BOOL playbackControlsIncludeVolumeControls;                                                                           //@synthesize playbackControlsIncludeVolumeControls=_playbackControlsIncludeVolumeControls - In the implementation block
@property (assign,nonatomic) BOOL playbackControlsIncludeStartContentTransitionButtons;                                                            //@synthesize playbackControlsIncludeStartContentTransitionButtons=_playbackControlsIncludeStartContentTransitionButtons - In the implementation block
@property (assign,nonatomic) BOOL playbackControlsShouldControlSystemVolume;                                                                       //@synthesize playbackControlsShouldControlSystemVolume=_playbackControlsShouldControlSystemVolume - In the implementation block
@property (assign,nonatomic) BOOL forcePlaybackControlsHidden;                                                                                     //@synthesize forcePlaybackControlsHidden=_forcePlaybackControlsHidden - In the implementation block
@property (assign,nonatomic) BOOL showsTimecodes;                                                                                                  //@synthesize showsTimecodes=_showsTimecodes - In the implementation block
@property (nonatomic,copy) id playButtonHandlerForLazyPlayerLoading;                                                                               //@synthesize playButtonHandlerForLazyPlayerLoading=_playButtonHandlerForLazyPlayerLoading - In the implementation block
@property (assign,getter=isStartLeftwardContentTransitionButtonEnabled,nonatomic) BOOL startLeftwardContentTransitionButtonEnabled;                //@synthesize startLeftwardContentTransitionButtonEnabled=_startLeftwardContentTransitionButtonEnabled - In the implementation block
@property (assign,getter=isStartRightwardContentTransitionButtonEnabled,nonatomic) BOOL startRightwardContentTransitionButtonEnabled;              //@synthesize startRightwardContentTransitionButtonEnabled=_startRightwardContentTransitionButtonEnabled - In the implementation block
@property (nonatomic,copy) id contentTransitionAction;                                                                                             //@synthesize contentTransitionAction=_contentTransitionAction - In the implementation block
@property (nonatomic,retain) AVPictureInPictureController * pictureInPictureController;                                                            //@synthesize pictureInPictureController=_pictureInPictureController - In the implementation block
@property (nonatomic,retain) AVSecondScreenContentViewConnection * secondScreenConnection;                                                         //@synthesize secondScreenConnection=_secondScreenConnection - In the implementation block
@property (nonatomic,readonly) BOOL tapGestureRecognizersCanReceiveTouches; 
@property (nonatomic,readonly) BOOL entersFullScreenWhenTapped; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingFullScreen;
+(id)keyPathsForValuesAffectingShowsRoutePickerView;
+(id)keyPathsForValuesAffectingShowsProminentPlayButton;
+(id)keyPathsForValuesAffectingProminentPlayButtonCanShowPauseGlyph;
+(id)keyPathsForValuesAffectingShowsTransportControls;
+(id)keyPathsForValuesAffectingShouldEnterFullScreenWhenPlaybackBegins;
+(id)keyPathsForValuesAffectingShowsMediaSelectionButton;
+(id)keyPathsForValuesAffectingCurrentTime;
+(id)keyPathsForValuesAffectingMinimumTime;
+(id)keyPathsForValuesAffectingMaximumTime;
+(id)keyPathsForValuesAffectingSeekingEnabled;
+(id)keyPathsForValuesAffectingShowsSkipButtons;
+(id)keyPathsForValuesAffectingShowsStartContentTransitionButtons;
+(id)keyPathsForValuesAffectingCanShowLoadingIndicator;
+(id)keyPathsForValuesAffectingPlayButtonsShowPauseGlyph;
+(id)keyPathsForValuesAffectingNeedsTimeResolver;
-(void)dealloc;
-(double)currentTime;
-(BOOL)isFullScreen;
-(long long)timeControlStatus;
-(BOOL)multipleRoutesDetected;
-(BOOL)hasSeekableLiveStreamingContent;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(BOOL)showsPlaybackControls;
-(void)setShowsPlaybackControls:(BOOL)arg1 ;
-(void)beginScrubbing;
-(void)endScrubbing;
-(AVPictureInPictureController *)pictureInPictureController;
-(void)setVolumeController:(id<AVVolumeController>)arg1 ;
-(id<AVVolumeController>)volumeController;
-(void)setUpdatesNowPlayingInfoCenter:(BOOL)arg1 ;
-(void)setShowsMinimalPlaybackControlsWhenEmbeddedInline:(BOOL)arg1 ;
-(void)setAllowsEnteringFullScreen:(BOOL)arg1 ;
-(void)setPreferredUnobscuredArea:(long long)arg1 ;
-(void)setPlayButtonHandlerForLazyPlayerLoading:(id)arg1 ;
-(BOOL)updatesNowPlayingInfoCenter;
-(BOOL)showsMinimalPlaybackControlsWhenEmbeddedInline;
-(BOOL)allowsEnteringFullScreen;
-(id)playButtonHandlerForLazyPlayerLoading;
-(long long)preferredUnobscuredArea;
-(AVPlayerViewController *)playerViewController;
-(AVObservationController *)observationController;
-(void)setMultipleRoutesDetected:(BOOL)arg1 ;
-(AVSecondScreenContentViewConnection *)secondScreenConnection;
-(void)setSecondScreenConnection:(AVSecondScreenContentViewConnection *)arg1 ;
-(BOOL)isVideoScaled;
-(void)setVideoScaled:(BOOL)arg1 ;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
-(BOOL)requiresLinearPlayback;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(void)endChangingVolume;
-(void)setCanIncludePlaybackControlsWhenInline:(BOOL)arg1 ;
-(void)setShowsTimecodes:(BOOL)arg1 ;
-(BOOL)hasCustomPlaybackControls;
-(BOOL)playbackControlsIncludeTransportControls;
-(void)setPlaybackControlsIncludeTransportControls:(BOOL)arg1 ;
-(BOOL)playbackControlsIncludeDisplayModeControls;
-(void)setPlaybackControlsIncludeDisplayModeControls:(BOOL)arg1 ;
-(void)setPlaybackControlsIncludeVolumeControls:(BOOL)arg1 ;
-(BOOL)volumeControlsCanShowSlider;
-(void)setVolumeControlsCanShowSlider:(BOOL)arg1 ;
-(void)setEntersFullScreenWhenPlaybackBegins:(BOOL)arg1 ;
-(void)setCustomControlItems:(NSArray *)arg1 ;
-(BOOL)entersFullScreenWhenPlaybackBegins;
-(AVPlayerControllerVolumeAnimator *)volumeAnimator;
-(void)setVolumeAnimator:(AVPlayerControllerVolumeAnimator *)arg1 ;
-(BOOL)showsTimecodes;
-(BOOL)playbackControlsIncludeVolumeControls;
-(NSArray *)customControlItems;
-(BOOL)canIncludePlaybackControlsWhenInline;
-(BOOL)entersFullScreenWhenTapped;
-(void)setPlaybackControlsShouldControlSystemVolume:(BOOL)arg1 ;
-(BOOL)playbackControlsShouldControlSystemVolume;
-(void)scrubToTime:(double)arg1 resolution:(double)arg2 ;
-(void)routePickerViewDidEndPresentingRoutes:(id)arg1 ;
-(unsigned long long)overrideRouteSharingPolicyForRoutePickerView:(id)arg1 ;
-(id)overrideRoutingContextUIDForRoutePickerView:(id)arg1 ;
-(void)routePickerViewWillBeginPresentingRoutes:(id)arg1 ;
-(double)targetTime;
-(void)playerViewControllerContentView:(id)arg1 willLoadPlaybackControlsView:(id)arg2 ;
-(void)playerViewControllerContentView:(id)arg1 willLoadTurboModePlaceholderView:(id)arg2 ;
-(BOOL)playerViewControllerContentViewIsPlayingOnSecondScreen:(id)arg1 ;
-(void)playerViewControllerContentViewPlaybackContentContainerViewChanged:(id)arg1 ;
-(void)playerViewControllerContentViewDidLayoutSubviews:(id)arg1 ;
-(void)playerViewControllerContentViewDidMoveToSuperviewOrWindow:(id)arg1 ;
-(BOOL)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(id)arg1 ;
-(UIEdgeInsets)playerViewControllerContentViewEdgeInsetsForLetterboxedVideo:(id)arg1 ;
-(void)playerViewControllerContentViewDidChangeVideoGravity:(id)arg1 ;
-(BOOL)playerViewControllerContentViewHasActiveTransition:(id)arg1 ;
-(BOOL)playerViewControllerContentViewIsBeingTransitionedFromFullScreen:(id)arg1 ;
-(id)playerViewControllerContentViewOverrideLayoutClass:(id)arg1 ;
-(void)playerViewControllerContentViewDidUpdateScrollingStatus:(id)arg1 ;
-(void)transportControlsNeedsLayoutIfNeeded:(id)arg1 ;
-(void)transportControls:(id)arg1 scrubberDidBeginScrubbing:(id)arg2 ;
-(void)transportControls:(id)arg1 scrubberDidScrub:(id)arg2 ;
-(void)transportControls:(id)arg1 scrubberDidEndScrubbing:(id)arg2 ;
-(id)initWithPlayerViewController:(id)arg1 ;
-(void)startUpdatesIfNeeded;
-(void)toggleMuted;
-(void)setPrefersVolumeSliderExpanded:(BOOL)arg1 ;
-(void)setPlayerViewControllerIsPresentingFullScreen:(BOOL)arg1 ;
-(void)setPlayerViewControllerIsPresentedFullScreen:(BOOL)arg1 ;
-(void)setPlayerViewControllerIsBeingTransitionedWithResizing:(BOOL)arg1 ;
-(void)setHasCustomPlaybackControls:(BOOL)arg1 ;
-(void)setShowsDoneButtonWhenFullScreen:(BOOL)arg1 ;
-(void)setShowsVideoGravityButton:(BOOL)arg1 ;
-(void)setCoveringWindow:(BOOL)arg1 ;
-(void)setCanIncludeVideoGravityButton:(BOOL)arg1 ;
-(void)setShowsPictureInPictureButton:(BOOL)arg1 ;
-(BOOL)showsRoutePickerView;
-(BOOL)showsProminentPlayButton;
-(BOOL)prominentPlayButtonCanShowPauseGlyph;
-(BOOL)showsTransportControls;
-(BOOL)shouldEnterFullScreenWhenPlaybackBegins;
-(BOOL)showsMediaSelectionButton;
-(double)minimumTime;
-(double)maximumTime;
-(BOOL)isSeekingEnabled;
-(BOOL)showsSkipButtons;
-(BOOL)showsStartContentTransitionButtons;
-(BOOL)canShowLoadingIndicator;
-(BOOL)playButtonsShowPauseGlyph;
-(BOOL)needsTimeResolver;
-(BOOL)tapGestureRecognizersCanReceiveTouches;
-(void)playbackControlsViewDidLoad:(id)arg1 ;
-(void)turboModePlaybackControlsPlaceholderViewDidLoad:(id)arg1 ;
-(void)secondScreenConnectionDidBecomeActive:(id)arg1 ;
-(void)secondScreenConnectionDidResignActive:(id)arg1 ;
-(void)handleVolumeChange:(id)arg1 ;
-(void)handleCurrentRouteSupportsVolumeControlChanged:(id)arg1 ;
-(void)volumeSliderValueDidChange:(id)arg1 ;
-(void)volumeButtonTapTriggered:(id)arg1 ;
-(void)volumeButtonLongPressTriggered:(id)arg1 ;
-(void)beginChangingVolume;
-(void)volumeButtonPanChanged:(id)arg1 ;
-(BOOL)_prefersVolumeSliderExpandedAutomatically;
-(void)_showOrHideAudioControls;
-(void)_showOrHideDisplayModeControls;
-(void)_updateVolumeButtonGlyph;
-(id)_volumeButtonMicaPackageState;
-(void)_updateVolumeSliderValueWithSystemVolume:(float)arg1 animated:(BOOL)arg2 ;
-(void)prominentPlayButtonTouchUpInside:(id)arg1 ;
-(void)skipButtonTouchUpInside:(id)arg1 ;
-(void)skipButtonLongPressTriggered:(id)arg1 ;
-(void)skipButtonLongPressEnded:(id)arg1 ;
-(void)skipButtonForcePressChanged:(id)arg1 ;
-(void)startContentTransitionButtonTouchUpInside:(id)arg1 ;
-(void)_bindEnabledStateOfControls:(id)arg1 toKeyPath:(id)arg2 ;
-(void)_bindInclusionOfControlItems:(id)arg1 toKeyPath:(id)arg2 ;
-(BOOL)_hasVisibilityControllerItemThatPrefersVisible;
-(void)_observeBoolForKeyPath:(id)arg1 usingKeyValueObservationController:(id)arg2 observationHandler:(/*^block*/id)arg3 ;
-(void)_seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)setForcePlaybackControlsHidden:(BOOL)arg1 ;
-(void)_updatePlaybackControlsVisibleAndObservingUpdates;
-(void)_startObservingForPlaybackViewUpdates;
-(void)_startObservingPotentiallyUnimplementedPlayerControllerProperties;
-(BOOL)_wantsRouteDetectionEnabled;
-(void)_updateSkipButtonsEnableLongPress;
-(void)updateControlsInclusion;
-(void)_updateControlInclusion;
-(void)_updateContainerInclusion;
-(void)_updateOrCreateTimeResolverIfNeeded;
-(void)_updateScrubberAndTimeLabels;
-(void)_updateVideoGravityButtonType;
-(void)_updateHasPlaybackBegunSincePlayerControllerBecameReadyToPlay:(BOOL)arg1 playing:(BOOL)arg2 userDidEndTappingProminentPlayButton:(BOOL)arg3 ;
-(void)_updatePrefersInspectionSuspended;
-(void)_updateNowPlayingInfoCenter;
-(void)_updateEdgeInsetsForLetterboxedContentInContentView:(id)arg1 ;
-(void)_updateSecondScreenConnectionReadyToConnect;
-(BOOL)playerViewControllerIsBeingTransitionedWithResizing;
-(BOOL)playerViewControllerIsPresentingFullScreen;
-(BOOL)playerViewControllerIsPresentedFullScreen;
-(BOOL)playerViewControllerHasInvalidViewControllerHierarchy;
-(void)setPlayerViewControllerHasInvalidViewControllerHierarchy:(BOOL)arg1 ;
-(BOOL)inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
-(void)setInlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused:(BOOL)arg1 ;
-(BOOL)showsPictureInPictureButton;
-(BOOL)showsVideoGravityButton;
-(BOOL)showsDoneButtonWhenFullScreen;
-(BOOL)playbackControlsIncludeStartContentTransitionButtons;
-(void)setPlaybackControlsIncludeStartContentTransitionButtons:(BOOL)arg1 ;
-(BOOL)forcePlaybackControlsHidden;
-(BOOL)isStartLeftwardContentTransitionButtonEnabled;
-(void)setStartLeftwardContentTransitionButtonEnabled:(BOOL)arg1 ;
-(BOOL)isStartRightwardContentTransitionButtonEnabled;
-(void)setStartRightwardContentTransitionButtonEnabled:(BOOL)arg1 ;
-(id)contentTransitionAction;
-(void)setContentTransitionAction:(id)arg1 ;
-(void)setPictureInPictureController:(AVPictureInPictureController *)arg1 ;
-(AVNowPlayingInfoController *)nowPlayingInfoControllerIfLoaded;
-(void)setNowPlayingInfoControllerIfLoaded:(AVNowPlayingInfoController *)arg1 ;
-(AVPlaybackControlsView *)playbackControlsView;
-(void)setPlaybackControlsView:(AVPlaybackControlsView *)arg1 ;
-(AVTurboModePlaybackControlsPlaceholderView *)turboModePlaybackControlsPlaceholderView;
-(void)setTurboModePlaybackControlsPlaceholderView:(AVTurboModePlaybackControlsPlaceholderView *)arg1 ;
-(AVObservationController *)playbackControlsObservationController;
-(void)setPlaybackControlsObservationController:(AVObservationController *)arg1 ;
-(AVPlayerControllerTimeResolver *)timeResolver;
-(void)setTimeResolver:(AVPlayerControllerTimeResolver *)arg1 ;
-(AVTimeFormatter *)elapsedTimeFormatter;
-(AVTimeFormatter *)remainingTimeFormatter;
-(UIAlertController *)routePickerAlertController;
-(void)setRoutePickerAlertController:(UIAlertController *)arg1 ;
-(AVRouteDetectorCoordinator *)routeDetectorCoordinator;
-(void)setRouteDetectorCoordinator:(AVRouteDetectorCoordinator *)arg1 ;
-(id)AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
-(void)setAVRouteDetectorCoordinatorMultipleRoutesDetectedObserver:(id)arg1 ;
-(NSTimer *)loadingIndicatorTimer;
-(void)setLoadingIndicatorTimer:(NSTimer *)arg1 ;
-(UIViewPropertyAnimator *)collapseExpandSliderAnimator;
-(void)setCollapseExpandSliderAnimator:(UIViewPropertyAnimator *)arg1 ;
-(NSUUID *)playerMuteFadeAnimationID;
-(void)setPlayerMuteFadeAnimationID:(NSUUID *)arg1 ;
-(AVPlaybackControlsVisibilityControllerItem *)playbackControlsContainerVisibilityItem;
-(AVPlaybackControlsVisibilityControllerItem *)volumeControlsContainerVisibilityItem;
-(NSArray *)allVisibilityControllerItems;
-(BOOL)prefersVolumeSliderExpanded;
-(BOOL)canIncludeVideoGravityButton;
-(NSNumber *)pendingOrientationChange;
-(void)setPendingOrientationChange:(NSNumber *)arg1 ;
-(BOOL)hasStartedUpdates;
-(void)setHasStartedUpdates:(BOOL)arg1 ;
-(BOOL)isCoveringWindow;
-(BOOL)hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
-(void)setHasPlaybackBegunSincePlayerControllerBecameReadyToPlay:(BOOL)arg1 ;
-(BOOL)hasBecomeReadyToPlay;
-(void)setHasBecomeReadyToPlay:(BOOL)arg1 ;
-(double)loadingIndicatorTimerDelay;
-(void)setLoadingIndicatorTimerDelay:(double)arg1 ;
-(BOOL)isResumingUpdates;
-(void)setResumingUpdates:(BOOL)arg1 ;
-(BOOL)prefersMuted;
-(void)setPrefersMuted:(BOOL)arg1 ;
-(BOOL)isPlaybackSuspendedForScrubbing;
-(void)setPlaybackSuspendedForScrubbing:(BOOL)arg1 ;
-(void)setTimeControlStatus:(long long)arg1 ;
-(void)setHasSeekableLiveStreamingContent:(BOOL)arg1 ;
-(BOOL)isScrubbingOrSeeking;
-(void)setScrubbingOrSeeking:(BOOL)arg1 ;
-(BOOL)shouldIgnoreTimeResolverUpdates;
-(void)setShouldIgnoreTimeResolverUpdates:(BOOL)arg1 ;
-(long long)videoGravityButtonType;
-(void)setVideoGravityButtonType:(long long)arg1 ;
-(CGRect)playbackViewFrame;
-(void)setPlaybackViewFrame:(CGRect)arg1 ;
-(NSString *)uniqueIdentifer;
-(NSString *)windowSceneSessionIdentifier;
-(void)setWindowSceneSessionIdentifier:(NSString *)arg1 ;
@end
