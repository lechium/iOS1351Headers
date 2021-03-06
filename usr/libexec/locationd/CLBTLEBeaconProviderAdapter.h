//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLBTLEBeaconProviderProtocol-Protocol.h"

@class NSString;

@interface CLBTLEBeaconProviderAdapter : CLNotifierServiceAdapter <CLBTLEBeaconProviderProtocol>
{
}

+ (id)getSilo;	// IMP=0x0000000100a0244c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a02428
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100d02d54
- (_Bool)syncgetadvertiseSelfAsBeaconForRegion:(id)arg1 power:(int)arg2;	// IMP=0x0000000100a02798
- (_Bool)syncgetRemoveProximityZone:(const struct ProximityZone *)arg1;	// IMP=0x0000000100a02764
- (_Bool)syncgetAddProximityZone:(const struct ProximityZone *)arg1;	// IMP=0x0000000100a02730
- (void)stopScan;	// IMP=0x0000000100a0270c
- (void)startScan;	// IMP=0x0000000100a026e8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a026ac
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a02668
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a02634
- (struct CLBTLEBeaconProvider *)adaptee;	// IMP=0x0000000100a025f8
- (void)endService;	// IMP=0x0000000100a025d4
- (void)beginService;	// IMP=0x0000000100a02508
- (id)init;	// IMP=0x0000000100a024c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

