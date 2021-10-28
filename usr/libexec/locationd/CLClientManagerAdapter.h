//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLClientManagerProtocol-Protocol.h"

@class NSString;

@interface CLClientManagerAdapter : CLNotifierServiceAdapter <CLClientManagerProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001002e04ac
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001002e0488
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100ccf74c
- (void)triggerPruneAndRotateLocationConsumptionScoreArchiveAndUpdateTheStateAccordingly;	// IMP=0x00000001002e6578
- (void)handleProvisionalIntermediationForService:(unsigned long long)arg1 forClientKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001002e64d4
- (void)checkWeakPersistentClientWithIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x00000001002e643c
- (id)syncgetArchivedAuthorizationDecisions;	// IMP=0x00000001002e6420
- (id)syncgetApplyArchivedAuthorizationDecisionsAndDie:(id)arg1 unlessTokenMatches:(id)arg2;	// IMP=0x00000001002e63ec
- (_Bool)syncgetIsMapsANonSystemLocationClient;	// IMP=0x00000001002e6360
- (_Bool)syncgetHasAuthorizedClients;	// IMP=0x00000001002e615c
- (int)syncgetRegistrationResultToAuthorizationStatus:(int)arg1;	// IMP=0x00000001002e5f8c
- (int)syncgetClientEffectiveRegistrationResultWithTransientAwareness:(CDUnknownBlockType)arg1;	// IMP=0x00000001002e5ebc
- (int)syncgetClientStaticRegistrationResult:(CDUnknownBlockType)arg1;	// IMP=0x00000001002e5dec
- (id)syncgetNonSystemLocationClientKey;	// IMP=0x00000001002e5c34
- (id)syncgetNonSystemLocationClientKeys;	// IMP=0x00000001002e5b34
- (id)syncgetLocationClientKeys;	// IMP=0x00000001002e5a34
- (id)syncgetCopyClients;	// IMP=0x00000001002e5954
- (void)setAllowableAuthorizationMask:(unsigned long long)arg1 forClientKey:(id)arg2;	// IMP=0x00000001002e541c
- (void)appsWithClientKeysAreInstalledOnAPairedDevice:(id)arg1;	// IMP=0x00000001002e5298
- (void)checkAppInstallationStatus;	// IMP=0x00000001002e527c
- (_Bool)syncgetSetLocationServicesEnabledStatically:(_Bool)arg1 withEventSource:(id)arg2;	// IMP=0x00000001002e51dc
- (void)setPurpose:(id)arg1 forClient:(CDUnknownBlockType)arg2;	// IMP=0x00000001002e4ffc
- (void)setClient:(CDUnknownBlockType)arg1;	// IMP=0x00000001002e4d50
- (void)resetClients;	// IMP=0x00000001002e4d34
- (void)setLastLocationSettingsEventSource:(id)arg1;	// IMP=0x00000001002e4ca8
- (void)setClientAuthorization:(CDUnknownBlockType)arg1 status:(int)arg2 correctiveCompensation:(int)arg3 entity:(id)arg4;	// IMP=0x00000001002e4ba4
- (void)setClientBackgroundIndicator:(CDUnknownBlockType)arg1 enabled:(_Bool)arg2 entity:(id)arg3;	// IMP=0x00000001002e48ec
- (void)performMigration;	// IMP=0x00000001002e1828
- (void)appLaunchedByAppLifecycleManager:(id)arg1;	// IMP=0x00000001002e1544
- (void)wakeUpLaunchdManagedClient:(id)arg1;	// IMP=0x00000001002e14a0
- (void)deliverAndReleaseNotification:(struct __CFUserNotification *)arg1 withFlags:(unsigned long long)arg2 callbackState:(struct CLCMNotificationStateRecord *)arg3;	// IMP=0x00000001002e1438
- (void)onCapabilityChange;	// IMP=0x00000001002e141c
- (void)markReceivingLocationInformation:(CDUnknownBlockType)arg1;	// IMP=0x00000001002e0f0c
- (void)reduceAccuracy:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001002e0e88
- (void)takeInUseAssertionForClientKey:(id)arg1 reason:(id)arg2 assertionLevel:(int)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x00000001002e0cc0
- (void)markClientEmergencyEnablementTransition:(_Bool)arg1 forBeneficiary:(id)arg2;	// IMP=0x00000001002e0c24
- (void)markClientEmergencyEnablementTransition:(_Bool)arg1;	// IMP=0x00000001002e0ba0
- (void)markClientTemporaryAuthorizationGranted:(_Bool)arg1 forClientKey:(id)arg2;	// IMP=0x00000001002e0b04
- (void)setClients:(id)arg1 significantLocationVisitTo:(_Bool)arg2;	// IMP=0x00000001002e0a94
- (void)setClients:(id)arg1 significantLocationChangeTo:(_Bool)arg2;	// IMP=0x00000001002e0a30
- (void)setClients:(id)arg1 regionOfType:(int)arg2 to:(_Bool)arg3;	// IMP=0x00000001002e09b8
- (void)setProvisionalAuthorization:(struct Name)arg1;	// IMP=0x00000001002e06d4
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001002e0698
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001002e0654
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001002e0620
- (struct CLClientManager *)adaptee;	// IMP=0x00000001002e05e4
- (void)endService;	// IMP=0x00000001002e05c0
- (void)beginService;	// IMP=0x00000001002e0568
- (id)init;	// IMP=0x00000001002e0524

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
