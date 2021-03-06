//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLLocationProviderAdapter.h"

#import "CLUnifiedCellLocationProviderProtocol-Protocol.h"

@class NSString;

@interface CLUnifiedCellLocationProviderAdapter : CLLocationProviderAdapter <CLUnifiedCellLocationProviderProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001006e20dc
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001006e20b8
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100ceab3c
+ (_Bool)isSupported;	// IMP=0x00000001006e2378
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001006e233c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001006e22f8
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001006e22c4
- (struct CLUnifiedCellLocationProvider *)adaptee;	// IMP=0x00000001006e2288
- (void)endService;	// IMP=0x00000001006e2264
- (void)beginService;	// IMP=0x00000001006e2198
- (id)init;	// IMP=0x00000001006e2154

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

