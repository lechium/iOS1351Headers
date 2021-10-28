//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAssetDownloadDelegate-Protocol.h"
#import "DownloadAssetFairPlayStreamingKeyLoaderDelegate-Protocol.h"
#import "ISOperationDelegate-Protocol.h"
#import "NSURLSessionAVAssetDownloadDelegate-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"

@class DownloadsDatabase, ISOperationQueue, NSMapTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol OS_dispatch_source;

@interface DownloadPipeline : NSObject <NSURLSessionDataDelegate, ISOperationDelegate, NSURLSessionAVAssetDownloadDelegate, AVAssetDownloadDelegate, DownloadAssetFairPlayStreamingKeyLoaderDelegate>
{
    NSMapTable *_aggregateDownloadProgress;	// 8 = 0x8
    ISOperationQueue *_authenticationChallengeQueue;	// 16 = 0x10
    ISOperationQueue *_backgroundOperationQueue;	// 24 = 0x18
    DownloadsDatabase *_database;	// 32 = 0x20
    NSMutableSet *_dirtyTaskStates;	// 40 = 0x28
    NSMutableSet *_downloadHandlerSessions;	// 48 = 0x30
    _Bool _holdingKeepAliveAssertion;	// 56 = 0x38
    NSMutableOrderedSet *_preparationDownloadIDs;	// 64 = 0x40
    ISOperationQueue *_preparationOperationQueue;	// 72 = 0x48
    ISOperationQueue *_processingOperationQueue;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_progressTimer;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_reconnectTimer;	// 96 = 0x60
    NSMapTable *_resourceLoaders;	// 104 = 0x68
    NSMapTable *_taskStates;	// 112 = 0x70
    NSMutableDictionary *_urlSessions;	// 120 = 0x78
    NSMutableDictionary *_downloadOperationsByTask;	// 128 = 0x80
    ISOperationQueue *_discretionaryDownloadOperationQueue;	// 136 = 0x88
    ISOperationQueue *_nonDiscretionaryDownloadOperationQueue;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000100150bf0
- (_Bool)_isPodcast:(id)arg1;	// IMP=0x0000000100150b9c
- (void)_startProgressTimer;	// IMP=0x0000000100150a58
- (void)_setDownloadPhase:(id)arg1 forDownloadIdentifier:(long long)arg2 databaseTransaction:(id)arg3;	// IMP=0x00000001001507c4
- (void)_scheduleReconnect;	// IMP=0x00000001001504cc
- (void)_reloadKeepAliveAssertion;	// IMP=0x000000010015031c
- (void)_releaseDownloadHandlerSession:(id)arg1 withTaskState:(id)arg2;	// IMP=0x0000000100150078
- (void)_processDownloadFailureWithTaskState:(id)arg1 cancelReason:(long long)arg2;	// IMP=0x000000010014fd40
- (void)_queueFinishDownloadWithtaskState:(id)arg1 databaseSession:(id)arg2 setupBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010014fb04
- (void)_processDownloadWithTaskState:(id)arg1 databaseSession:(id)arg2 setupBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010014fa40
- (void)_prepareDownloadsMatchingPredicate:(id)arg1 ignoreDownloadHandlers:(_Bool)arg2 filtersExistingTasks:(_Bool)arg3;	// IMP=0x000000010014f450
- (void)_performDefaultHandlingForAuthenticationChallenge:(id)arg1 withSessionProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010014ed84
- (void)_logDownloadEvent:(id)arg1 forTaskWithState:(id)arg2 session:(id)arg3;	// IMP=0x000000010014ec90
- (_Bool)_hasAutomaticUpdateTasks;	// IMP=0x000000010014eb18
- (void)_finishRecoveryWithOperation:(id)arg1 response:(id)arg2;	// IMP=0x000000010014e5fc
- (void)_performDownloadOperation:(id)arg1;	// IMP=0x000000010014c644
- (void)_taskReceived:(id)arg1 persistAVAssetDownloadToken:(unsigned long long)arg2;	// IMP=0x000000010014bf7c
- (void)_finishDownloadWithOperation:(id)arg1 response:(id)arg2;	// IMP=0x000000010014ae04
- (void)_failDownloadWithIdentifier:(id)arg1 error:(id)arg2 transaction:(id)arg3;	// IMP=0x000000010014acf0
- (id)_downloadSessionPropertiesWithPhase:(id)arg1 taskState:(id)arg2 databaseSession:(id)arg3;	// IMP=0x000000010014aa58
- (_Bool)_downloadIsForLegacyClientWithIdentifier:(id)arg1;	// IMP=0x000000010014a81c
- (void)_disavowDownloadHandlerSession:(id)arg1 withTaskState:(id)arg2;	// IMP=0x000000010014a418
- (void)_commitProgressTimer;	// IMP=0x0000000100149a90
- (id)_authenticationChallengeQueue;	// IMP=0x0000000100149a20
- (void)_attemptRecoveryForDownloadWithTaskState:(id)arg1 databaseSession:(id)arg2;	// IMP=0x0000000100149848
- (id)_applicationHandleForDownloadIdentifier:(long long)arg1 databaseTransaction:(id)arg2;	// IMP=0x000000010014968c
- (id)_applicationBundleIdentifierForDownloadIdentifier:(long long)arg1 databaseTransaction:(id)arg2;	// IMP=0x0000000100149534
- (void)downloadAssetFairPlayStreamingKeyLoader:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001001490dc
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100148960
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;	// IMP=0x0000000100148400
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010014802c
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000001001467f4
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100145f0c
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_3c1748cc)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg5 forMediaSelection:(id)arg6;	// IMP=0x000000010014595c
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didCompleteForMediaSelection:(id)arg3;	// IMP=0x0000000100145740
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;	// IMP=0x0000000100145518
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_3c1748cc)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg5;	// IMP=0x00000001001450bc
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000100144c78
- (void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x0000000100144b40
- (void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didReceiveAVAssetDownloadToken:(unsigned long long)arg3;	// IMP=0x0000000100144b2c
- (void)operation:(id)arg1 updatedProgress:(id)arg2;	// IMP=0x00000001001449ac
- (void)updateAfterSessionsChanged:(id)arg1;	// IMP=0x0000000100143ee4
- (void)stopDownloadsWithIdentifiers:(id)arg1 reason:(long long)arg2;	// IMP=0x000000010014333c
- (id)restartDownloadsWithIdentifiers:(id)arg1;	// IMP=0x0000000100142f50
- (void)prioritizeDownloadWithIdentifier:(id)arg1;	// IMP=0x0000000100142600
- (void)reconnectWithURLSessionTasks;	// IMP=0x0000000100142310
- (void)addDownloadsWithIdentifiers:(id)arg1;	// IMP=0x0000000100141de0
- (void)dealloc;	// IMP=0x0000000100141d70
- (id)initWithDownloadsDatabase:(id)arg1;	// IMP=0x0000000100141a3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
