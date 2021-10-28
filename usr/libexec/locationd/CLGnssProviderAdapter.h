//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLLocationProviderAdapter.h"

#import "CLEmergencyClientProtocol-Protocol.h"
#import "CLLocationProviderProtocol-Protocol.h"

@class NSString;

@interface CLGnssProviderAdapter : CLLocationProviderAdapter <CLLocationProviderProtocol, CLEmergencyClientProtocol>
{
}

+ (id)getSilo;	// IMP=0x000000010072b320
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010072b2fc
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100cec1e0
+ (_Bool)isSupported;	// IMP=0x000000010072b28c
- (void)allowLocalClientsInEmergency:(_Bool)arg1;	// IMP=0x000000010072baf0
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x000000010072ba50
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x000000010072b910
- (void)emergencyStateChange:(int)arg1;	// IMP=0x000000010072b818
- (void)setBarometricAltitudeAWDData:(struct BarometricAltitudeDriftRateInfo)arg1;	// IMP=0x000000010072b770
- (void)cacheEmergencyAWDStatistics:(struct CLDaemonLocation)arg1;	// IMP=0x000000010072b67c
- (_Bool)syncgetActiveGnssBands:(struct vector<CLGnssBandType, std::__1::allocator<CLGnssBandType>> *)arg1;	// IMP=0x000000010072b60c
- (_Bool)syncgetControlPlaneStatusReport:(CDStruct_9f295740 *)arg1;	// IMP=0x000000010072b56c
- (void)resetControlPlaneStatus;	// IMP=0x000000010072b4e4
- (void)endService;	// IMP=0x000000010072b4c0
- (void)beginService;	// IMP=0x000000010072b3dc
- (id)init;	// IMP=0x000000010072b398

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
