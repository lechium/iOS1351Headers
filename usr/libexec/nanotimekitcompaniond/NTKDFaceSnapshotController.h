//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NTKComplicationCollectionObserver-Protocol.h"
#import "NTKDCollectionLifecycleObserver-Protocol.h"
#import "NTKDCollectionStoreObserver-Protocol.h"

@class NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSRecursiveLock, NSString, NTKComplicationCollection, NTKFaceSnapshotter;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NTKDFaceSnapshotController : NSObject <NTKDCollectionLifecycleObserver, NTKDCollectionStoreObserver, NTKComplicationCollectionObserver>
{
    NSObject<OS_dispatch_queue> *_observerCallbackQueue;	// 8 = 0x8
    NSMutableArray *_snapshotKeysWithBlankComplications;	// 16 = 0x10
    NSMutableDictionary *_snapshotContexts;	// 24 = 0x18
    NTKComplicationCollection *_complicationCollection;	// 32 = 0x20
    _Bool _needToUpdateSnapshotsForFacesWithThirdPartyComplications;	// 40 = 0x28
    NSHashTable *_observers;	// 48 = 0x30
    NSRecursiveLock *_observersLock;	// 56 = 0x38
    NSObject<OS_dispatch_semaphore> *_setImageForKeyOperationsCount;	// 64 = 0x40
    NSArray *_currentSnapshots;	// 72 = 0x48
    NSMutableArray *_currentSnapshotCompletions;	// 80 = 0x50
    NSMutableArray *_pendingSnapshots;	// 88 = 0x58
    NSMutableArray *_pendingSnapshotCompletions;	// 96 = 0x60
    NTKFaceSnapshotter *_snapshotter;	// 104 = 0x68
    NSOperationQueue *_xpcSnapshotOperationQueue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_queue;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000010003226c
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_writeImageToDisk:(id)arg1 imageName:(id)arg2;	// IMP=0x000000010003217c
- (struct __CFString *)_preferencesKeyForCollectionStore:(id)arg1;	// IMP=0x000000010003209c
- (void)_endSnapshottingActivityDidTakeSnapshot:(_Bool)arg1;	// IMP=0x0000000100031f38
- (void)_startSnapshottingActivity;	// IMP=0x0000000100031e68
- (void)_queue_snapshotFaces:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000316a4
- (void)_queue_updateSnapshots:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100030dec
- (void)_queue_updateSnapshotForFace:(id)arg1 complicationTemplateChanged:(_Bool)arg2;	// IMP=0x0000000100030cf4
- (void)_queue_updateSnapshotForFace:(id)arg1 inStore:(id)arg2;	// IMP=0x0000000100030bbc
- (void)_updateSnapshotForFace:(id)arg1 inStore:(id)arg2;	// IMP=0x0000000100030ad8
- (void)_enumerateRemoteComplicationsForFace:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010003098c
- (void)_enumerateAllFacesForDeviceUUID:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000306f4
- (void)_loadComplicationCollection;	// IMP=0x0000000100030630
- (_Bool)_snapshotExistsForKey:(id)arg1;	// IMP=0x00000001000305ac
- (void)_onObserverQueue_async:(CDUnknownBlockType)arg1;	// IMP=0x00000001000304f0
- (void)_onQueue_async:(CDUnknownBlockType)arg1;	// IMP=0x0000000100030434
- (id)_currentContext;	// IMP=0x0000000100030420
- (_Bool)_queue_cleanCacheExcludingKeys:(id)arg1;	// IMP=0x0000000100030078
- (_Bool)_queue_cleanCache;	// IMP=0x000000010002fd68
- (_Bool)_queue_cleanSnapshotKeysWithBlankComplications;	// IMP=0x000000010002fc38
- (_Bool)_queue_cleanContexts;	// IMP=0x000000010002fb08
- (id)_queue_snapshotObjectsForFace:(id)arg1 complicationTemplateChanged:(_Bool)arg2;	// IMP=0x000000010002f584
- (id)_queue_snapshotObjectsForFace:(id)arg1;	// IMP=0x000000010002f574
- (id)_queue_allSnapshotObjects;	// IMP=0x000000010002eac4
- (void)complicationCollectionDidLoad:(id)arg1;	// IMP=0x000000010002e8b0
- (void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2;	// IMP=0x000000010002e530
- (_Bool)_modernSnapshottingEnabledForStore:(id)arg1;	// IMP=0x000000010002e4c8
- (void)collectionStore:(id)arg1 didUpgradeFace:(id)arg2 forUUID:(id)arg3 seqId:(id)arg4;	// IMP=0x000000010002e384
- (void)collectionStore:(id)arg1 didRemoveFaceOfStyle:(long long)arg2 forUUID:(id)arg3 seqId:(id)arg4 acknowledge:(CDUnknownBlockType)arg5;	// IMP=0x000000010002e2d8
- (void)collectionStore:(id)arg1 didUpdateOrderedUUIDs:(id)arg2 seqId:(id)arg3;	// IMP=0x000000010002e258
- (void)collectionStore:(id)arg1 didUpdateSelectedUUID:(id)arg2 seqId:(id)arg3;	// IMP=0x000000010002e0ec
- (void)collectionStore:(id)arg1 loadOrderedUUIDs:(id)arg2 selectedUUID:(id)arg3 facesByUUID:(id)arg4 seqId:(id)arg5 acknowledge:(CDUnknownBlockType)arg6;	// IMP=0x000000010002decc
- (void)collectionStore:(id)arg1 didAddFace:(id)arg2 forUUID:(id)arg3 seqId:(id)arg4;	// IMP=0x000000010002dd88
- (void)collectionStore:(id)arg1 didUpdateFaceForUUID:(id)arg2 withResourceDirectory:(id)arg3 seqId:(id)arg4 acknowledge:(CDUnknownBlockType)arg5;	// IMP=0x000000010002dbf8
- (void)collectionStore:(id)arg1 didUpdateFaceForUUID:(id)arg2 withConfiguration:(id)arg3 seqId:(id)arg4;	// IMP=0x000000010002da8c
- (void)collectionStoreWillBePurged:(id)arg1;	// IMP=0x000000010002d98c
- (void)collectionStoreHasBeenCreated:(id)arg1;	// IMP=0x000000010002d844
- (void)_notifyFaceSnapshotChangedForKey:(id)arg1;	// IMP=0x000000010002d60c
- (void)performAfterCompletingCurrentlyPendingSnapshots:(CDUnknownBlockType)arg1;	// IMP=0x000000010002d4fc
- (void)queue_updateAddableAndGallerySnapshotsWithContinuationBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010002c514
- (void)updateAddableAndGallerySnapshotsWithContinuationBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010002c3ec
- (void)snapshotLibrarySelectedFaceForDeviceUUID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002bf84
- (void)provideSnapshotOfFace:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002b324
- (void)snapshotFace:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002b238
- (void)createFaceForPerformanceTesting:(long long)arg1;	// IMP=0x000000010002b0c8
- (void)updateSnapshotForFace:(id)arg1;	// IMP=0x000000010002b0b8
- (void)_queue_updateAllSnapshots;	// IMP=0x000000010002ae0c
- (void)updateAllSnapshots;	// IMP=0x000000010002ada4
- (void)removeObserver:(id)arg1;	// IMP=0x000000010002ace0
- (void)addObserver:(id)arg1;	// IMP=0x000000010002ac1c
- (void)dealloc;	// IMP=0x000000010002ab00
- (id)init;	// IMP=0x0000000100029c68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
