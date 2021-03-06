//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSBaseXPCServer.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface BKFenceArbiterServer : BSBaseXPCServer
{
    NSObject<OS_dispatch_queue> *_requestFenceQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_createAssertionQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000b9cc
- (void)queue_handleMessage:(id)arg1 client:(id)arg2;	// IMP=0x000000010000b814
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;	// IMP=0x000000010000b6cc

@end

