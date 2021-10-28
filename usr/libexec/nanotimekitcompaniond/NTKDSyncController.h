//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NRDevicePropertyObserver-Protocol.h"
#import "NTKDCollectionLifecycleObserver-Protocol.h"
#import "NTKDCollectionStoreSyncObserver-Protocol.h"
#import "NTKDComplicationCollectionLifecycleObserver-Protocol.h"
#import "NTKDComplicationStoreSyncObserver-Protocol.h"
#import "NTKDSyncDelegate-Protocol.h"

@class NSEnumerator, NSMutableDictionary, NSString, NTKDCollectionStore, NTKDCompanionSyncWrapper, NTKDComplicationStore, _MessageList, _StoreStatus;
@protocol OS_dispatch_queue;

@interface NTKDSyncController : NSObject <NTKDCollectionLifecycleObserver, NTKDComplicationCollectionLifecycleObserver, NTKDCollectionStoreSyncObserver, NTKDComplicationStoreSyncObserver, NTKDSyncDelegate, NRDevicePropertyObserver>
{
    NTKDCompanionSyncWrapper *_companionSyncWrapper;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_outgoingMessageLists;	// 24 = 0x18
    NSMutableDictionary *_incomingMessageLists;	// 32 = 0x20
    NSMutableDictionary *_storeStatuses;	// 40 = 0x28
    NSMutableDictionary *_complicationStoreStatuses;	// 48 = 0x30
    NSMutableDictionary *_stores;	// 56 = 0x38
    NSMutableDictionary *_complicationStores;	// 64 = 0x40
    _Bool _guardingOutgoingSessionRequest;	// 72 = 0x48
    _MessageList *_sessionMessageList;	// 80 = 0x50
    _StoreStatus *_sessionStoreStatus;	// 88 = 0x58
    _StoreStatus *_sessionComplicationStoreStatus;	// 96 = 0x60
    NTKDCollectionStore *_sessionStore;	// 104 = 0x68
    NTKDComplicationStore *_sessionComplicationStore;	// 112 = 0x70
    _Bool _sessionIsResetSync;	// 120 = 0x78
    unsigned long long _estimatedNumberOfMessagesToSend;	// 128 = 0x80
    unsigned long long _countOfSentMessages;	// 136 = 0x88
    NSEnumerator *_outgoingSessionMessageEnumerator;	// 144 = 0x90
}

