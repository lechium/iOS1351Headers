//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RequestQueue.h"

@class ISOperationQueue, NSMutableArray, NSObject, SubscriptionStatusOperation;
@protocol OS_dispatch_queue;

@interface NetworkRequestQueue : RequestQueue
{
    ISOperationQueue *_managedQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_subscriptionStatusOperationAccessQueue;	// 16 = 0x10
    SubscriptionStatusOperation *_currentSubsctionStatusOperation;	// 24 = 0x18
    NSMutableArray *_pendingSubscriptionStatusOperations;	// 32 = 0x20
}

+ (void)_addSubscriptionOperationWithType:(long long)arg1 message:(id)arg2 connection:(id)arg3;	// IMP=0x00000001000e711c
+ (void)wishlistAddItemsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e6a48
+ (void)updateMediaContentTasteWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e663c
+ (void)serverAuthenticateWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e6074
+ (void)authenticationRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e5c80
+ (void)silentEnrollmentVerificationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e5278
+ (void)silentEnrollmentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e48c8
+ (void)sdk_requestAPITokenWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e4324
+ (void)sdk_loadStoreFrontIdentifierWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e3ec8
+ (void)restoreDemotedApplicationsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e3a58
+ (void)requestURLWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e33d4
+ (void)repairAppWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e2b70
+ (void)rentalInformationRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e2648
+ (void)refreshSubscriptionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e25f4
+ (void)presentRemoteWebViewWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e22a4
+ (void)performMigrationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e1b4c
+ (void)lookupWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e1580
+ (void)lookupItemsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e0f0c
+ (void)loadURLBagWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e0a24
+ (void)keybagSyncWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e0674
+ (void)installManagedAppWithMessage:(id)arg1 connection:(id)arg2 provideDetailedResponse:(_Bool)arg3;	// IMP=0x00000001000dfd0c
+ (void)installManagedAppWithMessageAndDetailedResponse:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000dfcb8
+ (void)installManagedAppWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000dfc64
+ (void)getSubscriptionEntitlements:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000df7e4
+ (void)sdk_getCloudServiceCapabilities:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000df2c8
+ (void)importDownloadToIPodLibraryWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000deb78
+ (void)getDownloadQueueWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000de298
+ (void)getSubscriptionStatusWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000ddd0c
+ (void)getMatchStatusWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000dd924
+ (void)enableSubscriptionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000dd8d0
+ (void)disableSubscriptionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000dd87c
+ (void)disableAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000dd4c8
+ (void)claimAppsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000dcf7c
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00000001000dcbdc
+ (id)sharedNetworkRequestQueue;	// IMP=0x00000001000dcb40
- (void).cxx_destruct;	// IMP=0x00000001000e8e6c
- (void)_dequeueSubscriptionStatusOperation:(id)arg1;	// IMP=0x00000001000e8b5c
- (void)_enqueueSubscriptionStatusOperation:(id)arg1 forClient:(id)arg2;	// IMP=0x00000001000e89e4
- (void)_sendUnentitledReplyForMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e8934
- (void)_sendUnentitledMessageToClient:(id)arg1;	// IMP=0x00000001000e885c
- (void)_sendMessageWithError:(id)arg1 toClient:(id)arg2;	// IMP=0x00000001000e879c
- (id)_newClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000e86bc
- (id)_managedQueue;	// IMP=0x00000001000e8648
- (void)_enqueueOperationsForStoreServicesURL:(id)arg1;	// IMP=0x00000001000e78b0
- (id)_copyAuthenticationContextWithContext:(id)arg1 client:(id)arg2;	// IMP=0x00000001000e76e4
- (id)init;	// IMP=0x00000001000dca80

@end
