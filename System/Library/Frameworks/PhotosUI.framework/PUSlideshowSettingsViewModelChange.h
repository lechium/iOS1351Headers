/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUViewModelChange.h>

@interface PUSlideshowSettingsViewModelChange : PUViewModelChange {

	BOOL _presetDidChange;
	BOOL _mediaItemDidChange;
	BOOL _shouldRepeatDidChange;
	BOOL _stepDurationDidChange;
	BOOL _musicOnDidChange;

}

@property (assign,setter=_setPresetDidChange:,nonatomic) BOOL presetDidChange;                          //@synthesize presetDidChange=_presetDidChange - In the implementation block
@property (assign,setter=_setMediaItemDidChange:,nonatomic) BOOL mediaItemDidChange;                    //@synthesize mediaItemDidChange=_mediaItemDidChange - In the implementation block
@property (assign,setter=_setRepeatDidChange:,nonatomic) BOOL shouldRepeatDidChange;                    //@synthesize shouldRepeatDidChange=_shouldRepeatDidChange - In the implementation block
@property (assign,setter=_setStepDurationDidChange:,nonatomic) BOOL stepDurationDidChange;              //@synthesize stepDurationDidChange=_stepDurationDidChange - In the implementation block
@property (assign,setter=_setMusicOnDidChange:,nonatomic) BOOL musicOnDidChange;                        //@synthesize musicOnDidChange=_musicOnDidChange - In the implementation block
-(BOOL)hasChanges;
-(BOOL)shouldRepeatDidChange;
-(BOOL)stepDurationDidChange;
-(BOOL)mediaItemDidChange;
-(BOOL)presetDidChange;
-(BOOL)musicOnDidChange;
-(void)_setPresetDidChange:(BOOL)arg1 ;
-(void)_setMediaItemDidChange:(BOOL)arg1 ;
-(void)_setRepeatDidChange:(BOOL)arg1 ;
-(void)_setStepDurationDidChange:(BOOL)arg1 ;
-(void)_setMusicOnDidChange:(BOOL)arg1 ;
@end

