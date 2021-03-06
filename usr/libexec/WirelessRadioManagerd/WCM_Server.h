//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface WCM_Server : NSObject
{
    NSObject<OS_xpc_object> *mConnection;	// 8 = 0x8
    NSMutableArray *mClientSessions;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *mQueue;	// 24 = 0x18
    _Bool testMode;	// 32 = 0x20
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010004c930
+ (id)singleton;	// IMP=0x000000010004c8a4
- (void)exitTestMode;	// IMP=0x000000010004d9fc
- (void)enterTestMode;	// IMP=0x000000010004d804
- (void)existingSessions;	// IMP=0x000000010004d5e4
- (id)getSessionSync:(int)arg1;	// IMP=0x000000010004d3f0
- (id)getSessionFor:(int)arg1;	// IMP=0x000000010004d01c
- (void)removeSessionFromList:(id)arg1;	// IMP=0x000000010004cfbc
- (void)addSessionToList:(id)arg1;	// IMP=0x000000010004cf5c
- (void)handleConnection:(id)arg1;	// IMP=0x000000010004ced0
- (void)handleXPCEvent:(id)arg1;	// IMP=0x000000010004ccfc
- (void)handleEvent:(id)arg1;	// IMP=0x000000010004cc44
- (void)startService;	// IMP=0x000000010004cb18
- (id)getQueue;	// IMP=0x000000010004cafc
- (void)dealloc;	// IMP=0x000000010004ca64
- (id)init;	// IMP=0x000000010004c9bc
- (id)autorelease;	// IMP=0x000000010004c9a0
- (oneway void)release;	// IMP=0x000000010004c98c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010004c96c

@end

