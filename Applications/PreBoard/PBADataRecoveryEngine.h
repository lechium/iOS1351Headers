//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBFMobileKeyBag;
@protocol OS_dispatch_queue;

@interface PBADataRecoveryEngine : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    SBFMobileKeyBag *_queue_mobileKeyBag;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100007b44
- (void)_queue_performDataRecoveryWithPasscode:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007770
- (void)performDataRecoveryWithPasscode:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007610
@property(readonly, nonatomic) _Bool dataRecoveryPossible;
@property(readonly, nonatomic) _Bool requiresDataRecovery;
- (id)init;	// IMP=0x0000000100007380
- (id)initWithMobileKeyBag:(id)arg1;	// IMP=0x00000001000072c8

@end

