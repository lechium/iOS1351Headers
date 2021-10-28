//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface NTKDComplicationStoreCoordinator : NSObject <NSXPCListenerDelegate>
{
    NSMutableSet *_clients;	// 8 = 0x8
    NSMutableDictionary *_stores;	// 16 = 0x10
    NSMutableDictionary *_checkoutHandlersByStoreKey;	// 24 = 0x18
    NSHashTable *_collectionLifecycleObservers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x000000010003e37c
+ (void)runComplicationStoreServer;	// IMP=0x000000010003e2a0
- (void).cxx_destruct;	// IMP=0x000000010003ef74
- (void)_queue_notifyObserversStoreCreated:(id)arg1;	// IMP=0x000000010003eddc
- (void)_onCalloutQueue_async:(CDUnknownBlockType)arg1;	// IMP=0x000000010003ed20
- (void)_onQueue_async:(CDUnknownBlockType)arg1;	// IMP=0x000000010003ec64
- (void)removeComplicationCollectionLifecycleObserver:(id)arg1;	// IMP=0x000000010003ebd0
- (void)addComplicationCollectionLifecycleObserver:(id)arg1;	// IMP=0x000000010003e9e8
- (void)relinquishStore:(id)arg1;	// IMP=0x000000010003e9e4
- (void)checkoutStore:(id)arg1;	// IMP=0x000000010003e9e0
- (void)checkoutStoreForComplicationCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003e6c8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010003e4ec
- (id)init;	// IMP=0x000000010003e3e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
