//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "SYDDaemonToClientConnectionDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface SYDDaemon : NSObject <NSXPCListenerDelegate, SYDDaemonToClientConnectionDelegate>
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableSet *_clientConnections;	// 24 = 0x18
    NSMutableDictionary *_syncManagers;	// 32 = 0x20
    NSString *_primaryAppleAccountIdentifierOverride;	// 40 = 0x28
}

+ (_Bool)platformSupportsStoreType:(long long)arg1;	// IMP=0x0000000100005e2c
+ (id)databaseURLForContainerID:(id)arg1 libraryDirectoryURL:(id)arg2;	// IMP=0x0000000100005874
+ (id)databaseURLForContainerID:(id)arg1;	// IMP=0x0000000100005724
+ (id)containerIDForStoreType:(long long)arg1 environment:(long long)arg2;	// IMP=0x00000001000056c8
- (void).cxx_destruct;	// IMP=0x00000001000069fc
@property(copy, nonatomic) NSString *primaryAppleAccountIdentifierOverride; // @synthesize primaryAppleAccountIdentifierOverride=_primaryAppleAccountIdentifierOverride;
@property(retain, nonatomic) NSMutableDictionary *syncManagers; // @synthesize syncManagers=_syncManagers;
@property(retain, nonatomic) NSMutableSet *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void)sendAnalyticsEventForCurrentState;	// IMP=0x0000000100006108
- (void)registerForPeriodAnalyticsXPCActivity;	// IMP=0x0000000100005f08
- (id)identifierForEnabledAccount;	// IMP=0x0000000100005c00
- (id)syncManagerForStoreType:(long long)arg1 containerID:(id)arg2;	// IMP=0x00000001000053ec
- (id)syncManagerForStoreType:(long long)arg1 environment:(long long)arg2;	// IMP=0x000000010000536c
- (void)_processAccountChanges;	// IMP=0x0000000100004f34
- (void)processAccountChanges;	// IMP=0x0000000100004e98
- (void)connectionDidInvalidate:(id)arg1;	// IMP=0x0000000100004d64
- (id)connection:(id)arg1 syncManagerForStoreIdentifier:(id)arg2 type:(long long)arg3;	// IMP=0x0000000100004a90
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000048a0
- (void)start;	// IMP=0x0000000100004798
- (id)initWithInitialStoreCreation:(_Bool)arg1;	// IMP=0x00000001000046a8
- (id)init;	// IMP=0x0000000100004698

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
