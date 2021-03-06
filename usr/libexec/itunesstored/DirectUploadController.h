//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DirectUploadSessionDelegate-Protocol.h"
#import "MediaSocialAuthenticationDelegate-Protocol.h"
#import "MediaSocialErrorDelegate-Protocol.h"
#import "MediaSocialStatusPollingDelegate-Protocol.h"

@class DirectUploadSessionController, ISOperationQueue, MediaSocialAuthenticationCoordinator, MediaSocialErrorCoordinator, MediaSocialStatusPollingCoordinator, NSMutableArray, NSMutableDictionary, NSString, SSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface DirectUploadController : NSObject <DirectUploadSessionDelegate, MediaSocialAuthenticationDelegate, MediaSocialErrorDelegate, MediaSocialStatusPollingDelegate>
{
    MediaSocialAuthenticationCoordinator *_authenticationCoordinator;	// 8 = 0x8
    id _backgroundTaskObserver;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    SSSQLiteDatabase *_database;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    MediaSocialErrorCoordinator *_errorCoordinator;	// 48 = 0x30
    MediaSocialStatusPollingCoordinator *_pollingCoordinator;	// 56 = 0x38
    ISOperationQueue *_postOperationQueue;	// 64 = 0x40
    NSMutableDictionary *_progressDictionary;	// 72 = 0x48
    DirectUploadSessionController *_sessionController;	// 80 = 0x50
}

+ (void)_setupDatabase:(id)arg1;	// IMP=0x00000001000601d8
+ (void)_sendAccessDeniedErrorWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005ffb8
+ (id)_orderedUploadQueryWithDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x000000010005feb4
+ (id)_orderedPostQueryWithDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x000000010005fdb0
+ (_Bool)_isConnectionEntitled:(id)arg1;	// IMP=0x000000010005fd4c
+ (id)_copyPersistentIdentifiersArrayWithXPCArray:(id)arg1;	// IMP=0x000000010005fc1c
+ (void)resumeUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005c904
+ (void)registerObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005c7b8
+ (void)pauseUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005c3ac
+ (void)observeXPCServer:(id)arg1;	// IMP=0x000000010005c2e4
+ (void)getUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005bf8c
+ (void)cancelUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005ba94
+ (id)sharedController;	// IMP=0x000000010005aaf4
- (void).cxx_destruct;	// IMP=0x000000010006585c
- (id)_sessionController;	// IMP=0x00000001000657f4
- (void)_sendRemoveUploadsMessageWithUploadIdentifiers:(id)arg1;	// IMP=0x000000010006564c
- (void)_sendChangeUploadsMessageWithUploads:(id)arg1;	// IMP=0x00000001000654a4
- (void)_retryFailedEntities;	// IMP=0x0000000100064d70
- (_Bool)_resumeUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 resetFailureCount:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000100064664
- (void)_registerObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000641a8
- (id)_postOperationQueue;	// IMP=0x0000000100064138
- (id)_pollingCoordinator;	// IMP=0x00000001000640d0
- (_Bool)_pauseUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100063b18
- (void)_operationDidFinishForPostIdentifier:(long long)arg1 response:(id)arg2;	// IMP=0x0000000100062c90
- (id)_newSSVDirectUploadWithProgress:(id)arg1 state:(long long)arg2;	// IMP=0x0000000100062bbc
- (id)_newAddUploadsMessageWithDatabase:(id)arg1 hydratedUploadIDs:(id)arg2;	// IMP=0x00000001000628c4
- (id)_errorCoordinator;	// IMP=0x000000010006285c
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100062664
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100062538
- (void)_finishPostWithPostIdentifier:(long long)arg1 response:(id)arg2;	// IMP=0x0000000100061f9c
- (void)_enumerateSSVDirectUploadsWithQuery:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100061de4
- (void)_enqueueNextReadyMediaSocialPostOperationWithDatabase:(id)arg1;	// IMP=0x0000000100061830
- (id)_databaseIfExists;	// IMP=0x0000000100061774
- (id)_database;	// IMP=0x000000010006161c
- (void)_cleanupPendingUploads:(id)arg1 database:(id)arg2;	// IMP=0x0000000100060ba8
- (void)_cleanupSessionController;	// IMP=0x0000000100060b40
- (_Bool)_cancelUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000010006030c
- (id)_authenticationCoordinator;	// IMP=0x00000001000602a4
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x000000010005f8c4
- (void)pollingCoordinator:(id)arg1 didPollWithResponses:(id)arg2;	// IMP=0x000000010005f49c
- (void)mediaSocialErrorCoordinator:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x000000010005e4e0
- (void)authenticationCoordinator:(id)arg1 didFinishAuthenticationWithResponse:(id)arg2;	// IMP=0x000000010005da70
- (void)uploadSessionController:(id)arg1 uploadProgressDidChange:(id)arg2;	// IMP=0x000000010005d83c
- (void)uploadSessionController:(id)arg1 uploadDidFinishWithDatabaseID:(long long)arg2 response:(id)arg3;	// IMP=0x000000010005d5b0
- (void)uploadSessionController:(id)arg1 uploadDidFailWithDatabaseID:(long long)arg2 error:(id)arg3;	// IMP=0x000000010005cf38
- (void)uploadSessionController:(id)arg1 uploadDidBeginTransferWithDatabaseID:(long long)arg2;	// IMP=0x000000010005cd20
- (void)uploadSessionController:(id)arg1 taskDidStopWithDatabaseID:(long long)arg2;	// IMP=0x000000010005cd14
- (void)start;	// IMP=0x000000010005b680
- (void)addMediaSocialPostWithDescription:(id)arg1 client:(id)arg2;	// IMP=0x000000010005ab90
- (void)dealloc;	// IMP=0x000000010005a9dc
- (id)init;	// IMP=0x000000010005a974

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

