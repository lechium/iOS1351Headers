//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLFitnessMachineNotifierProtocol-Protocol.h"

@class NSString;

@interface CLFitnessMachineNotifierAdapter : CLNotifierServiceAdapter <CLFitnessMachineNotifierProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001008b76cc
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001008b76a8
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100cf77e4
+ (_Bool)isSupported;	// IMP=0x00000001008b7a44
- (void)feedFitnessMachineData:(id)arg1;	// IMP=0x00000001008b7968
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001008b792c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001008b78e8
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001008b78b4
- (struct CLFitnessMachineNotifier *)adaptee;	// IMP=0x00000001008b7878
- (void)endService;	// IMP=0x00000001008b7854
- (void)beginService;	// IMP=0x00000001008b7788
- (id)init;	// IMP=0x00000001008b7744

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
