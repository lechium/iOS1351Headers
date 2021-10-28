//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLConnectionLifecycleDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CLConnectionListener : NSObject <CLConnectionLifecycleDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_connections;	// 16 = 0x10
    NSObject<OS_xpc_object> *_listener;	// 24 = 0x18
    CDUnknownBlockType _messageHandlerConstructor;	// 32 = 0x20
    NSString *_entitlement;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010000717c
@property(copy, nonatomic) NSString *entitlement; // @synthesize entitlement=_entitlement;
@property(copy, nonatomic) CDUnknownBlockType messageHandlerConstructor; // @synthesize messageHandlerConstructor=_messageHandlerConstructor;
@property(retain, nonatomic) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)endpointWasInvalidated:(id)arg1;	// IMP=0x0000000100006ff0
- (void)endpointWasInterrupted:(id)arg1;	// IMP=0x000000010000b884
- (void)invalidate;	// IMP=0x0000000100006f08
- (void)traverseEndpointsAsynchronously:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006cac
- (void)startListeningForService:(id)arg1;	// IMP=0x00000001000065e0
- (id)initWithQueue:(id)arg1 entitlement:(id)arg2 messageHandlerConstructor:(CDUnknownBlockType)arg3;	// IMP=0x00000001000064d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
