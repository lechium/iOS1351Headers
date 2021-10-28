//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconModelPropertyListFileStore.h>

@class NSString;

@interface CARIconModelStore : SBIconModelPropertyListFileStore
{
    NSString *_vehicleId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010007b538
@property(readonly, nonatomic) NSString *vehicleId; // @synthesize vehicleId=_vehicleId;
- (id)_iconListsByFlatteningPages:(id)arg1;	// IMP=0x000000010007b254
- (_Bool)saveDesiredIconState:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007b138
- (_Bool)saveCurrentIconState:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007b01c
- (id)loadCurrentIconState:(id *)arg1;	// IMP=0x000000010007aeec
- (id)initWithVehicleId:(id)arg1;	// IMP=0x000000010007ad58

@end