+ (void)cleanupOrphanedSyncDirectoriesWithCurrentDeviceUUIDs:(id)arg1;	// IMP=0x000000010004b9e0
+ (id)sharedInstance;	// IMP=0x000000010004b974
- (void).cxx_destruct;	// IMP=0x0000000100053114
- (void)_queue_executeIfSyncQueuesAreEmpty:(CDUnknownBlockType)arg1;	// IMP=0x0000000100052fb4
- (void)_queue_addPayloadToMessage:(id)arg1 withFaceStore:(id)arg2 complicationStore:(id)arg3;	// IMP=0x0000000100052c30
- (_Bool)_queue_applyDeltaMessageList:(id)arg1 collectionStore:(id)arg2 complicationStore:(id)arg3;	// IMP=0x0000000100052494
- (_Bool)_queue_applyResetMessageList:(id)arg1 collectionStore:(id)arg2 complicationStore:(id)arg3;	// IMP=0x0000000100051c90
- (void)_queue_applyIncomingMessageList:(id)arg1 collectionStore:(id)arg2 complicationStore:(id)arg3 storeStatus:(id)arg4;	// IMP=0x0000000100051b48
- (void)_queue_applyIncomingMessageLists;	// IMP=0x00000001000517b4
- (void)_queue_requestSyncIfNecessaryAndForceDeltaRequestOtherwise:(_Bool)arg1;	// IMP=0x00000001000514a0
- (void)_queue_requestSyncIfNecessary;	// IMP=0x0000000100051490
- (id)_queue_complicationStoreStatusForDeviceUUID:(id)arg1;	// IMP=0x000000010005133c
- (id)_queue_storeStatusForDeviceUUID:(id)arg1;	// IMP=0x00000001000511e8
- (id)_queue_incomingMessageListForDeviceUUID:(id)arg1;	// IMP=0x0000000100051094
- (id)_queue_outgoingMessageListForDeviceUUID:(id)arg1;	// IMP=0x0000000100050ea8
- (id)_queue_checkoutComplicationStoreForDeviceUUID:(id)arg1;	// IMP=0x0000000100050c20
- (id)_queue_checkoutLibraryStoreForDeviceUUID:(id)arg1;	// IMP=0x0000000100050998
- (void)_queue_endGuardingOutgoingSessionRequest;	// IMP=0x0000000100050928
- (void)_queue_beginGuardingOutgoingSessionRequest;	// IMP=0x00000001000508b4
- (void)_onQueue_async:(CDUnknownBlockType)arg1;	// IMP=0x00000001000507f8
- (void)incomingLibraryValidationMessage:(id)arg1;	// IMP=0x0000000100050248
- (void)incomingSyncSessionDidEnd:(_Bool)arg1 withError:(id)arg2;	// IMP=0x000000010004ff50
- (_Bool)incomingSyncSessionApplyMessage:(id)arg1;	// IMP=0x000000010004fe1c
- (_Bool)incomingSyncSessionResetDataStoreWithError:(id *)arg1;	// IMP=0x000000010004fd04
- (void)incomingSyncSessionDidStart:(_Bool)arg1;	// IMP=0x000000010004fa70
- (void)outgoingSyncSessionDidEnd:(_Bool)arg1 withError:(id)arg2;	// IMP=0x000000010004f7b8
- (id)outgoingSyncSessionGetNextMessage;	// IMP=0x000000010004f4b8
- (void)outgoingSyncSessionDidStart:(_Bool)arg1;	// IMP=0x000000010004ee68
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x000000010004ed64
- (void)complicationStore:(id)arg1 didSuppressNotificationForSeqId:(id)arg2;	// IMP=0x000000010004eb90
- (void)complicationStore:(id)arg1 didRemoveComplicationForClientIdentifier:(id)arg2 seqId:(id)arg3;	// IMP=0x000000010004e8e0
- (void)complicationStore:(id)arg1 didUpdateLocalizableSampleTemplate:(id)arg2 forClientIdentifier:(id)arg3 family:(long long)arg4 seqId:(id)arg5;	// IMP=0x000000010004e5bc
- (void)complicationStore:(id)arg1 loadFullCollectionWithLocalizableSampleTemplates:(id)arg2 seqId:(id)arg3;	// IMP=0x000000010004e3fc
- (void)collectionStore:(id)arg1 didSuppressNotificationForSeqId:(id)arg2;	// IMP=0x000000010004e228
- (void)collectionStore:(id)arg1 didRemoveFaceOfStyle:(long long)arg2 forUUID:(id)arg3 seqId:(id)arg4 acknowledge:(CDUnknownBlockType)arg5;	// IMP=0x000000010004df04
- (void)collectionStore:(id)arg1 didAddFace:(id)arg2 forUUID:(id)arg3 seqId:(id)arg4;	// IMP=0x000000010004dbe8
- (void)collectionStore:(id)arg1 didUpgradeFace:(id)arg2 forUUID:(id)arg3 seqId:(id)arg4;	// IMP=0x000000010004d910
- (void)collectionStore:(id)arg1 didUpdateFaceForUUID:(id)arg2 withResourceDirectory:(id)arg3 seqId:(id)arg4 acknowledge:(CDUnknownBlockType)arg5;	// IMP=0x000000010004d5f4
- (void)collectionStore:(id)arg1 didUpdateFaceForUUID:(id)arg2 withConfiguration:(id)arg3 seqId:(id)arg4;	// IMP=0x000000010004d31c
- (void)collectionStore:(id)arg1 didUpdateOrderedUUIDs:(id)arg2 seqId:(id)arg3;	// IMP=0x000000010004d0ac
- (void)collectionStore:(id)arg1 didUpdateSelectedUUID:(id)arg2 seqId:(id)arg3;	// IMP=0x000000010004ce10
- (void)collectionStore:(id)arg1 loadOrderedUUIDs:(id)arg2 selectedUUID:(id)arg3 facesByUUID:(id)arg4 seqId:(id)arg5 acknowledge:(CDUnknownBlockType)arg6;	// IMP=0x000000010004cbd4
- (void)complicationCollectionStoreWillBePurged:(id)arg1;	// IMP=0x000000010004cad0
- (void)complicationCollectionStoreHasBeenCreated:(id)arg1;	// IMP=0x000000010004c954
- (void)collectionStoreWillBePurged:(id)arg1;	// IMP=0x000000010004c804
- (void)collectionStoreHasBeenCreated:(id)arg1;	// IMP=0x000000010004c5ec
- (id)init;	// IMP=0x000000010004bef0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
