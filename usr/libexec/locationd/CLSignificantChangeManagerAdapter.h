//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLLocationProviderAdapter.h"

#import "CLSignificantChangeManagerProtocol-Protocol.h"

@class NSString;

@interface CLSignificantChangeManagerAdapter : CLLocationProviderAdapter <CLSignificantChangeManagerProtocol>
{
}

+ (id)getSilo;	// IMP=0x000000010065d670
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010065d64c
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100ce7ae8
+ (_Bool)isSupported;	// IMP=0x000000010065dad0
- (void)simulateSignificantLocationChange:(id)arg1;	// IMP=0x000000010065d918
- (void)fetchLastSignificantLocationDistanceAndLatencyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010065d8e4
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x000000010065d8a8
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010065d864
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010065d830
- (struct CLSignificantChangeManager *)adaptee;	// IMP=0x000000010065d7f4
- (void)endService;	// IMP=0x000000010065d7d0
- (void)beginService;	// IMP=0x000000010065d72c
- (id)init;	// IMP=0x000000010065d6e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

