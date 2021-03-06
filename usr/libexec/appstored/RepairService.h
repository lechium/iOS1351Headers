//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDRepairServiceProtocol-Protocol.h"

@protocol OS_dispatch_queue;

@interface RepairService : NSObject <ASDRepairServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

+ (id)defaultService;	// IMP=0x000000010024ccb8
- (void).cxx_destruct;	// IMP=0x000000010024cf0c
- (id)_currentClient;	// IMP=0x000000010024ce88
- (void)repairAppWithOptions:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010024cd24
- (id)init;	// IMP=0x000000010024cc30

@end

