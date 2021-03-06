//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSString, NSXPCListener;

@interface CTCellularPlanServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *fXpcListener;	// 8 = 0x8
    NSMutableArray *fConnections;	// 16 = 0x10
    NSMutableArray *fConnectionsInPurchaseFlow;	// 24 = 0x18
    queue_9c98cea5 fQueue;	// 32 = 0x20
    shared_ptr_b36635fa fLogger;	// 40 = 0x28
    _Bool fIsDataPlanCapable;	// 56 = 0x38
    shared_ptr_0fd4464b fRegistry;	// 64 = 0x40
    struct shared_ptr<CellularPlanBootstrapAssertion> fBootstrapAssertion;	// 80 = 0x50
    struct weak_ptr<CellularPlanController> fCellularPlanControlleriPad;	// 96 = 0x60
    struct weak_ptr<CellularPlanControllerInterface> fCellularPlanControllerPhone;	// 112 = 0x70
    struct weak_ptr<CellularPlanControllerDebugInterface> fDebugCellularPlanController;	// 128 = 0x80
}

+ (void)setProfileId:(struct VinylProfileDetails *)arg1 fromIccid:(basic_string_90719d97)arg2;	// IMP=0x0000000100a99698
+ (id)sharedServerInstance;	// IMP=0x0000000100a9968c
+ (void)initializeServerWithRegistry:(const shared_ptr_0fd4464b *)arg1;	// IMP=0x0000000100a995c0
- (id).cxx_construct;	// IMP=0x0000000100aaaa94
- (void).cxx_destruct;	// IMP=0x0000000100aaaa28
- (void)logFn:(const char *)arg1 format:(id)arg2;	// IMP=0x0000000100aaa92c
- (void)dealloc;	// IMP=0x0000000100aaa8dc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100aaa64c
- (void)getPhoneAuthTokenWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100aaa3a8
- (void)getRemoteInfo:(CDUnknownBlockType)arg1;	// IMP=0x0000000100aaa14c
- (void)deleteAllRemoteProfiles;	// IMP=0x0000000100aa9efc
- (void)deleteRemoteProfile:(id)arg1;	// IMP=0x0000000100aa9c60
- (void)selectRemoteProfile:(id)arg1;	// IMP=0x0000000100aa99c4
- (void)setSkipEligibilityCheck:(_Bool)arg1;	// IMP=0x0000000100aa98a0
- (void)getSkipEligibilityCheck:(CDUnknownBlockType)arg1;	// IMP=0x0000000100aa97e4
- (void)setRoamingSignupOverride:(_Bool)arg1;	// IMP=0x0000000100aa96c0
- (void)getRoamingSignupOverrideWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100aa9604
- (void)setAutoPlanSelection:(_Bool)arg1;	// IMP=0x0000000100aa94e0
- (void)getAutoPlanSelectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100aa9420
- (void)fetchRemoteProfiles:(id)arg1;	// IMP=0x0000000100aa91f0
- (void)getShortLabelsForLabels:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100aa8c54
- (void)getSubscriptionContextUUIDforPlan:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100aa8a9c
- (void)getPredefinedLabels:(CDUnknownBlockType)arg1;	// IMP=0x0000000100aa8854
- (void)remoteUserDidProvideResponse:(_Bool)arg1 confirmationCode:(id)arg2 plan:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100aa85a0
- (void)eraseAllRemotePlansWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100aa8344
- (void)remotePlanLaunchInfoForEid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100aa8050
- (void)pendingReleaseRemotePlan;	// IMP=0x0000000100aa7ea8
- (void)didCancelRemotePlan;	// IMP=0x0000000100aa7d00
- (void)didPurchaseRemotePlanForEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSmdpFqdn:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100aa7968
- (void)didDeleteRemotePlanItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100aa7648
- (void)didSelectRemotePlanItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100aa7328
- (void)remotePlanItemsWithUpdateFetch:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100aa70b8
- (void)addNewRemotePlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 isPairing:(_Bool)arg5 withCSN:(id)arg6 withContext:(id)arg7 userConsent:(long long)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x0000000100aa6924
- (void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2 isPairing:(_Bool)arg3 withCSN:(id)arg4 withContext:(id)arg5 userConsent:(long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000100aa625c
- (void)addNewRemotePlan:(_Bool)arg1 withCSN:(id)arg2 withContext:(id)arg3 userConsent:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100aa5cbc
- (void)manageAccountForRemotePlan:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100aa599c
- (void)finishRemoteProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100aa5794
- (void)startRemoteProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100aa558c
- (void)shouldShowAddNewRemotePlanWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100aa4f84
- (void)isRemotePlanCapableWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100aa4d24
- (void)launchDataActivationNextWithUrl:(id)arg1;	// IMP=0x0000000100aa4c0c
- (void)expirePlan;	// IMP=0x0000000100aa4b40
- (void)launchSequoia;	// IMP=0x0000000100aa4a84
- (void)getDeviceInfo:(CDUnknownBlockType)arg1;	// IMP=0x0000000100aa431c
- (void)fetchNewProfilesWithNewPlanCompletion:(CDUnknownBlockType)arg1 andCompletion:(CDUnknownBlockType)arg2 additionalParameters:(id)arg3;	// IMP=0x0000000100aa3e44
- (void)signIdMapForSessionId:(id)arg1 locationRequired:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100aa3c14
- (void)setUserInPurchaseFlow:(_Bool)arg1 withConnection:(id)arg2;	// IMP=0x0000000100aa399c
- (void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(_Bool)arg2;	// IMP=0x0000000100aa374c
- (void)sendIMessageSelectionSlot:(vector_1bc948b8)arg1;	// IMP=0x0000000100aa3278
- (void)sendRemoteProvisioningDidBecomeAvailable;	// IMP=0x0000000100aa2fb0
- (void)sendCarrierInfoDidUpdateNotification;	// IMP=0x0000000100aa2ce8
- (void)sendPendingTransferPlanInfoDidUpdateNotification;	// IMP=0x0000000100aa2a20
- (void)sendLocalPlanInfoDidUpdateNotification:(unsigned char)arg1;	// IMP=0x0000000100aa2738
- (void)sendPlanInfoDidUpdateNotification;	// IMP=0x0000000100aa2470
- (void)manageAccountForPlan:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100aa2100
- (void)carrierHandoffToken:(CDUnknownBlockType)arg1;	// IMP=0x0000000100aa1d6c
- (void)didTransferPlanForCsn:(id)arg1 iccid:(id)arg2 profileServer:(id)arg3 state:(id)arg4;	// IMP=0x0000000100aa1a70
- (void)didPurchasePlanForCsn:(id)arg1 iccid:(id)arg2 profileServer:(id)arg3;	// IMP=0x0000000100aa17bc
- (void)planLaunchInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100aa155c
- (void)eraseAllPlansWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100aa11fc
- (void)didDeletePlanItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100aa0eb0
- (void)didSelectPlansForIMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100aa08c0
- (void)didSelectPlanForDefaultVoice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100aa045c
- (void)setLabelForPlan:(id)arg1 label:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100a9fccc
- (void)didSelectPlanForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a9f868
- (void)didSelectPlanItem:(id)arg1 enable:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100a9f31c
- (void)willDisplayPlanItems;	// IMP=0x0000000100a9f260
- (void)userDidProvideResponse:(long long)arg1 confirmationCode:(id)arg2 plan:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100a9ef08
- (void)carrierItemsShouldUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a9eba4
- (void)remapSimLabel:(id)arg1 to:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100a9e744
- (void)resolveSimLabel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a9e5d4
- (void)deletePlanPendingTransfer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a9e2bc
- (void)cancelPlanActivation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a9dfe0
- (void)activatePlanPendingTransfer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a9dcb0
- (void)getPlansPendingTransferWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a9daf8
- (void)danglingPlanItemsShouldUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a9d940
- (void)planItemsShouldUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a9d578
- (void)shouldShowPlanList:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a9d3c4
- (void)isAddButtonEnabled:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a9d210
- (void)resumePlanProvisioning:(_Bool)arg1 userConsent:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100a9ce0c
- (void)addNewPlanWithUserInWebsheetWithUserConsent:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a9ca1c
- (void)addNewAddonPlanDuringBuddy:(_Bool)arg1 userConsent:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100a9c5f8
- (void)addNewPlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 triggerType:(long long)arg5 userConsent:(long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000100a9bec0
- (void)addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2 triggerType:(long long)arg3 userConsent:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100a9b864
- (void)addNewPlanWithCarrierItem:(id)arg1 triggerType:(long long)arg2 userConsent:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100a9b1fc
- (void)addNewPlanWithFlowType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a9afa0
- (void)triggerAddNewDataPlan:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a9ab30
- (void)finishProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a9a93c
- (void)startProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a9a748
- (void)getSupportedFlowTypes:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a9a4fc
- (void)isNewDataPlanCapable:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a9a294
- (void)shouldShowPlanSetup:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a9a098
- (id)_getErrorFromCellularPlanError:(unsigned char)arg1;	// IMP=0x0000000100a99f20
- (id)initWithMachServiceName:(id)arg1 andQueue:(struct queue)arg2 andRegistry:(const shared_ptr_0fd4464b *)arg3;	// IMP=0x0000000100a99b48
- (void)setCellularPlanController:(shared_ptr_8273d931)arg1 andPhoneController:(shared_ptr_e1726ebd)arg2 andDebugController:(shared_ptr_698f7688)arg3;	// IMP=0x0000000100a99764
- (const shared_ptr_0fd4464b *)getRegistry;	// IMP=0x0000000100a9975c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

