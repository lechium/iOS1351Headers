//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDXPCAppleIDAuthInterface-Protocol.h"
#import "SDXPCClientInterface-Protocol.h"
#import "SDXPCCoordinatedAlertsInterface-Protocol.h"
#import "SDXPCDeviceDiscoveryInterface-Protocol.h"
#import "SDXPCDiagnosticsInterface-Protocol.h"
#import "SDXPCNFCTagReaderInterface-Protocol.h"
#import "SDXPCProximityClientInterface-Protocol.h"
#import "SDXPCRemoteAutoFillSessionInterface-Protocol.h"
#import "SDXPCRemoteInteractionSessionInterface-Protocol.h"
#import "SDXPCServiceInterface-Protocol.h"
#import "SDXPCSessionInterface-Protocol.h"
#import "SDXPCUserNotificationInterface-Protocol.h"

@class NSMutableSet, NSString, NSXPCConnection, SDXPCServer, SFCoordinatedAlertRequest, SFDeviceDiscovery, SFProximityClient, SFRemoteAutoFillSessionHelper, SFRemoteInteractionSession, SFService, SFSession, SFShareAudioSessionDaemon, SFUserAlert;

__attribute__((visibility("hidden")))
@interface SDXPCConnection : NSObject <SDXPCAppleIDAuthInterface, SDXPCClientInterface, SDXPCCoordinatedAlertsInterface, SDXPCDeviceDiscoveryInterface, SDXPCDiagnosticsInterface, SDXPCNFCTagReaderInterface, SDXPCProximityClientInterface, SDXPCRemoteAutoFillSessionInterface, SDXPCRemoteInteractionSessionInterface, SDXPCServiceInterface, SDXPCSessionInterface, SDXPCUserNotificationInterface>
{
    SFRemoteAutoFillSessionHelper *_afsHelper;	// 8 = 0x8
    NSMutableSet *_assertions;	// 16 = 0x10
    _Bool _bluetoothUserInteraction;	// 24 = 0x18
    SFCoordinatedAlertRequest *_caRequest;	// 32 = 0x20
    SFDeviceDiscovery *_ddRequest;	// 40 = 0x28
    _Bool _diagnosticBLEModeStarted;	// 48 = 0x30
    _Bool _entitledBluetoothUserInteraction;	// 49 = 0x31
    _Bool _entitledClient;	// 50 = 0x32
    _Bool _entitledCoordinatedAlerts;	// 51 = 0x33
    _Bool _entitledDeviceDiscovery;	// 52 = 0x34
    _Bool _entitledDiagnostics;	// 53 = 0x35
    _Bool _entitledProximityClient;	// 54 = 0x36
    _Bool _entitledRemoteInteractionSession;	// 55 = 0x37
    _Bool _entitledService;	// 56 = 0x38
    _Bool _entitledSession;	// 57 = 0x39
    SFUserAlert *_notification;	// 64 = 0x40
    NSString *_preventExitForLocaleReason;	// 72 = 0x48
    SFProximityClient *_proxClient;	// 80 = 0x50
    SFRemoteInteractionSession *_riSession;	// 88 = 0x58
    SFService *_service;	// 96 = 0x60
    SFSession *_session;	// 104 = 0x68
    SDXPCServer *_server;	// 112 = 0x70
    SFShareAudioSessionDaemon *_shareAudioSession;	// 120 = 0x78
    _Bool _unlockTestClientStarted;	// 128 = 0x80
    NSXPCConnection *_xpcCnx;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000010017700c
- (void)userNotificationPresent:(id)arg1;	// IMP=0x0000000100176f94
- (void)shareAudioUserConfirmed;	// IMP=0x0000000100176cc4
- (void)shareAudioSessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100176850
- (void)sessionSendResponse:(id)arg1;	// IMP=0x0000000100176728
- (void)sessionSendRequest:(id)arg1;	// IMP=0x0000000100176600
- (void)sessionSendFrameType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x0000000100176430
- (void)sessionSendEvent:(id)arg1;	// IMP=0x0000000100176308
- (void)sessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100175bd4
- (void)serviceSendResponse:(id)arg1;	// IMP=0x0000000100175abc
- (void)serviceSendRequest:(id)arg1;	// IMP=0x00000001001759a4
- (void)serviceSendFrameType:(unsigned char)arg1 data:(id)arg2 peer:(id)arg3;	// IMP=0x0000000100175808
- (void)serviceSendEvent:(id)arg1;	// IMP=0x00000001001756f0
- (void)servicePeerDisconnected:(id)arg1 error:(id)arg2;	// IMP=0x00000001001755bc
- (void)serviceUpdate:(id)arg1;	// IMP=0x0000000100175498
- (void)serviceActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100174a54
- (void)remoteInteractionSessionSendPayload:(id)arg1;	// IMP=0x0000000100174944
- (void)remoteInteractionSessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001743ec
- (void)proximityClientRequestScannerTimerReset;	// IMP=0x00000001001741d0
- (void)proximityClientUpdateContent:(id)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100173fb8
- (void)proximityClientProvideContent:(id)arg1 forDevice:(id)arg2 force:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100173d98
- (void)proximityClientDismissContentForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100173b9c
- (void)proximityClientUpdate:(id)arg1;	// IMP=0x0000000100173a34
- (void)proximityClientActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100173094
- (void)nfcTagReaderUIActivateWithEndpoint:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100172de4
- (void)diagnosticUnlockTestServer;	// IMP=0x0000000100172d04
- (void)diagnosticUnlockTestClientWithDevice:(id)arg1;	// IMP=0x0000000100172c18
- (void)diagnosticShow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100172324
- (void)diagnosticMockStop:(CDUnknownBlockType)arg1;	// IMP=0x000000010017227c
- (void)diagnosticMockStart:(CDUnknownBlockType)arg1;	// IMP=0x00000001001721d4
- (void)diagnosticMock:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100172064
- (void)diagnosticLogControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100171f24
- (void)diagnosticControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001711cc
- (void)diagnosticBLEModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100170fa8
- (void)bluetoothUserInteraction;	// IMP=0x0000000100170ed4
- (void)deviceDiscoveryFastScanCancel:(id)arg1;	// IMP=0x0000000100170e7c
- (void)deviceDiscoveryFastScanTrigger:(id)arg1;	// IMP=0x0000000100170e24
- (void)deviceDiscoveryUpdate:(id)arg1;	// IMP=0x00000001001709c8
- (void)deviceDiscoveryActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100170478
- (void)coordinatedAlertsRequestFinish;	// IMP=0x00000001001703c0
- (void)coordinatedAlertsRequestStart:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100170088
- (void)wifiPasswordSharingAvailabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010016fe1c
- (void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016fd58
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016fb80
- (void)testContinuityKeyboardBegin:(_Bool)arg1;	// IMP=0x000000010016fb28
- (void)statusInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010016fab0
- (void)showDevicePickerWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016f9c4
- (void)setupDevice:(id)arg1 homeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010016f8b4
- (void)setAudioRoutingScore:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016f790
- (void)retriggerProximitySetup:(CDUnknownBlockType)arg1;	// IMP=0x000000010016f5dc
- (void)retriggerProximityPairing:(CDUnknownBlockType)arg1;	// IMP=0x000000010016f428
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016f3b0
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010016f2b4
- (void)reenableProxCardType:(unsigned char)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016eedc
- (void)preventExitForLocaleReason:(id)arg1;	// IMP=0x000000010016ee04
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016ed8c
- (void)preheatXPCConnection;	// IMP=0x000000010016ed2c
- (void)openSetupURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016eb3c
- (void)_getPeopleSuggestions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016de7c
- (void)_getPeopleInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016d76c
- (void)getPeopleSuggestions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016d59c
- (void)getDeviceAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016cf58
- (void)findContact:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016c348
- (void)myAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010016c188
- (void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010016bd2c
- (void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010016ba90
- (void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010016b7f0
- (void)broadwayPresentCardWithCode:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010016b688
- (void)subCredentialPresentCardWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016b540
- (void)appleIDInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010016b1e8
- (void)accountForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016b004
- (void)activityStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010016ae4c
- (void)_invalidateAssertions;	// IMP=0x000000010016ab00
- (void)activateAssertionWithIdentifier:(id)arg1;	// IMP=0x000000010016a798
- (void)autoFillHelperUserNotificationDidDismiss:(id)arg1;	// IMP=0x000000010016a674
- (void)autoFillHelperUserNotificationDidActivate:(id)arg1;	// IMP=0x000000010016a550
- (void)autoFillHelperTryPIN:(id)arg1;	// IMP=0x000000010016a42c
- (void)autoFillHelperDidPickUsername:(id)arg1 password:(id)arg2 error:(id)arg3;	// IMP=0x000000010016a2c8
- (void)autoFillHelperActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100169e3c
- (int)_entitledService:(id)arg1 state:(_Bool *)arg2;	// IMP=0x0000000100169d10
- (int)_entitled:(id)arg1 state:(_Bool *)arg2 label:(id)arg3;	// IMP=0x0000000100169bb8
- (void)connectionInvalidated;	// IMP=0x0000000100169850
- (id)initWithServer:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x00000001001697ac

@end

