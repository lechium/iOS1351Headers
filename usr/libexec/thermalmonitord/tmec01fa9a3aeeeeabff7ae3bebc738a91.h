//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CommonProduct.h"

@interface tmec01fa9a3aeeeeabff7ae3bebc738a91 : CommonProduct
{
    float _filteredBacklightCurrentLI2;	// 356 = 0x164
    int _filteredTempRearCameraDie;	// 360 = 0x168
    int _filteredTempMic1;	// 364 = 0x16c
    int _filteredTempMic2;	// 368 = 0x170
}

- (void)updateCoreAnalyticsInfo;	// IMP=0x000000010003b520
- (void)postDeviceTempMetric;	// IMP=0x000000010003b400
- (void)updateAggdInfo;	// IMP=0x000000010003b214
- (void)updateAllThermalLoad:(_Bool)arg1;	// IMP=0x000000010003ab10
- (int)arcVirtualTemperature;	// IMP=0x000000010003ab08
- (int)arcModuleTemperature;	// IMP=0x000000010003aaf8
- (int)gasGaugeBatteryTemperature;	// IMP=0x000000010003aae8
- (void)resetVTFilterState;	// IMP=0x000000010003aaac
- (id)initProduct:(id)arg1;	// IMP=0x000000010003aa54

@end

