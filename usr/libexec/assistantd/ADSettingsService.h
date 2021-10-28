//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADBaseService.h"

@protocol ADRecordingInfoProviding;

@interface ADSettingsService : ADBaseService
{
    id <ADRecordingInfoProviding> _recordingInfoProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100209770
@property(readonly, nonatomic) id <ADRecordingInfoProviding> recordingInfoProvider; // @synthesize recordingInfoProvider=_recordingInfoProvider;
- (void)_setBoolSetting:(id)arg1 currentValueBlock:(CDUnknownBlockType)arg2 setValueBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100209424
- (id)_wrapBoolSettingValue:(_Bool)arg1;	// IMP=0x00000001002093b0
- (void)_setNoiseManagement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100208614
- (void)_getNoiseManagement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100207994
- (void)_getPlaybackAudioRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100207440
- (void)_setVoiceOver:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100207318
- (void)_getVoiceOver:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010020720c
- (void)_getVoiceTriggerEnabled:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002070d0
- (void)_setVoiceTriggerEnabled:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100206f28
- (void)_registerCommandHandlersWithRegistry:(id)arg1;	// IMP=0x0000000100206da8
- (id)initWithRecordingInfoProvider:(id)arg1;	// IMP=0x0000000100206d28

@end
