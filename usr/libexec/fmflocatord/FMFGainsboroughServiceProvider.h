//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMFServiceProvider.h"

@class NSDate;

@interface FMFGainsboroughServiceProvider : FMFServiceProvider
{
    NSDate *_lastOnWristDate;	// 8 = 0x8
}

+ (_Bool)isSimulationActive;	// IMP=0x0000000100004448
- (void).cxx_destruct;	// IMP=0x0000000100006280
@property(retain, nonatomic) NSDate *lastOnWristDate; // @synthesize lastOnWristDate=_lastOnWristDate;
- (id)_constructPairedDevicesInfo;	// IMP=0x0000000100005f88
- (id)_constructLocationDeviceInfo;	// IMP=0x0000000100005d38
- (id)_constructNonVolatileFullDeviceInfo;	// IMP=0x00000001000057cc
- (id)_constructVolatileFullDeviceInfo;	// IMP=0x0000000100005160
- (id)substituteStandardURLPlaceholders:(id)arg1;	// IMP=0x0000000100004cf0
- (void)logState;	// IMP=0x00000001000048ec
- (id)companionUDID;	// IMP=0x00000001000048c4
- (id)lastActiveDate;	// IMP=0x0000000100004858
- (id)lastOnWristTime;	// IMP=0x0000000100004728
- (id)wristStatusString;	// IMP=0x0000000100004698
- (id)connectionStatusString;	// IMP=0x00000001000045dc
- (id)deviceName;	// IMP=0x0000000100004550
- (id)udid;	// IMP=0x0000000100004528
- (id)init;	// IMP=0x00000001000044d0

@end
