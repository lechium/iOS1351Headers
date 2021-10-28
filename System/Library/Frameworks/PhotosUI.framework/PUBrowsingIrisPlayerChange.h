/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUViewModelChange.h>

@interface PUBrowsingIrisPlayerChange : PUViewModelChange {

	BOOL _livePhotoPlaybackAllowedDidChange;
	BOOL _livePhotoLoadingAllowedDidChange;
	BOOL _livePhotoDidChange;
	BOOL _playerDidChange;
	BOOL _playbackStateDidChange;
	BOOL _hasPendingVitalityHintDidChange;
	BOOL _activatedDidChange;
	BOOL _scrubbingPhotoTimeDidChange;
	BOOL _currentlyDisplayedTimesDidChange;
	BOOL _playingDidChange;
	BOOL _isLivePhotoLoadingAllowedDidChange;
	BOOL _isLivePhotoPlaybackAllowedDidChange;

}

@property (assign,setter=_setPlaybackStateDidChange:,nonatomic) BOOL playbackStateDidChange;                                      //@synthesize playbackStateDidChange=_playbackStateDidChange - In the implementation block
@property (assign,setter=_setLivePhotoDidChange:,nonatomic) BOOL livePhotoDidChange;                                              //@synthesize livePhotoDidChange=_livePhotoDidChange - In the implementation block
@property (assign,setter=_setLivePhotoLoadingAllowedDidChange:,nonatomic) BOOL isLivePhotoLoadingAllowedDidChange;                //@synthesize isLivePhotoLoadingAllowedDidChange=_isLivePhotoLoadingAllowedDidChange - In the implementation block
@property (assign,setter=_setLivePhotoPlaybackAllowedDidChange:,nonatomic) BOOL isLivePhotoPlaybackAllowedDidChange;              //@synthesize isLivePhotoPlaybackAllowedDidChange=_isLivePhotoPlaybackAllowedDidChange - In the implementation block
@property (assign,setter=_setHasPendingVitalityHintDidChange:,nonatomic) BOOL hasPendingVitalityHintDidChange;                    //@synthesize hasPendingVitalityHintDidChange=_hasPendingVitalityHintDidChange - In the implementation block
@property (assign,setter=_setPlayerDidChange:,nonatomic) BOOL playerDidChange;                                                    //@synthesize playerDidChange=_playerDidChange - In the implementation block
@property (assign,setter=_setActivatedDidChange:,nonatomic) BOOL activatedDidChange;                                              //@synthesize activatedDidChange=_activatedDidChange - In the implementation block
@property (assign,setter=_setScrubbingPhotoTimeDidChange:,nonatomic) BOOL scrubbingPhotoTimeDidChange;                            //@synthesize scrubbingPhotoTimeDidChange=_scrubbingPhotoTimeDidChange - In the implementation block
@property (assign,setter=_setCurrentlyDisplayedTimesDidChange:,nonatomic) BOOL currentlyDisplayedTimesDidChange;                  //@synthesize currentlyDisplayedTimesDidChange=_currentlyDisplayedTimesDidChange - In the implementation block
@property (assign,setter=_setPlayingDidChange:,nonatomic) BOOL playingDidChange;                                                  //@synthesize playingDidChange=_playingDidChange - In the implementation block
@property (nonatomic,readonly) BOOL livePhotoPlaybackAllowedDidChange;                                                            //@synthesize livePhotoPlaybackAllowedDidChange=_livePhotoPlaybackAllowedDidChange - In the implementation block
@property (nonatomic,readonly) BOOL livePhotoLoadingAllowedDidChange;                                                             //@synthesize livePhotoLoadingAllowedDidChange=_livePhotoLoadingAllowedDidChange - In the implementation block
-(BOOL)hasChanges;
-(BOOL)playbackStateDidChange;
-(void)_setPlaybackStateDidChange:(BOOL)arg1 ;
-(void)_setPlayingDidChange:(BOOL)arg1 ;
-(void)_setPlayerDidChange:(BOOL)arg1 ;
-(BOOL)livePhotoPlaybackAllowedDidChange;
-(BOOL)livePhotoLoadingAllowedDidChange;
-(BOOL)livePhotoDidChange;
-(void)_setLivePhotoDidChange:(BOOL)arg1 ;
-(BOOL)playerDidChange;
-(BOOL)hasPendingVitalityHintDidChange;
-(void)_setHasPendingVitalityHintDidChange:(BOOL)arg1 ;
-(BOOL)activatedDidChange;
-(void)_setActivatedDidChange:(BOOL)arg1 ;
-(BOOL)scrubbingPhotoTimeDidChange;
-(void)_setScrubbingPhotoTimeDidChange:(BOOL)arg1 ;
-(BOOL)currentlyDisplayedTimesDidChange;
-(void)_setCurrentlyDisplayedTimesDidChange:(BOOL)arg1 ;
-(BOOL)playingDidChange;
-(BOOL)isLivePhotoLoadingAllowedDidChange;
-(void)_setLivePhotoLoadingAllowedDidChange:(BOOL)arg1 ;
-(BOOL)isLivePhotoPlaybackAllowedDidChange;
-(void)_setLivePhotoPlaybackAllowedDidChange:(BOOL)arg1 ;
@end
