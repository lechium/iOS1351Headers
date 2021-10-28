//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADRemoteExecution-Protocol.h"
#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSMapTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ADPeerCloudService : NSObject <IDSServiceDelegate, ADRemoteExecution>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSService *_service;	// 16 = 0x10
    NSMutableDictionary *_completions;	// 24 = 0x18
    NSMapTable *_sharedDataObservers;	// 32 = 0x20
    NSMapTable *_sharedDataRequestObservers;	// 40 = 0x28
    NSMapTable *_remoteRequestObservers;	// 48 = 0x30
    NSString *_companionIdentifier;	// 56 = 0x38
    NSString *_airPlayRouteIdentifier;	// 64 = 0x40
    _Bool _airPlayRouteIdentifierNeedsUpdate;	// 72 = 0x48
    NSMutableDictionary *_peerAssistantIdentifiers;	// 80 = 0x50
    NSMutableSet *_deviceIdentifiers;	// 88 = 0x58
    NSMutableDictionary *_peerSharedData;	// 96 = 0x60
    _Bool _hasActiveAccount;	// 104 = 0x68
}

+ (id)_pointerToBlockMap;	// IMP=0x00000001001f1214
+ (id)_wrappedSendFailureError:(id)arg1;	// IMP=0x00000001001f1100
+ (id)_timedOutError;	// IMP=0x00000001001f10c4
+ (id)_unexpectedMessageError;	// IMP=0x00000001001f1088
+ (id)sharedInstance;	// IMP=0x00000001001f1010
- (void).cxx_destruct;	// IMP=0x00000001001f85c8
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00000001001f80ec
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00000001001f7fe4
- (void)_handleMessageResponse:(id)arg1 ofType:(unsigned short)arg2 orError:(id)arg3 fromID:(id)arg4 handler:(id)arg5;	// IMP=0x00000001001f7a9c
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x00000001001f7960
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001001f72c0
- (_Bool)_handleRemoteExecution:(id)arg1 peer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f6dc4
- (void)_notifyObserversOfRequestInfo:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f68fc
- (void)setRemoteRequestObserver:(CDUnknownBlockType)arg1 withHandle:(void *)arg2;	// IMP=0x00000001001f67e0
- (void)startListeningForRemote;	// IMP=0x00000001001f64a0
- (void)startRemoteSerialzedCommandExecution:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f5d20
- (void)startRemoteExecution:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f5b9c
- (void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f59f8
- (void)_startRemoteRequest:(id)arg1 onPeers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f5364
- (void)_notifyObserversOfSharedDataRequestFromPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f4e90
- (void)setSharedDataRequestObserver:(CDUnknownBlockType)arg1 withHandler:(void *)arg2;	// IMP=0x00000001001f4d74
- (void)getSharedDataFromPeers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f4828
- (void)_notifyObserversOfSharedData:(id)arg1 fromPeer:(id)arg2;	// IMP=0x00000001001f45c0
- (void)setSharedDataObserver:(CDUnknownBlockType)arg1 withHandle:(void *)arg2;	// IMP=0x00000001001f4418
- (void)sendSharedData:(id)arg1 toPeers:(id)arg2;	// IMP=0x00000001001f425c
- (void)_updateAirPlayRouteIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f3f48
- (void)_airplayRouteDidChange:(id)arg1;	// IMP=0x00000001001f3e50
- (void)_companionIdentifierDidChangeNotification:(id)arg1;	// IMP=0x00000001001f3cc4
- (void)_updateActiveAccountState;	// IMP=0x00000001001f3acc
- (void)_setCachedSharedData:(id)arg1 forUniqueId:(id)arg2;	// IMP=0x00000001001f3a20
- (id)_cachedSharedDataForUniqueId:(id)arg1;	// IMP=0x00000001001f39b4
- (id)cachedSharedDataForUniqueId:(id)arg1;	// IMP=0x00000001001f3868
- (void)_setAssistantId:(id)arg1 forUniqueId:(id)arg2;	// IMP=0x00000001001f37c4
- (void)setAssistantId:(id)arg1 forUniqueId:(id)arg2;	// IMP=0x00000001001f36e8
- (id)_peerInfoForAssistantId:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x00000001001f3668
- (id)peerInfoForAssistantId:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x00000001001f3510
- (id)_assistantIdForUniqueId:(id)arg1;	// IMP=0x00000001001f3500
- (id)assistantIdForUniqueId:(id)arg1;	// IMP=0x00000001001f33d0
- (id)_uniqueIdForAssistantId:(id)arg1;	// IMP=0x00000001001f3248
- (id)uniqueIdForAssistantId:(id)arg1;	// IMP=0x00000001001f3118
- (id)companionPeerUniqueIdentifier;	// IMP=0x00000001001f3000
- (id)_companionPeer;	// IMP=0x00000001001f2fb0
- (id)companionPeer;	// IMP=0x00000001001f2cac
- (id)localPeerUniqueIdentifier;	// IMP=0x00000001001f2c98
- (id)_peerInfoForUniqueIdentifier:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x00000001001f2a48
- (id)peerInfoForUniqueIdentifier:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x00000001001f2904
- (id)_uniqueIdentifierForPeer:(id)arg1;	// IMP=0x00000001001f2724
- (id)uniqueIdentifierForPeer:(id)arg1;	// IMP=0x00000001001f25f4
- (id)peers;	// IMP=0x00000001001f24d8
- (id)_peers;	// IMP=0x00000001001f2294
- (_Bool)hasActiveAccount;	// IMP=0x00000001001f228c
- (void)_sendProto:(id)arg1 ofType:(unsigned short)arg2 originalRequestId:(id)arg3 toPeers:(id)arg4 responseType:(unsigned short)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001001f1b08
- (void)_sendProto:(id)arg1 ofType:(unsigned short)arg2 toPeers:(id)arg3 responseType:(unsigned short)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001001f1a80
- (void)_sendProto:(id)arg1 ofType:(unsigned short)arg2 toPeers:(id)arg3;	// IMP=0x00000001001f1a1c
- (id)_destinationsForPeers:(id)arg1;	// IMP=0x00000001001f169c
- (id)_service;	// IMP=0x00000001001f1694
- (id)_init;	// IMP=0x00000001001f1248

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
