//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRService-Protocol.h"

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface PRRangingService : NSObject <PRService>
{
    NSMutableSet *_xpcSessions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *machServiceName;	// 24 = 0x18
}

+ (id)serviceWithQueue:(id)arg1;	// IMP=0x000000010000c9fc
- (void).cxx_destruct;	// IMP=0x000000010000d3f8
- (_Bool)validateClientEntitlements:(id)arg1;	// IMP=0x000000010000d350
- (void)handleXPCDisconnection:(id)arg1;	// IMP=0x000000010000d090
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x000000010000cb38
@property(readonly) NSString *machServiceName; // @synthesize machServiceName;
- (void)setupRangingManager;	// IMP=0x000000010000ca64
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010000c84c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
