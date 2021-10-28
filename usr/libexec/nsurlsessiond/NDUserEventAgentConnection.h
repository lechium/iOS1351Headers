//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NDUserEventAgentConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    NSObject<OS_xpc_object> *_listener;	// 24 = 0x18
    NSDictionary *_registeredClients;	// 32 = 0x20
    NSMutableDictionary *_pendingWakes;	// 40 = 0x28
}

+ (id)sharedUserEventAgentConnection;	// IMP=0x0000000100034f14
- (void).cxx_destruct;	// IMP=0x0000000100034624
- (void)removePendingWakeForClient:(id)arg1 sessionIdentifier:(id)arg2;	// IMP=0x0000000100034560
- (void)wakeClientUponNotification:(id)arg1 sessionIdentifier:(id)arg2;	// IMP=0x000000010003449c
- (void)launchProcessWithIdentifier:(id)arg1 sessionIdentifier:(id)arg2;	// IMP=0x00000001000343d8
- (_Bool)canLaunchProcessWithIdentifier:(id)arg1;	// IMP=0x0000000100034398
- (void)handleNewConnection:(id)arg1;	// IMP=0x0000000100034270
- (void)start;	// IMP=0x000000010003414c
- (id)init;	// IMP=0x000000010003407c

@end
