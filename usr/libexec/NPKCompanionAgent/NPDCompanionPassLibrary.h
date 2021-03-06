//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NPDPassLibrary.h"

#import "PDPassLibraryExportedInterface-Protocol.h"

@class NPDCompanionPaymentPassDatabase, NSString;
@protocol NPDCompanionPassLibraryDataSource;

@interface NPDCompanionPassLibrary : NPDPassLibrary <PDPassLibraryExportedInterface>
{
    NPDCompanionPaymentPassDatabase *_companionPaymentPassDatabase;	// 8 = 0x8
    id <NPDCompanionPassLibraryDataSource> _dataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100039338
@property(nonatomic) __weak id <NPDCompanionPassLibraryDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NPDCompanionPaymentPassDatabase *companionPaymentPassDatabase; // @synthesize companionPaymentPassDatabase=_companionPaymentPassDatabase;
- (void)_handleCompanionPassDatabaseNotification:(id)arg1;	// IMP=0x000000010003909c
- (id)_filteredAndConfiguredPassForPaymentPass:(id)arg1 deviceName:(id)arg2;	// IMP=0x0000000100038dc0
- (id)_deviceName;	// IMP=0x0000000100038d30
- (void)signData:(id)arg1 forPassUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038be8
- (void)setBackupMetadata:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038ae8
- (void)backupMetadataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000389e4
- (void)presentSubcredentialProvisioningInterfaceForEndpoint:(id)arg1 withConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000388e0
- (void)canAddSecureElementPassWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038778
- (void)supportsDisbursements:(CDUnknownBlockType)arg1;	// IMP=0x0000000100038634
- (void)postUpgradedPassNotificationForMarket:(id)arg1 passUniqueID:(id)arg2;	// IMP=0x0000000100038560
- (void)checkForTransitNotification;	// IMP=0x000000010003848c
- (void)transitMessageForRouteInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003838c
- (void)supportedTransitPartnersForDigitalIssuance:(CDUnknownBlockType)arg1;	// IMP=0x0000000100038318
- (void)sortedTransitPassesForAppletDataFormat:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038300
- (void)migrateDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000382f0
- (void)passWithFPANIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038010
- (void)passWithDPANIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100037c44
- (void)expressTransitPassWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100037ae8
- (void)defaultPaymentPassWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003798c
- (void)countPassesOfType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000377e4
- (void)canAddPassesOfType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000376e8
- (void)hasPassesOfType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003753c
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPassWithUniqueID:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000370f4
- (void)isPaymentPassActivationAvailableWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100037034
- (void)getArchivedObjectWithUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100036e64
- (void)getDataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 objectUniqueIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100036bf0
- (void)getImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000368d8
- (void)getContentForUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100036670
- (void)getPassWithUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000364bc
- (void)getPassWithPassTypeID:(id)arg1 serialNumber:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000360e0
- (void)getManifestHashAndSettingsForPassTypeID:(id)arg1 serialNumber:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100035eb0
- (void)canAddFelicaPassWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100035e10
- (void)peerPaymentPassUniqueIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100035df8
- (void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 limitResults:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100035d0c
- (void)getPassesOfType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100035be4
- (void)getPassesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000359b4
- (void)removePassesWithUniqueIDs:(id)arg1 diagnosticReason:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000359a0
- (void)removePassWithUniqueID:(id)arg1 diagnosticReason:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000357f0
- (void)addPassesWithData:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100035368
- (void)replacePassWithPassData:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100035074
- (void)serviceSuspended;	// IMP=0x0000000100034fe0
- (void)serviceResumed;	// IMP=0x0000000100034f4c
- (void)dealloc;	// IMP=0x0000000100034e20
- (id)initWithConnection:(id)arg1 companionPaymentPassDatabase:(id)arg2 dataSource:(id)arg3;	// IMP=0x0000000100034c08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

