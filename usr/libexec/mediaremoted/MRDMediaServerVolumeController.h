//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDVolumeController.h"

@interface MRDMediaServerVolumeController : MRDVolumeController
{
    float _volumeValue;	// 8 = 0x8
    float _volumeLimit;	// 12 = 0xc
    _Bool _deviceEnforcesEUVolumeLimit;	// 16 = 0x10
    unsigned long long _warningState;	// 24 = 0x18
    _Bool _volumeLimitDataInitialized;	// 32 = 0x20
}

- (void)_postVolumeDidChange:(float)arg1;	// IMP=0x0000000100090ff0
- (void)_internalSetVolumeValue:(float)arg1;	// IMP=0x0000000100090eb4
- (void)_updateVolumeValueCache;	// IMP=0x0000000100090e20
- (float)_volumeFromAVController;	// IMP=0x0000000100090b90
- (void)_avSessionMediaServicesResetNotification:(id)arg1;	// IMP=0x0000000100090afc
- (void)_EUVolumeLimitEnforcedDidChange:(id)arg1;	// IMP=0x0000000100090a24
- (void)_EUVolumeLimitDidChange:(id)arg1;	// IMP=0x0000000100090980
- (void)_systemMuteDidChange:(id)arg1;	// IMP=0x0000000100090974
- (void)_systemVolumeDidChange:(id)arg1;	// IMP=0x00000001000906c4
- (void)_initializeVolumeLimitDataIfNecessary;	// IMP=0x000000010009050c
- (void)_tearDownNotifications;	// IMP=0x0000000100090350
- (void)_setupNotifications;	// IMP=0x0000000100090150
- (id)_mediaServerController;	// IMP=0x000000010009012c
- (_Bool)adjustVolumeWithStepAmount:(float)arg1 error:(id *)arg2;	// IMP=0x0000000100090110
- (_Bool)setVolume:(float)arg1 error:(id *)arg2;	// IMP=0x000000010008ffa0
- (unsigned long long)warningState;	// IMP=0x000000010008ff6c
- (float)volumeLimit;	// IMP=0x000000010008ff38
- (_Bool)volumeWarningEnabled;	// IMP=0x000000010008ff04
- (float)currentVolume;	// IMP=0x000000010008fed0
- (void)dealloc;	// IMP=0x000000010008fe84
- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x000000010008fe20

@end

