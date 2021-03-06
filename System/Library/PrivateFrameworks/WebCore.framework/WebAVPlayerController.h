/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebCore/WebCore-Structs.h>
@class WebAVMediaSelectionOption, AVPlayerController, NSArray, AVValueTiming, NSString;

@interface WebAVPlayerController : NSObject {

	WebAVMediaSelectionOption* _currentAudioMediaSelectionOption;
	WebAVMediaSelectionOption* _currentLegibleMediaSelectionOption;
	BOOL _pictureInPictureInterrupted;
	BOOL _muted;
	BOOL _liveStreamEventModePossible;
	BOOL _isScrubbing;
	BOOL _canScanBackward;
	BOOL _canPlay;
	BOOL _canPause;
	BOOL _canTogglePlayback;
	BOOL _canSeek;
	BOOL _hasEnabledAudio;
	BOOL _hasEnabledVideo;
	BOOL _hasVideo;
	BOOL _playingOnSecondScreen;
	BOOL _externalPlaybackActive;
	BOOL _allowsExternalPlayback;
	BOOL _pictureInPicturePossible;
	AVPlayerController* _playerControllerProxy;
	PlaybackSessionModel* _delegate;
	PlaybackSessionInterfaceAVKit* _playbackSessionInterface;
	double _rate;
	double _contentDuration;
	double _contentDurationWithinEndTimes;
	NSArray* _loadedTimeRanges;
	long long _status;
	AVValueTiming* _timing;
	NSArray* _seekableTimeRanges;
	NSArray* _audioMediaSelectionOptions;
	NSArray* _legibleMediaSelectionOptions;
	long long _externalPlaybackType;
	NSString* _externalPlaybackAirPlayDeviceLocalizedName;
	double _seekableTimeRangesLastModifiedTime;
	double _liveUpdateInterval;
	AVValueTiming* _minTiming;
	AVValueTiming* _maxTiming;
	CGSize _contentDimensions;

}

