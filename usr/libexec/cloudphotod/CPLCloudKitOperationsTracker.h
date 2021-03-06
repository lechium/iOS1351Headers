//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLCloudKitOperationCounter, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CPLCloudKitOperationsTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_tasks;	// 16 = 0x10
    CPLCloudKitOperationCounter *_operationCounter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100092540
- (id)statusDictionary;	// IMP=0x000000010009223c
- (id)status;	// IMP=0x000000010009204c
- (void)cancelBlockedTasksIncludingBackground:(_Bool)arg1;	// IMP=0x0000000100091d5c
- (void)cancelAllOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100091a34
- (void)taskDidFinish:(id)arg1;	// IMP=0x0000000100091774
- (void)taskHasBeenCancelled:(id)arg1;	// IMP=0x0000000100091534
- (void)operationHasBeenCancelled:(id)arg1;	// IMP=0x00000001000912ec
- (void)operationDidFinish:(id)arg1;	// IMP=0x0000000100090e68
- (void)operation:(id)arg1 updateContextWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100090dac
- (void)operation:(id)arg1 updateProgress:(double)arg2;	// IMP=0x0000000100090b58
- (void)operationDidProgressOneBatch:(id)arg1;	// IMP=0x00000001000908cc
- (id)_contextForOperation:(id)arg1;	// IMP=0x0000000100090778
- (void)operationWillStart:(id)arg1 forTask:(id)arg2 withContext:(id)arg3 bundleIdentifiers:(id)arg4;	// IMP=0x00000001000902d4
- (void)operationWillStart:(id)arg1 forTask:(id)arg2 withContext:(id)arg3;	// IMP=0x000000010009016c
- (void)taskWillStart:(id)arg1;	// IMP=0x000000010008fe84
- (void)_emitLogForCurrentTasks;	// IMP=0x000000010008fd74
- (id)_pendingTaskStatus;	// IMP=0x000000010008f9d8
- (id)init;	// IMP=0x000000010008f920

@end

