//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MBCKOperationPolicy, MBCKOperationTracker, NSError, NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface MBCKBatchSave : NSObject
{
    _Atomic int _pendingOperationsCount;	// 8 = 0x8
    _Atomic _Bool _started;	// 12 = 0xc
    _Bool _saveIncrementally;	// 13 = 0xd
    _Bool _canceled;	// 14 = 0xe
    MBCKOperationTracker *_ckOperationTracker;	// 16 = 0x10
    MBCKOperationPolicy *_ckOperationPolicy;	// 24 = 0x18
    NSMutableOrderedSet *_saveInfos;	// 32 = 0x20
    NSMutableDictionary *_saveInfosByRecordID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_saveGroup;	// 56 = 0x38
    NSError *_saveError;	// 64 = 0x40
    unsigned long long _currentBatchCount;	// 72 = 0x48
    unsigned long long _currentBatchSize;	// 80 = 0x50
    unsigned long long _currentBatchAssetSize;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000001000af954
@property _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) unsigned long long currentBatchAssetSize; // @synthesize currentBatchAssetSize=_currentBatchAssetSize;
@property(nonatomic) unsigned long long currentBatchSize; // @synthesize currentBatchSize=_currentBatchSize;
@property(nonatomic) unsigned long long currentBatchCount; // @synthesize currentBatchCount=_currentBatchCount;
@property(retain) NSError *saveError; // @synthesize saveError=_saveError;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *saveGroup; // @synthesize saveGroup=_saveGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSMutableDictionary *saveInfosByRecordID; // @synthesize saveInfosByRecordID=_saveInfosByRecordID;
@property(retain, nonatomic) NSMutableOrderedSet *saveInfos; // @synthesize saveInfos=_saveInfos;
@property(nonatomic) _Bool saveIncrementally; // @synthesize saveIncrementally=_saveIncrementally;
@property(retain, nonatomic) MBCKOperationPolicy *ckOperationPolicy; // @synthesize ckOperationPolicy=_ckOperationPolicy;
@property(nonatomic) __weak MBCKOperationTracker *ckOperationTracker; // @synthesize ckOperationTracker=_ckOperationTracker;
- (void)cancel;	// IMP=0x00000001000af854
- (void)saveRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000af7e0
- (void)_saveRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000af6a8
- (void)_flushBatchedSaves:(unsigned long long)arg1;	// IMP=0x00000001000aece8
- (void)_scheduleBatchSaveOperationForSaveInfos:(id)arg1;	// IMP=0x00000001000ae60c
- (void)_sendBatchSaveOperationForSaveInfos:(id)arg1 savePolicy:(long long)arg2;	// IMP=0x00000001000ad5b8
- (id)_createModifyOperationForBatch:(id)arg1;	// IMP=0x00000001000accc0
- (void)_finishBatchedSavesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ac9f4
- (_Bool)_handleCompletionForSaveInfo:(id)arg1 operation:(id)arg2 record:(id)arg3 error:(id)arg4;	// IMP=0x00000001000ab884
- (void)_performCallbacksForSaveInfo:(id)arg1 record:(id)arg2 error:(id)arg3;	// IMP=0x00000001000ab390
- (void)_flush;	// IMP=0x00000001000ab354
- (void)saveRecord:(id)arg1 delegate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000aab58
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *saveSemaphore;
- (void)dealloc;	// IMP=0x00000001000aaa44
- (id)initWithOperationTracker:(id)arg1;	// IMP=0x00000001000aa8c4

@end

