//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLLocationProviderAdapter.h"

#import "CLWifiLocationProviderProtocol-Protocol.h"

@class NSString;

@interface CLWifiLocationProviderAdapter : CLLocationProviderAdapter <CLWifiLocationProviderProtocol>
{
}

+ (_Bool)isSupported;	// IMP=0x000000010021c290
+ (id)getSilo;	// IMP=0x000000010021bc88
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010021bc64
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100ccc624
- (void)requestLocationUpdateWithParameters:(CDUnknownBlockType)arg1;	// IMP=0x000000010021bf8c
- (void)allowLocalClientsInEmergency:(_Bool)arg1;	// IMP=0x000000010021bf88
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x000000010021bf84
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x000000010021bf80
- (void)emergencyStateChange:(int)arg1;	// IMP=0x000000010021bf24
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x000000010021bee8
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010021bea4
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010021be70
- (struct CLWifiLocationProvider *)adaptee;	// IMP=0x000000010021be34
- (void)endService;	// IMP=0x000000010021be10
- (void)beginService;	// IMP=0x000000010021bd44
- (id)init;	// IMP=0x000000010021bd00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