@property (retain) AVPlayerController * playerControllerProxy;                                       //@synthesize playerControllerProxy=_playerControllerProxy - In the implementation block
@property (assign) PlaybackSessionModel* delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign) PlaybackSessionInterfaceAVKit* playbackSessionInterface;                          //@synthesize playbackSessionInterface=_playbackSessionInterface - In the implementation block
@property (readonly) BOOL canScanForward; 
@property (assign) BOOL canScanBackward;                                                             //@synthesize canScanBackward=_canScanBackward - In the implementation block
@property (readonly) BOOL canSeekToBeginning; 
@property (readonly) BOOL canSeekToEnd; 
@property (readonly) BOOL isScrubbing; 
@property (assign) BOOL canPlay;                                                                     //@synthesize canPlay=_canPlay - In the implementation block
@property (getter=isPlaying) BOOL playing; 
@property (assign) BOOL canPause;                                                                    //@synthesize canPause=_canPause - In the implementation block
@property (assign) BOOL canTogglePlayback;                                                           //@synthesize canTogglePlayback=_canTogglePlayback - In the implementation block
@property (assign) double rate;                                                                      //@synthesize rate=_rate - In the implementation block
@property (assign) BOOL canSeek;                                                                     //@synthesize canSeek=_canSeek - In the implementation block
@property (assign) double contentDuration;                                                           //@synthesize contentDuration=_contentDuration - In the implementation block
@property (assign) CGSize contentDimensions;                                                         //@synthesize contentDimensions=_contentDimensions - In the implementation block
@property (assign) BOOL hasEnabledAudio;                                                             //@synthesize hasEnabledAudio=_hasEnabledAudio - In the implementation block
@property (assign) BOOL hasEnabledVideo;                                                             //@synthesize hasEnabledVideo=_hasEnabledVideo - In the implementation block
@property (assign) BOOL hasVideo;                                                                    //@synthesize hasVideo=_hasVideo - In the implementation block
@property (readonly) double minTime; 
@property (readonly) double maxTime; 
@property (assign) double contentDurationWithinEndTimes;                                             //@synthesize contentDurationWithinEndTimes=_contentDurationWithinEndTimes - In the implementation block
@property (retain) NSArray * loadedTimeRanges;                                                       //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
@property (assign) long long status;                                                                 //@synthesize status=_status - In the implementation block
@property (retain) AVValueTiming * timing;                                                           //@synthesize timing=_timing - In the implementation block
@property (retain) NSArray * seekableTimeRanges;                                                     //@synthesize seekableTimeRanges=_seekableTimeRanges - In the implementation block
@property (getter=isMuted) BOOL muted; 
@property (assign) double volume; 
@property (readonly) BOOL hasMediaSelectionOptions; 
@property (readonly) BOOL hasAudioMediaSelectionOptions; 
@property (retain) NSArray * audioMediaSelectionOptions;                                             //@synthesize audioMediaSelectionOptions=_audioMediaSelectionOptions - In the implementation block
@property (retain) WebAVMediaSelectionOption * currentAudioMediaSelectionOption; 
@property (readonly) BOOL hasLegibleMediaSelectionOptions; 
@property (retain) NSArray * legibleMediaSelectionOptions;                                           //@synthesize legibleMediaSelectionOptions=_legibleMediaSelectionOptions - In the implementation block
@property (retain) WebAVMediaSelectionOption * currentLegibleMediaSelectionOption; 
@property (getter=isPlayingOnExternalScreen,readonly) BOOL playingOnExternalScreen; 
@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen;              //@synthesize playingOnSecondScreen=_playingOnSecondScreen - In the implementation block
@property (getter=isExternalPlaybackActive) BOOL externalPlaybackActive;                             //@synthesize externalPlaybackActive=_externalPlaybackActive - In the implementation block
@property (assign) long long externalPlaybackType;                                                   //@synthesize externalPlaybackType=_externalPlaybackType - In the implementation block
@property (retain) NSString * externalPlaybackAirPlayDeviceLocalizedName;                            //@synthesize externalPlaybackAirPlayDeviceLocalizedName=_externalPlaybackAirPlayDeviceLocalizedName - In the implementation block
@property (assign) BOOL allowsExternalPlayback;                                                      //@synthesize allowsExternalPlayback=_allowsExternalPlayback - In the implementation block
@property (getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;                         //@synthesize pictureInPicturePossible=_pictureInPicturePossible - In the implementation block
@property (getter=isPictureInPictureInterrupted) BOOL pictureInPictureInterrupted; 
@property (assign) double seekableTimeRangesLastModifiedTime;                                        //@synthesize seekableTimeRangesLastModifiedTime=_seekableTimeRangesLastModifiedTime - In the implementation block
@property (assign) double liveUpdateInterval;                                                        //@synthesize liveUpdateInterval=_liveUpdateInterval - In the implementation block
@property (nonatomic,retain) AVValueTiming * minTiming;                                              //@synthesize minTiming=_minTiming - In the implementation block
@property (nonatomic,retain) AVValueTiming * maxTiming;                                              //@synthesize maxTiming=_maxTiming - In the implementation block
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingHasLiveStreamingContent;
+(id)keyPathsForValuesAffectingMaxTime;
+(id)keyPathsForValuesAffectingMinTime;
+(id)keyPathsForValuesAffectingCanScanForward;
+(id)keyPathsForValuesAffectingCanSeekToBeginning;
+(id)keyPathsForValuesAffectingCanSeekToEnd;
+(id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+(id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+(id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;
-(id)init;
-(void)dealloc;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(PlaybackSessionModel*)delegate;
-(void)setDelegate:(PlaybackSessionModel*)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSArray *)loadedTimeRanges;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(BOOL)isPlaying;
-(void)volumeChanged:(double)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(AVValueTiming *)timing;
-(BOOL)isMuted;
-(void)setPlaying:(BOOL)arg1 ;
-(id)player;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(double)seekableTimeRangesLastModifiedTime;
-(double)liveUpdateInterval;
-(NSArray *)seekableTimeRanges;
-(BOOL)isExternalPlaybackActive;
-(long long)externalPlaybackType;
-(BOOL)allowsExternalPlayback;
-(void)setPlaybackSessionInterface:(PlaybackSessionInterfaceAVKit*)arg1 ;
-(void)setExternalPlaybackActive:(BOOL)arg1 ;
-(void)setContentDuration:(double)arg1 ;
-(void)setContentDurationWithinEndTimes:(double)arg1 ;
-(void)setCanPlay:(BOOL)arg1 ;
-(void)setCanPause:(BOOL)arg1 ;
-(void)setCanTogglePlayback:(BOOL)arg1 ;
-(void)setHasEnabledAudio:(BOOL)arg1 ;
-(void)setCanSeek:(BOOL)arg1 ;
-(BOOL)isScrubbing;
-(void)setTiming:(AVValueTiming *)arg1 ;
-(double)contentDuration;
-(void)setSeekableTimeRanges:(NSArray *)arg1 ;
-(void)setSeekableTimeRangesLastModifiedTime:(double)arg1 ;
-(void)setLiveUpdateInterval:(double)arg1 ;
-(void)setCanScanBackward:(BOOL)arg1 ;
-(void)setAudioMediaSelectionOptions:(NSArray *)arg1 ;
-(void)setCurrentAudioMediaSelectionOption:(WebAVMediaSelectionOption *)arg1 ;
-(void)setLegibleMediaSelectionOptions:(NSArray *)arg1 ;
-(void)setCurrentLegibleMediaSelectionOption:(WebAVMediaSelectionOption *)arg1 ;
-(void)setExternalPlaybackAirPlayDeviceLocalizedName:(NSString *)arg1 ;
-(void)setExternalPlaybackType:(long long)arg1 ;
-(void)setPlayerControllerProxy:(AVPlayerController *)arg1 ;
-(AVPlayerController *)playerControllerProxy;
-(void)togglePlayback:(id)arg1 ;
-(void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)seekToTime:(double)arg1 ;
-(BOOL)hasSeekableLiveStreamingContent;
-(AVValueTiming *)maxTiming;
-(AVValueTiming *)minTiming;
-(BOOL)canPlay;
-(void)seekToBeginning:(id)arg1 ;
-(void)seekToEnd:(id)arg1 ;
-(BOOL)hasAudioMediaSelectionOptions;
-(BOOL)hasLegibleMediaSelectionOptions;
-(NSArray *)audioMediaSelectionOptions;
-(NSArray *)legibleMediaSelectionOptions;
-(BOOL)isPlayingOnSecondScreen;
-(void)updateMinMaxTiming;
-(BOOL)hasLiveStreamingContent;
-(double)minTime;
-(double)maxTime;
-(void)setMinTiming:(AVValueTiming *)arg1 ;
-(void)setMaxTiming:(AVValueTiming *)arg1 ;
-(void)play:(id)arg1 ;
-(void)pause:(id)arg1 ;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(void)beginScrubbing:(id)arg1 ;
-(void)endScrubbing:(id)arg1 ;
-(void)seekByTimeInterval:(double)arg1 ;
-(double)currentTimeWithinEndTimes;
-(void)setCurrentTimeWithinEndTimes:(double)arg1 ;
-(void)skipBackwardThirtySeconds:(id)arg1 ;
-(void)gotoEndOfSeekableRanges:(id)arg1 ;
-(BOOL)canScanForward;
-(void)beginScanningForward:(id)arg1 ;
-(void)endScanningForward:(id)arg1 ;
-(void)beginScanningBackward:(id)arg1 ;
-(void)endScanningBackward:(id)arg1 ;
-(BOOL)canSeekToBeginning;
-(void)seekChapterBackward:(id)arg1 ;
-(BOOL)canSeekToEnd;
-(void)seekChapterForward:(id)arg1 ;
-(BOOL)hasMediaSelectionOptions;
-(WebAVMediaSelectionOption *)currentAudioMediaSelectionOption;
-(WebAVMediaSelectionOption *)currentLegibleMediaSelectionOption;
-(BOOL)isPlayingOnExternalScreen;
-(BOOL)isPictureInPictureInterrupted;
-(void)setPictureInPictureInterrupted:(BOOL)arg1 ;
-(void)toggleMuted:(id)arg1 ;
-(PlaybackSessionInterfaceAVKit*)playbackSessionInterface;
-(BOOL)canScanBackward;
-(BOOL)canPause;
-(BOOL)canTogglePlayback;
-(BOOL)canSeek;
-(CGSize)contentDimensions;
-(void)setContentDimensions:(CGSize)arg1 ;
-(BOOL)hasEnabledAudio;
-(BOOL)hasEnabledVideo;
-(void)setHasEnabledVideo:(BOOL)arg1 ;
-(BOOL)hasVideo;
-(void)setHasVideo:(BOOL)arg1 ;
-(double)contentDurationWithinEndTimes;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(NSString *)externalPlaybackAirPlayDeviceLocalizedName;
-(BOOL)isPictureInPicturePossible;
-(void)setPictureInPicturePossible:(BOOL)arg1 ;
@end

