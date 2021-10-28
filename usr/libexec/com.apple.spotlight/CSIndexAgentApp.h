//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpotlight/CSXPCConnection.h>

#import "FPMonitorDelegate-Protocol.h"

@class FPMonitor, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSIndexAgentApp : CSXPCConnection <FPMonitorDelegate>
{
    _Bool _queryQueueActive;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_indexQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queryQueue;	// 24 = 0x18
    id _monitoringContext;	// 32 = 0x20
    FPMonitor *_fpMonitor;	// 40 = 0x28
}

+ (id)sharedAgent;	// IMP=0x000000010000fad4
+ (void)initialize;	// IMP=0x000000010000f870
- (void).cxx_destruct;	// IMP=0x0000000100019b6c
@property(nonatomic) _Bool queryQueueActive; // @synthesize queryQueueActive=_queryQueueActive;
@property(retain, nonatomic) FPMonitor *fpMonitor; // @synthesize fpMonitor=_fpMonitor;
@property(retain, nonatomic) id monitoringContext; // @synthesize monitoringContext=_monitoringContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // @synthesize queryQueue=_queryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *indexQueue; // @synthesize indexQueue=_indexQueue;
- (_Bool)lostClientConnection:(id)arg1 error:(id)arg2;	// IMP=0x0000000100019840
- (_Bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;	// IMP=0x0000000100019284
- (void)handleWalkPath:(const char *)arg1 flat:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010001902c
- (void)handleResolveInfo:(const char *)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100018c04
- (void)handleResolvePath:(const char *)arg1 info:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100018848
- (void)_handleScan:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001864c
- (int)_mountVolume:(id)arg1;	// IMP=0x00000001000183fc
- (void)performScan:(id)arg1 liveFSHandle:(id)arg2 pathFromMountPoint:(id)arg3 fromDate:(id)arg4 allowImport:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100017d74
- (void)handleFSE:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017c1c
- (void)handleQueryCancel:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017b00
- (void)handleQueryStart:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017280
- (void)handleMount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017164
- (void)handleScan:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016fc8
- (void)handleCloseAll:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016eb0
- (void)_handleFSE:(id)arg1;	// IMP=0x00000001000159cc
- (void)removeChildRecords:(long long)arg1 withIndexer:(id)arg2 withVolumeName:(const char *)arg3;	// IMP=0x0000000100015144
- (int)_queryCancel:(id)arg1;	// IMP=0x0000000100015008
- (int)_scanQueryStart:(id)arg1 scope:(id)arg2 queryString:(id)arg3 criteria:(id)arg4 queryContext:(id)arg5 queryID:(long long)arg6 remoteConnection:(id)arg7;	// IMP=0x0000000100013d84
- (int)_indexQueryStart:(id)arg1 queryString:(id)arg2 queryContext:(id)arg3 queryID:(long long)arg4 remoteConnection:(id)arg5;	// IMP=0x000000010001314c
- (void)_closeAllWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100012fd8
- (void)handleReset:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012c78
- (void)importItems:(id)arg1 indexer:(id)arg2;	// IMP=0x0000000100012884
- (void)openIndex:(id)arg1 rootPath:(id)arg2 domain:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000100011ec8
- (id)macOSJournalSafeScanDateFromIndexPath:(const char *)arg1;	// IMP=0x0000000100011d44
- (void)_handleMount:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000100010f14
- (id)createVolumeConfigForMountPath:(const char *)arg1 volumeUUID:(id)arg2;	// IMP=0x00000001000109f0
- (void)handleStatus:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010670
- (void)udatedWithAddedMountPoints:(id)arg1 andRemovedMountPoints:(id)arg2;	// IMP=0x0000000100010020
- (void)queryActiviate;	// IMP=0x000000010000ffdc
- (void)_closeIndexAtPath:(id)arg1;	// IMP=0x000000010000fd38
- (id)indexerForVolume:(id)arg1;	// IMP=0x000000010000fcdc
- (id)indexerForCStringVolume:(const char *)arg1;	// IMP=0x000000010000fae0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
