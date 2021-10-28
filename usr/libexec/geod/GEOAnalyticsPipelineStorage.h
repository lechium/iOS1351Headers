//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, geo_isolater;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEOAnalyticsPipelineStorage : NSObject
{
    NSMutableArray *_batchQueue;	// 8 = 0x8
    unsigned long long _batchQueueMaxSize;	// 16 = 0x10
    unsigned long long _batchQueueFlushTime;	// 24 = 0x18
    geo_isolater *_batchQueueLock;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_batchQueueSpoolTimer;	// 40 = 0x28
    id _batchQueueSpoolTransaction;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_storageQueue;	// 56 = 0x38
}

+ (id)sharedStorage;	// IMP=0x000000010000bd6c
- (void).cxx_destruct;	// IMP=0x000000010000d4dc
- (void)_writeLogMsgQueueElems:(id)arg1;	// IMP=0x000000010000cd84
- (void)_spoolQueueToDB;	// IMP=0x000000010000cc28
- (void)_clearQueueFlushTransaction;	// IMP=0x000000010000cbf0
- (void)_setQueueFlushTransaction;	// IMP=0x000000010000cb58
- (void)_terminationRequested:(id)arg1;	// IMP=0x000000010000ca50
- (void)_storeQueueElem:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c858
- (void)storeMapKitCount:(int)arg1 appId:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010000c62c
- (void)storeLogMsg:(id)arg1 ofType:(int)arg2 handlingPolicyId:(int)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000010000c0bc
- (id)init;	// IMP=0x000000010000bdd8

@end
