//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLEngineStorageImplementation-Protocol.h"

@class CPLResource, CPLScopedIdentifier, NSArray;
@protocol NSFastEnumeration;

@protocol CPLEngineResourceDownloadQueueImplementation <CPLEngineStorageImplementation>
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (_Bool)hasActiveOrQueuedBackgroundDownloadOperations;
- (unsigned long long)countOfQueuedDownloadTasks;
- (id <NSFastEnumeration>)enumeratorForDownloadedResources;
- (_Bool)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(CPLScopedIdentifier *)arg1 error:(id *)arg2;
- (_Bool)resetDequeuedBackgroundDownloadTasksWithError:(id *)arg1;
- (NSArray *)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 maximumSize:(unsigned long long)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)removeBackgroundDownloadTaskForResource:(CPLResource *)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)markBackgroundDownloadTaskForResourceAsSuceeded:(CPLResource *)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)reenqueueBackgroundDownloadTaskForResource:(CPLResource *)arg1 taskIdentifier:(unsigned long long)arg2 bumpRetryCount:(_Bool)arg3 didDiscard:(_Bool *)arg4 error:(id *)arg5;
- (_Bool)enqueueBackgroundDownloadTaskForResource:(CPLResource *)arg1 downloading:(_Bool)arg2 error:(id *)arg3;
- (unsigned long long)newTaskIdentifier;
@end

