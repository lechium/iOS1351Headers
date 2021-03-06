/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKXPCServiceDelegate.h>
#import <libobjc.A.dylib/PKPassLibraryExportedInterface.h>

@protocol NSObject, OS_dispatch_queue, PKPassLibraryDelegate;
@class PKXPCService, NSHashTable, NSObject, NSArray, NSString;

@interface PKPassLibrary : NSObject <PKXPCServiceDelegate, PKPassLibraryExportedInterface> {

	PKXPCService* _remoteService;
	PKPassLibrary* _remoteLibrary;
	id<NSObject> _remoteLibraryObserver;
	unsigned long long _interfaceType;
	NSHashTable* _delegates;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _asynchronousImageQueue;
	BOOL _secureElementPassActivationAvailable;
	id<PKPassLibraryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPassLibraryDelegate> delegate;                                                              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isSecureElementPassActivationAvailable,nonatomic,readonly) BOOL secureElementPassActivationAvailable;              //@synthesize secureElementPassActivationAvailable=_secureElementPassActivationAvailable - In the implementation block
@property (nonatomic,copy,readonly) NSArray * remoteSecureElementPasses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)contactlessInterfaceCanBePresentedFromSource:(long long)arg1 ;
+(BOOL)isPassLibraryAvailable;
+(BOOL)isSecureElementPassActivationAvailable;
+(id)sharedInstanceWithRemoteLibrary;
+(BOOL)isPaymentPassActivationAvailable;
+(unsigned long long)requestAutomaticPassPresentationSuppressionWithResponseHandler:(/*^block*/id)arg1 ;
+(void)endAutomaticPassPresentationSuppressionWithRequestToken:(unsigned long long)arg1 ;
+(BOOL)isSuppressingAutomaticPassPresentation;
+(BOOL)contactlessInterfaceCanBePresentedFromSource:(long long)arg1 deviceUILocked:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(id<PKPassLibraryDelegate>)delegate;
-(void)setDelegate:(id<PKPassLibraryDelegate>)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(id)delegates;
-(void)openPaymentSetupForMerchantIdentifier:(id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentSetupFeaturesForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)passesOfType:(unsigned long long)arg1 ;
-(id)paymentPassesWithLocallyStoredValue;
-(id)_remoteObjectProxy;
-(void)hasInAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(id)backupMetadata;
-(BOOL)hasPassesOfType:(unsigned long long)arg1 ;
-(BOOL)canAddPassOfType:(unsigned long long)arg1 ;
-(void)addPasses:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)passWithUniqueID:(id)arg1 ;
-(void)removePassWithUniqueID:(id)arg1 diagnosticReason:(id)arg2 ;
-(void)supportedTransitPartnersForDigitalIssuance:(/*^block*/id)arg1 ;
-(void)checkForTransitNotification;
-(void)postUpgradedPassNotificationForMarket:(id)arg1 passUniqueID:(id)arg2 ;
-(void)presentSubcredentialProvisioningInterfaceForEndpoint:(id)arg1 withConfiguration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 issuerCountryCodes:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)hasInAppPrivateLabelPaymentPassesForWebDomain:(id)arg1 issuerCountryCodes:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)canPresentPaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPassesWithUniqueIdentifiers:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)updateSettings:(unsigned long long)arg1 forObjectWithUniqueID:(id)arg2 ;
-(void)rescheduleCommutePlanRenewalReminderForPassWithUniqueID:(id)arg1 ;
-(void)noteObjectSharedWithUniqueID:(id)arg1 ;
-(void)notifyPassUsedWithIdentifier:(id)arg1 fromSource:(long long)arg2 ;
-(void)removeAllScheduledActivities;
-(void)nukeDatabaseAndExit;
-(void)introduceDatabaseIntegrityProblem;
-(void)forceImmediateRevocationCheck;
-(void)shuffleGroups:(int)arg1 ;
-(void)issueWalletUserNotificationWithTitle:(id)arg1 message:(id)arg2 forPassUniqueIdentifier:(id)arg3 customActionRoute:(id)arg4 ;
-(void)pendingUserNotificationsWithCompletion:(/*^block*/id)arg1 ;
-(void)sendUserEditedCatalog:(id)arg1 ;
-(void)logDelayExitReasons;
-(void)recomputeRelevantPassesWithSearchMode:(long long)arg1 ;
-(void)fetchHasCandidatePasses:(/*^block*/id)arg1 ;
-(void)fetchCurrentRelevantPassInfo:(/*^block*/id)arg1 ;
-(void)spotlightReindexAllPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)spotlightReindexPassesWithUniqueIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)spotlightDeleteIndexEntriesForAllPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)presentPaymentSetupRequest:(id)arg1 orientation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentPassWithAssociatedAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)catalogChanged:(id)arg1 withNewPasses:(id)arg2 ;
-(void)passAdded:(id)arg1 ;
-(void)passUpdated:(id)arg1 ;
-(void)passRemoved:(id)arg1 ;
-(void)contactlessInterfaceDidPresentFromSource:(long long)arg1 ;
-(void)contactlessInterfaceDidDismissFromSource:(long long)arg1 ;
-(unsigned long long)countPassesOfType:(unsigned long long)arg1 ;
-(id)peerPaymentPassUniqueID;
-(BOOL)isSecureElementPassActivationAvailable;
-(BOOL)isPaymentPassActivationAvailable;
-(id)_initWithRemote:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg1 resumeNotificationName:(id)arg2 interfaceType:(unsigned long long)arg3 ;
-(BOOL)_hasInterfaceOfType:(unsigned long long)arg1 ;
-(id)_passesWithRetries:(unsigned long long)arg1 ;
-(id)_passesOfType:(unsigned long long)arg1 withRetries:(unsigned long long)arg2 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_applyDataAccessorToObject:(id)arg1 ;
-(id)_extendedRemoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(NSArray *)remoteSecureElementPasses;
-(BOOL)_hasRemoteLibrary;
-(BOOL)canAddSecureElementPassWithPrimaryAccountIdentifier:(id)arg1 ;
-(BOOL)canAddFelicaPass;
-(id)_synchronousExtendedRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_synchronousInAppRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_applyDataAccessorToObjects:(id)arg1 ;
-(id)_filterPeerPaymentPass:(id)arg1 request:(id)arg2 ;
-(id)_inAppRemoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(void)getPassesAndCatalog:(BOOL)arg1 synchronously:(BOOL)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 synchronously:(BOOL)arg2 limitResults:(BOOL)arg3 withRetries:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(void)openPaymentSetup;
-(void)presentSecureElementPass:(id)arg1 ;
-(void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_activateSecureElementPass:(id)arg1 withActivationCode:(id)arg2 activationData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)activateSecureElementPass:(id)arg1 withActivationData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removePassesWithUniqueIDs:(id)arg1 diagnosticReason:(id)arg2 ;
-(id)_extendedRemoteObjectProxy;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)canAddSecureElementPassWithConfiguration:(id)arg1 ;
-(void)_fetchContentForUniqueID:(id)arg1 usingSynchronousProxy:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_fetchImageSetContainerForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 usingSynchronousProxy:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)_extendedRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 usingSynchronousProxy:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(BOOL)_setSetting:(unsigned long long)arg1 enabled:(BOOL)arg2 forPass:(id)arg3 ;
-(id)inAppPaymentPassesForPaymentRequest:(id)arg1 ;
-(id)defaultPaymentPassesWithRemotePasses:(BOOL)arg1 ;
-(id)_sortedPaymentPassesForPaymentRequest:(id)arg1 ;
-(long long)_currentNotificationCountForIdentifier:(id)arg1 ;
-(void)_postLibraryChangeWithUserInfo:(id)arg1 ;
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2 ;
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2 ;
-(id)_inAppRemoteObjectProxy;
-(id)_inAppRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)passes;
-(id)passWithFPANIdentifier:(id)arg1 ;
-(id)passWithDPANIdentifier:(id)arg1 ;
-(void)getMetadataForFieldWithProperties:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)remotePaymentPasses;
-(unsigned long long)countOfPasses;
-(BOOL)canAddPaymentPassWithPrimaryAccountIdentifier:(id)arg1 ;
-(BOOL)isRemovingPassesOfType:(unsigned long long)arg1 ;
-(BOOL)isPassbookVisible;
-(id)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 issuerCountryCodes:(id)arg2 ;
-(id)inAppPrivateLabelPaymentPassesForWebDomain:(id)arg1 issuerCountryCodes:(id)arg2 ;
-(void)enabledValueAddedServicePassesWithCompletion:(/*^block*/id)arg1 ;
-(void)getRouteRelevantPassesFromLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)getPassesAndCatalog:(BOOL)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 synchronously:(BOOL)arg2 withHandler:(/*^block*/id)arg3 ;
-(BOOL)containsPass:(id)arg1 ;
-(BOOL)replacePassWithPass:(id)arg1 ;
-(id)archiveForObjectWithUniqueID:(id)arg1 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 objectUniqueIdentifier:(id)arg3 ;
-(id)dataForBundleResources:(id)arg1 objectUniqueIdentifier:(id)arg2 ;
-(void)addPassesWithData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)openDigitalIssuanceSetupForIdentifier:(id)arg1 ;
-(void)presentPaymentPass:(id)arg1 ;
-(void)presentWalletWithRelevantPassUniqueID:(id)arg1 ;
-(BOOL)hasPassesWithSupportedNetworks:(id)arg1 merchantCapabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 webDomain:(id)arg4 ;
-(void)presentContactlessInterfaceForDefaultPassFromSource:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)activatePaymentPass:(id)arg1 withActivationData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestUpdateOfObjectWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestPersonalizationOfPassWithUniqueIdentifier:(id)arg1 contact:(id)arg2 personalizationToken:(id)arg3 requiredPersonalizationFields:(unsigned long long)arg4 personalizationSource:(unsigned long long)arg5 handler:(/*^block*/id)arg6 ;
-(void)removePass:(id)arg1 ;
-(void)removePasses:(id)arg1 ;
-(void)signData:(id)arg1 withSecureElementPass:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)canProvisionAccessPassWithConfiguration:(id)arg1 ;
-(id)contentForUniqueID:(id)arg1 ;
-(void)fetchContentForUniqueID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)imageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 ;
-(void)fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(BOOL)setShowInLockScreenEnabled:(BOOL)arg1 forPass:(id)arg2 ;
-(BOOL)setAutomaticUpdatesEnabled:(BOOL)arg1 forPass:(id)arg2 ;
-(BOOL)setNotificationServiceUpdatesEnabled:(BOOL)arg1 forPass:(id)arg2 ;
-(BOOL)setAutomaticPresentationEnabled:(BOOL)arg1 forPass:(id)arg2 ;
-(BOOL)setSuppressNotificationsEnabled:(BOOL)arg1 forPass:(id)arg2 ;
-(BOOL)setSuppressPromotionsEnabled:(BOOL)arg1 forPass:(id)arg2 ;
-(BOOL)resetSettingsForPass:(id)arg1 ;
-(id)expressFelicaTransitPasses;
-(void)sortedTransitPassesForAppletDataFormat:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_defaultPaymentPassForPaymentRequest:(id)arg1 ;
-(BOOL)supportsDisbursements;
-(void)setBackupMetadata:(id)arg1 ;
-(void)transitMessageForRouteInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transitMessageDidDisplay:(id)arg1 ;
-(id)_remoteLibrary;
-(BOOL)migrateData;
-(void)removePassesOfType:(unsigned long long)arg1 withDiagnosticReason:(id)arg2 ;
-(void)removePassesOfType:(unsigned long long)arg1 withDiagnosticReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)estimatedTimeToResetApplePay;
-(BOOL)resetApplePayWithDiagnosticReason:(id)arg1 ;
-(void)noteAccountChanged;
-(void)noteAccountDeleted;
-(id)diffForPassUpdateUserNotificationWithIdentifier:(id)arg1 ;
-(id)passesPendingActivation;
@end

