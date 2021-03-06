//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLLocationProviderAdapter.h"

#import "CLSimulatedLocationProviderProtocol-Protocol.h"

@class NSString;

@interface CLSimulatedLocationProviderAdapter : CLLocationProviderAdapter <CLSimulatedLocationProviderProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001004abfb4
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001004abf90
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100cd95c8
+ (_Bool)isSupported;	// IMP=0x00000001004ac250
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001004ac214
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001004ac1d0
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001004ac19c
- (struct CLSimulatedLocationProvider *)adaptee;	// IMP=0x00000001004ac160
- (void)endService;	// IMP=0x00000001004ac13c
- (void)beginService;	// IMP=0x00000001004ac070
- (id)init;	// IMP=0x00000001004ac02c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

