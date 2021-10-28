//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NDBackgroundSession.h"

#import "NDAVAssetDownloadSessionWrapperDelegate-Protocol.h"
#import "NDBackgroundSessionProtocol-Protocol.h"

@class NSMapTable, NSMutableDictionary, NSObject, NSString, NSURLSessionConfiguration;
@protocol OS_dispatch_source;

@interface NDAVBackgroundSession : NDBackgroundSession <NDBackgroundSessionProtocol, NDAVAssetDownloadSessionWrapperDelegate>
{
    NSMutableDictionary *_identifiersToAVWrappers;	// 232 = 0xe8
    NSMutableDictionary *_identifiersToThroughputMonitors;	// 240 = 0xf0
    NSMutableDictionary *_identifiersToTCPConnections;	// 248 = 0xf8
    NSMutableDictionary *_identifiersToDASActivities;	// 256 = 0x100
    NSMapTable *_assetDownloadTokensToAssets;	// 264 = 0x108
    NSURLSessionConfiguration *_clientConfig;	// 272 = 0x110
    NSObject<OS_dispatch_source> *_delayedWakeTimer;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x0000000100068adc
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x0000000100068704
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didResolveMediaSelectionPropertyList:(id)arg2;	// IMP=0x00000001000684dc
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didLoadTimeRange:(id)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(id)arg4;	// IMP=0x00000001000683f8
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didUpdateProgressWithLastBytesWritten:(unsigned long long)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4;	// IMP=0x00000001000682cc
- (void)taskWithIdentifier:(unsigned long long)arg1 didCompleteWithError:(id)arg2;	// IMP=0x0000000100067a80
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x0000000100067868
- (void)cancelTCPConnectionForTask:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x00000001000674a8
- (void)clientAcknowledgedTerminalCallbackForTask:(unsigned long long)arg1;	// IMP=0x0000000100067374
- (void)resetStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100067368
- (void)stopAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100067260
- (void)startAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100066f50
- (_Bool)ensureAVAssetDownloadSessionWrapperForTaskIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100066bfc
- (id)newAVAssetDownloadSessionWrapperForTaskInfo:(id)arg1;	// IMP=0x0000000100066868
- (long long)adjustedTCPConnectionPriorityForTaskPriority:(long long)arg1;	// IMP=0x0000000100066760
- (void)taskShouldResume:(unsigned long long)arg1;	// IMP=0x0000000100066514
- (void)taskShouldSuspend:(unsigned long long)arg1;	// IMP=0x00000001000660c4
- (_Bool)retryTask:(id)arg1 originalError:(id)arg2;	// IMP=0x0000000100065bd0
- (void)setPriority:(long long)arg1 forTCPConnectionWithTaskIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100065bcc
- (void)cancelAVDownloadAndFailTaskWithIdentifier:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x00000001000659b8
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x00000001000659b4
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x00000001000658b8
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;	// IMP=0x0000000100065844
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x000000010006564c
- (void)avAggregateAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 serializedMediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 childDownloadSessionIdentifier:(id)arg6 identifier:(unsigned long long)arg7 uniqueIdentifier:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x0000000100064f5c
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 options:(id)arg7 identifier:(unsigned long long)arg8 uniqueIdentifier:(id)arg9 reply:(CDUnknownBlockType)arg10;	// IMP=0x0000000100064488
- (id)avAssetForURL:(id)arg1 downloadToken:(unsigned long long)arg2;	// IMP=0x000000010006422c
- (_Bool)hasEntitlementToSpecifyDownloadDestinationURL;	// IMP=0x00000001000641b8
- (void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 pipeHandle:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x00000001000641a8
- (void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100064198
- (void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned long long)arg3 uniqueIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100064188
- (void)applicationEndedTransitionalDiscretionaryBackgroundPeriod:(id)arg1;	// IMP=0x0000000100064104
- (void)backgroundUpdatesDisabledForApplication:(id)arg1;	// IMP=0x0000000100064100
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;	// IMP=0x000000010006407c
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x0000000100063ff8
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x0000000100063f74
- (id)destinationURLToUseForTask:(id)arg1;	// IMP=0x0000000100063a98
- (id)downloadDirectoryToUse:(id)arg1;	// IMP=0x0000000100063a14
- (id)avAssetDownloadsDirectory;	// IMP=0x0000000100063524
- (void)updatePriorityForTaskID:(id)arg1;	// IMP=0x0000000100063520
- (void)fillInByteCountsForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x0000000100063420
- (id)restoreTasksFromArchivedInfo:(id)arg1;	// IMP=0x0000000100063320
- (void)cancelThroughputMonitorForWrapper:(unsigned long long)arg1;	// IMP=0x000000010006320c
- (void)setupThroughputMonitorForWrapper:(id)arg1 taskInfo:(id)arg2 identifier:(unsigned long long)arg3;	// IMP=0x0000000100063088
- (void)cancelDelayedCompletionWakeTimer;	// IMP=0x0000000100062f34
- (void)setupDelayedCompletionWakeTimer;	// IMP=0x0000000100062d5c
- (id)initWithConfiguration:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3 downloadDirectory:(id)arg4 options:(id)arg5 clientProxy:(id)arg6 delegate:(id)arg7 workQueue:(id)arg8 archiveQueue:(id)arg9;	// IMP=0x0000000100062a74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
