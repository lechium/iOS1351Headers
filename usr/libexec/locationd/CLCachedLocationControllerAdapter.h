//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLCachedLocationControllerProtocol-Protocol.h"

@class NSString;

@interface CLCachedLocationControllerAdapter : CLNotifierServiceAdapter <CLCachedLocationControllerProtocol>
{
}

+ (id)getSilo;	// IMP=0x000000010035ecb8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010035ec94
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100cd4cfc
+ (_Bool)isSupported;	// IMP=0x000000010035ec04
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x000000010035ef20
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010035eedc
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010035eea8
- (struct CLCachedLocationController *)adaptee;	// IMP=0x000000010035ee6c
- (void)endService;	// IMP=0x000000010035ee48
- (void)beginService;	// IMP=0x000000010035ed74
- (id)init;	// IMP=0x000000010035ed30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
