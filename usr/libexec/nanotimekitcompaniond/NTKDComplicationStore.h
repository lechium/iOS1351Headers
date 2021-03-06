//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSNumber, NSString, NSUUID, _NTKDComplicationCollectionManifest;
@protocol NTKDComplicationStoreSyncObserver, OS_dispatch_queue;

@interface NTKDComplicationStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSString *_storeDirectory;	// 16 = 0x10
    NSNumber *_seqId;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    id <NTKDComplicationStoreSyncObserver> _syncObserver;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_observerCallbackQueue;	// 48 = 0x30
    _NTKDComplicationCollectionManifest *_manifest;	// 56 = 0x38
    NSMutableDictionary *_clientIDtoSampleData;	// 64 = 0x40
    NSMutableDictionary *_removals;	// 72 = 0x48
    NSString *_collectionIdentifier;	// 80 = 0x50
    NSUUID *_deviceUUID;	// 88 = 0x58
}

+ (void)cleanupOrphanedStoresWithCurrentDeviceUUIDs:(id)arg1;	// IMP=0x0000000100041ba4
- (void).cxx_destruct;	// IMP=0x0000000100045acc
@property(readonly, nonatomic) NSUUID *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
@property(readonly, nonatomic) NSString *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
- (void)_queue_notifyDidRemoveComplicationForClientIdentifier:(id)arg1 skipSyncObserver:(_Bool)arg2;	// IMP=0x0000000100045834
- (void)_queue_notifyDidUpdateSampleTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3 skipSyncObserver:(_Bool)arg4;	// IMP=0x0000000100045560
- (void)_queue_loadFullCollectionForObserver:(id)arg1;	// IMP=0x000000010004542c
- (void)_queue_playbackChangesForObserver:(id)arg1 fromSeqId:(id)arg2;	// IMP=0x0000000100044b88
- (void)_queue_clearRemovalsThroughSeqId:(id)arg1;	// IMP=0x0000000100044a20
- (id)_queue_sampleTemplateForClientIdentifier:(id)arg1 family:(long long)arg2;	// IMP=0x00000001000448d8
- (void)_queue_incrementSeqId;	// IMP=0x0000000100044844
- (void)_onObserverQueue_async:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044788
- (void)_onQueue_async:(CDUnknownBlockType)arg1;	// IMP=0x00000001000446cc
- (void)synchronize;	// IMP=0x00000001000446b8
- (void)_removeComplicationForClientIdentifier:(id)arg1 skipSyncObserver:(_Bool)arg2;	// IMP=0x0000000100044374
- (void)_updateLocalizableSampleDataTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3 skipSyncObserver:(_Bool)arg4;	// IMP=0x0000000100044274
- (void)_updateLocalizableSampleData:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3 skipSyncObserver:(_Bool)arg4;	// IMP=0x0000000100044094
- (void)_updateLocalizableSampleData:(id)arg1 forClientIdentifier:(id)arg2 skipSyncObserver:(_Bool)arg3;	// IMP=0x00000001000439f4
- (void)withoutNotifyingSyncObserverRemoveComplicationForClientIdentifier:(id)arg1;	// IMP=0x00000001000439e4
- (void)withoutNotifyingUpdateLocalizableSampleDataTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3;	// IMP=0x0000000100043988
- (void)withoutNotifyingSyncObserverSetComplicationSampleData:(id)arg1 forClientIdentifier:(id)arg2;	// IMP=0x000000010004392c
- (void)removeComplicationForClientIdentifier:(id)arg1;	// IMP=0x000000010004391c
- (void)updateLocalizableSampleDataTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3;	// IMP=0x00000001000438c0
- (id)sampleTemplateForClientIdentifier:(id)arg1 family:(long long)arg2;	// IMP=0x0000000100043768
- (id)clients;	// IMP=0x0000000100043630
- (void)setVersion:(float)arg1;	// IMP=0x00000001000434fc
- (float)version;	// IMP=0x00000001000433b8
- (void)clearSyncObserver;	// IMP=0x0000000100043350
- (void)setSyncObserver:(id)arg1 withSeqId:(id)arg2;	// IMP=0x000000010004320c
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100043178
- (void)addObserver:(id)arg1 withSeqId:(id)arg2;	// IMP=0x0000000100042f14
- (id)complicationSampleDataForClientID:(id)arg1;	// IMP=0x0000000100042ca4
- (void)_faultInAllClientData;	// IMP=0x000000010004274c
- (id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x0000000100042080

@end

