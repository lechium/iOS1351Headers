//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NDApplicationObserver-Protocol.h"
#import "NDBackgroundSessionProtocol-Protocol.h"
#import "NDCallbackQueueDelegate-Protocol.h"
#import "NDCredentialStorageDelegate-Protocol.h"
#import "NSURLSessionDataDelegate_Internal-Protocol.h"
#import "NSURLSessionDelegate_Internal-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate_Private-Protocol.h"
#import "NSURLSessionTaskDelegatePrivate-Protocol.h"

@class NDApplication, NDCallbackQueue, NDCredentialStorage, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSURLSession, NSUUID, NSXPCConnection;
@protocol NDBackgroundSessionDelegate, NSXPCProxyCreating><NDBackgroundSessionClient, OS_dispatch_queue;

@interface NDBackgroundSession : NSObject <NDApplicationObserver, NDBackgroundSessionProtocol, NDCallbackQueueDelegate, NSURLSessionDataDelegate_Internal, NSURLSessionDownloadDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDownloadDelegate_Private, NSURLSessionDelegate_Internal, NDCredentialStorageDelegate>
{
    NSURLSession *_userInitiatedSession;	// 8 = 0x8
    NSURLSession *_discretionaryPrioritySession;	// 16 = 0x10
    NDCredentialStorage *_credentialStorage;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_archiveQueue;	// 32 = 0x20
    NDApplication *_clientApplication;	// 40 = 0x28
    NDApplication *_connectedExtension;	// 48 = 0x30
    NSMutableDictionary *_tasksToIdentifiers;	// 56 = 0x38
    NSMutableDictionary *_identifiersToTasks;	// 64 = 0x40
    NSMutableDictionary *_identifiersToMonitors;	// 72 = 0x48
    NSMutableDictionary *_identifiersToStreams;	// 80 = 0x50
    NSMutableDictionary *_identifiersToStreamQueues;	// 88 = 0x58
    NSMutableArray *_outstandingTaskIDs;	// 96 = 0x60
    double _lastArchiveTime;	// 104 = 0x68
    NSURL *_sessionDirectory;	// 112 = 0x70
    NSURL *_downloadDirectory;	// 120 = 0x78
    NSURL *_uploadsDirectory;	// 128 = 0x80
    _Bool _performsEVCertCheck;	// 136 = 0x88
    _Bool _clientImplementsWillSendRequest;	// 137 = 0x89
    _Bool _clientImplementsWillBeginDelayedRequest;	// 138 = 0x8a
    _Bool _clientImplementsSessionChallenge;	// 139 = 0x8b
    _Bool _clientImplementsTaskChallenge;	// 140 = 0x8c
    _Bool _sendsLaunchEvents;	// 141 = 0x8d
    _Bool _discretionary;	// 142 = 0x8e
    _Bool _obliterated;	// 143 = 0x8f
    _Bool _cleanedUp;	// 144 = 0x90
    _Bool _hasBeenSignalledToDeliverPendingEvents;	// 145 = 0x91
    _Bool _infersDiscretionary;	// 146 = 0x92
    _Bool _shouldPullInitialCredentials;	// 147 = 0x93
    CDUnknownBlockType _completeReconnectionBlock;	// 152 = 0x98
    int _clientPID;	// 160 = 0xa0
    NSXPCConnection *_xpcConn;	// 168 = 0xa8
    NSString *_watchExtensionBundleIdentifier;	// 176 = 0xb0
    _Bool _retryDataTasks;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_workQueue;	// 192 = 0xc0
    NDCallbackQueue *_callbackQueue;	// 200 = 0xc8
    NDApplication *_monitoredApplication;	// 208 = 0xd0
    NSMutableDictionary *_identifiersToTaskInfo;	// 216 = 0xd8
    id <NSXPCProxyCreating><NDBackgroundSessionClient> _clientProxy;	// 224 = 0xe0
    id <NDBackgroundSessionDelegate> _delegate;	// 232 = 0xe8
    NSUUID *_uuid;	// 240 = 0xf0
    NSString *_identifier;	// 248 = 0xf8
    NSString *_clientBundleID;	// 256 = 0x100
    NSString *_monitoredAppBundleID;	// 264 = 0x108
    NSString *_secondaryID;	// 272 = 0x110
    CDUnknownBlockType _invalidateReply;	// 280 = 0x118
    NSString *_sharedContainerIdentifier;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x000000010002d210
@property(copy) NSString *sharedContainerIdentifier; // @synthesize sharedContainerIdentifier=_sharedContainerIdentifier;
@property(copy) CDUnknownBlockType invalidateReply; // @synthesize invalidateReply=_invalidateReply;
@property(readonly) NSString *secondaryID; // @synthesize secondaryID=_secondaryID;
@property(readonly) NSString *monitoredAppBundleID; // @synthesize monitoredAppBundleID=_monitoredAppBundleID;
@property(readonly) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property __weak id <NDBackgroundSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010002cc34
- (void)_URLSession:(id)arg1 openFileAtPath:(id)arg2 mode:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010002c8a0
- (id)_URLSession:(id)arg1 downloadTaskNeedsDownloadDirectory:(id)arg2;	// IMP=0x000000010002c814
- (void)_URLSession:(id)arg1 downloadTask:(id)arg2 didReceiveResponse:(id)arg3;	// IMP=0x000000010002c53c
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;	// IMP=0x000000010002c3b8
- (void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;	// IMP=0x000000010002c1e0
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010002baec
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x000000010002b8b0
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;	// IMP=0x000000010002b648
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x000000010002b404
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;	// IMP=0x000000010002b048
- (void)_URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010002abc4
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010002a5e0
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010002a5d0
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000001000295f4
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x0000000100029298
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x0000000100029154
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000285c8
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100027acc
- (_Bool)trustPassesExtendedValidation:(struct __SecTrust *)arg1;	// IMP=0x0000000100027900
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x00000001000277d8
- (void)invalidateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010002761c
- (void)resetStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000275bc
- (void)setTLSSessionCachePrefix:(id)arg1;	// IMP=0x0000000100027548
- (void)setDiscretionaryOverride:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100027128
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100026fc8
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100026e68
- (void)setExpectedProgressTarget:(unsigned long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100026d08
- (void)setBytesPerSecondLimit:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100026ad8
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x00000001000267d8
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100025fcc
- (void)setDescription:(id)arg1 forTask:(unsigned long long)arg2;	// IMP=0x0000000100025e4c
- (void)setPropertyOnStreamWithIdentifier:(unsigned long long)arg1 propDict:(id)arg2 propKey:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100025ba0
- (void)resumeTaskWithIdentifier:(unsigned long long)arg1 withProperties:(id)arg2;	// IMP=0x0000000100025618
- (_Bool)shouldContinueDownloadBasedOnDiskSpace:(unsigned long long)arg1;	// IMP=0x000000010002532c
- (void)suspendTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100025144
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100024f40
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;	// IMP=0x0000000100024d40
- (void)avAggregateAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 serializedMediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 childDownloadSessionIdentifier:(id)arg6 identifier:(unsigned long long)arg7 uniqueIdentifier:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x0000000100024d30
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 options:(id)arg7 identifier:(unsigned long long)arg8 uniqueIdentifier:(id)arg9 reply:(CDUnknownBlockType)arg10;	// IMP=0x0000000100024d20
- (void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned long long)arg3 uniqueIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000001000249b4
- (void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 sandboxExtensionData:(id)arg4 identifier:(unsigned long long)arg5 uniqueIdentifier:(id)arg6 potentialCredentials:(id)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x0000000100024380
- (void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 downloadFilePath:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100023e10
- (void)downloadTaskWithResumeData:(id)arg1 identifier:(unsigned long long)arg2 uniqueIdentifier:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000239e4
- (void)performCommonSetupForTask:(id)arg1 taskInfo:(id)arg2 identifier:(unsigned long long)arg3 discretionaryStatus:(_Bool)arg4;	// IMP=0x00000001000235b8
- (void)setupDASPropertiesOnTask:(id)arg1 taskInfo:(id)arg2 discretionaryStatus:(_Bool)arg3;	// IMP=0x0000000100022ddc
- (void)wakeUpClient;	// IMP=0x0000000100022874
- (void)clientAcknowledgedTerminalCallbackForTask:(unsigned long long)arg1;	// IMP=0x0000000100022574
- (void)errorOccurredDuringAuthCallbackDelivery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000224c4
- (void)errorOccurredDuringFinishedCallbackDelivery:(id)arg1;	// IMP=0x0000000100022470
- (id)getClientProxy;	// IMP=0x0000000100022468
- (id)inputStreamWithFileHandle:(id)arg1 taskIdentifier:(unsigned long long)arg2;	// IMP=0x00000001000222d0
- (id)makeTempUploadFile:(id)arg1 withExtensionData:(id)arg2;	// IMP=0x0000000100021f38
- (void)requeueTask:(unsigned long long)arg1;	// IMP=0x0000000100021f28
- (void)requeueTask:(unsigned long long)arg1 skipResume:(_Bool)arg2;	// IMP=0x0000000100021ecc
- (void)removeOutstandingTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100021e60
- (void)addOutstandingTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100021df4
- (void)enqueueTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100021b08
- (void)taskShouldSuspend:(unsigned long long)arg1;	// IMP=0x0000000100021850
- (void)taskShouldResume:(unsigned long long)arg1;	// IMP=0x000000010002152c
- (void)handleWillBeginDelayedRequestForTaskWithIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100020ed4
- (void)handleEarliestBeginDateForTaskWithIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100020a28
- (void)cancelMonitorForTask:(unsigned long long)arg1;	// IMP=0x0000000100020924
- (_Bool)currentDiscretionaryStatus:(id)arg1 withOptionalTaskInfo:(id)arg2;	// IMP=0x00000001000200d0
- (long long)priorityForDiscretionaryStatus:(_Bool)arg1;	// IMP=0x00000001000200bc
- (id)getTLSSessionCachePrefix;	// IMP=0x0000000100020084
- (id)getTasksForReconnection;	// IMP=0x000000010001ff4c
- (void)triggerPowerlogPeriodicUpdate;	// IMP=0x000000010001fd8c
- (void)fillInPropertiesForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x000000010001fcb8
- (void)fillInByteCountsForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x000000010001fba4
- (void)allowReconnect;	// IMP=0x000000010001fb4c
- (void)reconnectClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f8ac
- (void)clientDidDisconnect;	// IMP=0x000000010001f7ec
- (void)cancelTasksRequiringClientConnectionAndResumeUnstartedTasks;	// IMP=0x000000010001f398
- (_Bool)finalizeTaskCompletionWithSuppressedWake:(_Bool)arg1;	// IMP=0x000000010001f30c
- (void)handleCompletionOfTask:(id)arg1 identifier:(unsigned long long)arg2 taskInfo:(id)arg3 isRecoverable:(_Bool)arg4 suppressWake:(_Bool)arg5;	// IMP=0x000000010001f1e0
- (_Bool)clientIsActive;	// IMP=0x000000010001f1d0
- (_Bool)sessionHasOutstandingTasks;	// IMP=0x000000010001f1a8
- (void)removeUploadFileForTaskInfo:(id)arg1;	// IMP=0x000000010001f134
- (void)removeDownloadFileForTaskInfo:(id)arg1;	// IMP=0x000000010001f07c
- (_Bool)retryTask:(id)arg1 originalError:(id)arg2 transactionMetrics:(id)arg3;	// IMP=0x000000010001e63c
- (id)clientErrorForError:(id)arg1;	// IMP=0x000000010001e3c4
- (id)restoreTasks:(_Bool *)arg1;	// IMP=0x000000010001e244
- (id)restoreTasksFromArchivedInfo:(id)arg1;	// IMP=0x000000010001e144
- (id)restoreTask:(id)arg1 isOutstanding:(_Bool *)arg2;	// IMP=0x000000010001dcd8
- (id)restoreCompletedTask:(id)arg1;	// IMP=0x000000010001d68c
- (id)restoreInProgressTask:(id)arg1;	// IMP=0x000000010001d000
- (id)createNewTaskFromInfo:(id)arg1;	// IMP=0x000000010001ca74
- (void)ensureSessionDownloadDirectoryExists;	// IMP=0x000000010001c8d0
- (void)configureTask:(id)arg1 withTaskInfo:(id)arg2;	// IMP=0x000000010001c630
- (void)configureAdditionalPropertiesOnTask:(id)arg1 taskInfo:(id)arg2;	// IMP=0x000000010001c408
- (id)sanitizeTaskProperties:(id)arg1;	// IMP=0x000000010001bb90
- (id)adjustDiscretionaryStatusForTaskInfo:(id)arg1;	// IMP=0x000000010001bb00
- (void)updateTaskInfoBasedOnCurrentDiscretionaryStatus:(id)arg1;	// IMP=0x000000010001b90c
- (id)requestWithAdjustedWindowForTaskInfo:(id)arg1;	// IMP=0x000000010001b5f0
- (id)descriptionForTCPConnectionWaitingReason:(long long)arg1;	// IMP=0x000000010001b4b8
- (id)descriptionForRequest:(id)arg1;	// IMP=0x000000010001b388
- (id)descriptionForTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x000000010001b298
- (void)archiveTaskInfo:(_Bool)arg1;	// IMP=0x000000010001b228
- (id)tasksArchivePath;	// IMP=0x000000010001b1b0
- (void)obliterate;	// IMP=0x000000010001af9c
- (void)cleanupSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ae70
- (id)setupDownloadDirectory;	// IMP=0x000000010001ac1c
- (void)clientApplicationWasReinstalled;	// IMP=0x000000010001a74c
- (void)backgroundUpdatesEnabledForApplication:(id)arg1;	// IMP=0x000000010001a6c8
- (void)applicationWasSuspended:(id)arg1;	// IMP=0x000000010001a644
- (_Bool)hasConnectedClient;	// IMP=0x000000010001a624
- (void)setXPCConnection:(id)arg1;	// IMP=0x000000010001a3b8
- (id)sessionForDiscretionaryStatus:(_Bool)arg1;	// IMP=0x000000010001a3a0
- (id)initWithConfiguration:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3 downloadDirectory:(id)arg4 options:(id)arg5 clientProxy:(id)arg6 delegate:(id)arg7 workQueue:(id)arg8 archiveQueue:(id)arg9;	// IMP=0x00000001000191d8
- (id)configurationWithClientConfiguration:(id)arg1 discretionary:(_Bool)arg2;	// IMP=0x00000001000182ac
- (double)defaultWindowDurationForResourceTimeout:(double)arg1;	// IMP=0x0000000100018294

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

