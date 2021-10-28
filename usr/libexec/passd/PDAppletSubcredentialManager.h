//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDPaymentWebServiceCoordinatorDelegate-Protocol.h"
#import "PKFieldDetectorObserver-Protocol.h"

@class NSSet, NSString, PDAssertionManager, PDCardFileManager, PDDatabaseManager, PDPaymentWebServiceCoordinator, PDRemoteInterfacePresenter, PKDAManager, PKFieldDetector, PKSecureElement;
@protocol PDAppletSubcredentialManagerDelegate;

@interface PDAppletSubcredentialManager : NSObject <PKFieldDetectorObserver, PDPaymentWebServiceCoordinatorDelegate>
{
    PKDAManager *_daManager;	// 8 = 0x8
    id <PDAppletSubcredentialManagerDelegate> _delegate;	// 16 = 0x10
    PDDatabaseManager *_databaseManager;	// 24 = 0x18
    PDCardFileManager *_cardFileManager;	// 32 = 0x20
    PDAssertionManager *_assertionManager;	// 40 = 0x28
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 48 = 0x30
    PDPaymentWebServiceCoordinator *_webServiceCoordinator;	// 56 = 0x38
    PKSecureElement *_secureElement;	// 64 = 0x40
    PKFieldDetector *_fieldDetector;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000b4968
@property(retain, nonatomic) PKFieldDetector *fieldDetector; // @synthesize fieldDetector=_fieldDetector;
@property(retain, nonatomic) PKSecureElement *secureElement; // @synthesize secureElement=_secureElement;
@property(retain, nonatomic) PDPaymentWebServiceCoordinator *webServiceCoordinator; // @synthesize webServiceCoordinator=_webServiceCoordinator;
@property(retain, nonatomic) PDRemoteInterfacePresenter *remoteInterfacePresenter; // @synthesize remoteInterfacePresenter=_remoteInterfacePresenter;
@property(retain, nonatomic) PDAssertionManager *assertionManager; // @synthesize assertionManager=_assertionManager;
@property(retain, nonatomic) PDCardFileManager *cardFileManager; // @synthesize cardFileManager=_cardFileManager;
@property(retain, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(nonatomic) __weak id <PDAppletSubcredentialManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2;	// IMP=0x00000001000b4860
- (void)paymentWebServiceCoordinator:(id)arg1 didRegisterCredentialWithIdentifier:(id)arg2 response:(id)arg3 error:(id)arg4;	// IMP=0x00000001000b433c
- (void)didUpdateCredential:(id)arg1 onPassWithIdentifier:(id)arg2;	// IMP=0x00000001000b42b8
- (void)_removeBackgroundRegistrationRequestForCredentials:(id)arg1 withPaymentWebService:(id)arg2;	// IMP=0x00000001000b3f0c
- (void)_revokeCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b3c68
- (void)_trackCredential:(id)arg1 withRegistrationData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b39e8
- (void)createRegistrationRequestForCredentialWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b3300
- (void)updateFieldDetectionState;	// IMP=0x00000001000b30d4
- (void)signData:(id)arg1 auth:(id)arg2 bundleIdentifier:(id)arg3 nonce:(id)arg4 credential:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001000b3004
- (_Bool)handleSharingInvitationRequest:(id)arg1;	// IMP=0x00000001000b257c
- (void)removeSharingInvitationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b243c
- (_Bool)didReceiveSharingInvitationWithIdentifier:(id)arg1 fromOriginatorIDSHandle:(id)arg2 sharingSessionIdentifier:(id)arg3 metadata:(id)arg4;	// IMP=0x00000001000b2228
@property(readonly, nonatomic) NSSet *invitations;
- (void)trackSharedCredential:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b1cac
- (_Bool)addSubcredential:(id)arg1 fromSharingInvitationWithIdentifier:(id)arg2;	// IMP=0x00000001000b1b44
- (_Bool)createdSharedSubcredentialWithIdentifier:(id)arg1 fromSharingInvitationReceiptWithIdentifier:(id)arg2;	// IMP=0x00000001000b171c
- (_Bool)removeSharingInvitationReceiptWithIdentifiers:(id)arg1 onCredential:(id)arg2;	// IMP=0x00000001000b1270
- (_Bool)sharingInvitationReceiptWasInvalidated:(id)arg1 withCredentialIdentifier:(id)arg2 error:(id)arg3;	// IMP=0x00000001000b1084
- (_Bool)addSharingInvitationReceipts:(id)arg1 onCredentialWithIdentifier:(id)arg2;	// IMP=0x00000001000b0bdc
- (void)restoreSubcredentialsInDatabase:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b0684
- (void)passWillBeRemoved:(id)arg1;	// IMP=0x00000001000b0448
- (void)requestBackgroundRegistrationForCredentialWithIdentifier:(id)arg1;	// IMP=0x00000001000b0320
- (void)requestRegistrationForCredentialWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000af4b4
- (void)credentialsOnDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000af458
- (void)requestNativePairingWithSupportedTerminal:(id)arg1;	// IMP=0x00000001000af094
- (void)nativelyPairToTerminalWithFieldPropertiesIfPossible:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000aec88
- (_Bool)canAttemptNativePairingWithTerminal:(id)arg1;	// IMP=0x00000001000aeb64
- (void)initiateNativePairingIfPossibleFromTCIs:(id)arg1;	// IMP=0x00000001000ae9c8
- (void)supportedTerminalForTCIs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ae4e8
- (void)probeTerminalForPairingStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ae420
- (void)revokeSubcredentials:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ae08c
- (void)_ingestSharedCredentialsManifest:(id)arg1;	// IMP=0x00000001000ad604
- (void)decryptAsset:(id)arg1 onPass:(id)arg2;	// IMP=0x00000001000acef8
- (void)passAddedOrUpdated:(id)arg1;	// IMP=0x00000001000ac610
- (void)updateMetadataOnPassWithIdentifier:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ac450
- (id)sharedCredentialManifestForPass:(id)arg1;	// IMP=0x00000001000ac110
- (_Bool)deviceSupportsCredentials;	// IMP=0x00000001000abf80
- (void)canAddCarKeyPassWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000abd70
- (void)dealloc;	// IMP=0x00000001000abd08
- (id)initWithDatabaseManager:(id)arg1 cardFileManager:(id)arg2 paymentWebServiceCoordinator:(id)arg3 secureElement:(id)arg4 fieldDetector:(id)arg5 assertionManager:(id)arg6 remoteInterfacePresenter:(id)arg7 delegate:(id)arg8;	// IMP=0x00000001000abb2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
