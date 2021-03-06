//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "TVRDClientProcessConnectionDelegate-Protocol.h"
#import "_TVRXDeviceDelegate-Protocol.h"
#import "_TVRXDeviceQueryDelegate-Protocol.h"
#import "_TVRXKeyboardControllerDelegate-Protocol.h"

@class NSCountedSet, NSDate, NSMutableDictionary, NSMutableSet, NSString, _TVRXDevice, _TVRXDeviceLocator, _TVRXDeviceQuery;

@interface TVRDServer : NSObject <TVRDClientProcessConnectionDelegate, _TVRXDeviceDelegate, _TVRXKeyboardControllerDelegate, _TVRXDeviceQueryDelegate, NSXPCListenerDelegate>
{
    NSMutableSet *_clientConnections;	// 8 = 0x8
    NSCountedSet *_deviceIdentifiers;	// 16 = 0x10
    NSMutableSet *_cachedDevices;	// 24 = 0x18
    NSMutableDictionary *_authChallengesByID;	// 32 = 0x20
    NSMutableSet *_deviceQueryObservers;	// 40 = 0x28
    NSMutableSet *_identifiersRequestingConnection;	// 48 = 0x30
    _TVRXDeviceLocator *_deviceSearch;	// 56 = 0x38
    _TVRXDeviceQuery *_generalDeviceQuery;	// 64 = 0x40
    NSDate *_lastConnectionTimestamp;	// 72 = 0x48
    _TVRXDevice *_lastConnectedDevice;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100009210
@property(nonatomic) __weak _TVRXDevice *lastConnectedDevice; // @synthesize lastConnectedDevice=_lastConnectedDevice;
@property(retain, nonatomic) NSDate *lastConnectionTimestamp; // @synthesize lastConnectionTimestamp=_lastConnectionTimestamp;
@property(retain, nonatomic) _TVRXDeviceQuery *generalDeviceQuery; // @synthesize generalDeviceQuery=_generalDeviceQuery;
@property(retain, nonatomic) _TVRXDeviceLocator *deviceSearch; // @synthesize deviceSearch=_deviceSearch;
@property(retain, nonatomic) NSMutableSet *identifiersRequestingConnection; // @synthesize identifiersRequestingConnection=_identifiersRequestingConnection;
@property(retain, nonatomic) NSMutableSet *deviceQueryObservers; // @synthesize deviceQueryObservers=_deviceQueryObservers;
@property(retain, nonatomic) NSMutableDictionary *authChallengesByID; // @synthesize authChallengesByID=_authChallengesByID;
@property(retain, nonatomic) NSMutableSet *cachedDevices; // @synthesize cachedDevices=_cachedDevices;
@property(retain, nonatomic) NSCountedSet *deviceIdentifiers; // @synthesize deviceIdentifiers=_deviceIdentifiers;
@property(retain, nonatomic) NSMutableSet *clientConnections; // @synthesize clientConnections=_clientConnections;
- (void)deviceQueryDidUpdateDevices:(id)arg1;	// IMP=0x0000000100008d10
- (void)_stopGeneralDeviceQuery;	// IMP=0x0000000100008c70
- (void)_startGeneralDeviceQuery;	// IMP=0x0000000100008bb8
- (id)_cachedDeviceForIdentifier:(id)arg1;	// IMP=0x0000000100008a64
- (void)_connectToDeviceIfNeeded:(id)arg1;	// IMP=0x00000001000088ec
- (_Bool)_isButtonOfNowPlayingType:(id)arg1;	// IMP=0x00000001000088c0
- (_Bool)_hasNowPlayingControlsForButtons:(id)arg1;	// IMP=0x000000010000878c
- (id)_deviceForKeyboardController:(id)arg1;	// IMP=0x0000000100008628
- (id)_interestedClientProcessConnectionsForDevice:(id)arg1;	// IMP=0x0000000100008360
- (void)_lostInterestInDeviceWithIdentifier:(id)arg1;	// IMP=0x00000001000081a8
- (id)_deviceForIdentifierInDeviceQuery:(id)arg1;	// IMP=0x0000000100008044
- (void)_informClientCouldNotLocateDeviceWithIdentifier:(id)arg1;	// IMP=0x0000000100007f6c
- (void)_becameInterestedInDeviceWithIdentifier:(id)arg1;	// IMP=0x0000000100007ab4
- (void)keyboardController:(id)arg1 didUpdateAttributes:(id)arg2;	// IMP=0x0000000100007888
- (void)keyboardController:(id)arg1 didUpdateText:(id)arg2;	// IMP=0x000000010000765c
- (void)keyboardControllerEndedTextEditing:(id)arg1;	// IMP=0x000000010000744c
- (void)keyboardController:(id)arg1 beganTextEditingWithAttributes:(id)arg2;	// IMP=0x00000001000071c4
- (void)device:(id)arg1 updatedSupportedButtons:(id)arg2;	// IMP=0x0000000100006fc4
- (void)deviceNameChanged:(id)arg1;	// IMP=0x0000000100006dc4
- (void)device:(id)arg1 disconnectedForReason:(long long)arg2 error:(id)arg3;	// IMP=0x000000010000699c
- (void)deviceConnected:(id)arg1;	// IMP=0x00000001000065fc
- (void)device:(id)arg1 encounteredAuthenticationChallenge:(id)arg2;	// IMP=0x00000001000061f0
- (_Bool)deviceShouldAllowConnectionAuthentication:(id)arg1;	// IMP=0x00000001000061e8
- (void)deviceBeganConnecting:(id)arg1;	// IMP=0x0000000100005f90
- (void)clientConnection:(id)arg1 requestsSendingEvent:(id)arg2 toDeviceWithIdentifier:(id)arg3 options:(id)arg4 response:(CDUnknownBlockType)arg5;	// IMP=0x0000000100005d7c
- (void)clientConnectionSeveredConnection:(id)arg1;	// IMP=0x0000000100005d6c
- (void)clientConnectionRequestsEndingDeviceQuery:(id)arg1;	// IMP=0x0000000100005c00
- (void)clientConnectionRequestsStartingDeviceQuery:(id)arg1;	// IMP=0x00000001000059f8
- (void)clientConnection:(id)arg1 requestsStoppingVoiceRecordingForDeviceWithIdentifier:(id)arg2;	// IMP=0x0000000100005904
- (void)clientConnection:(id)arg1 requestsStartingVoiceRecordingForDeviceWithIdentifier:(id)arg2;	// IMP=0x0000000100005810
- (void)clientConnection:(id)arg1 requestsSettingVoiceRecorderAutomaticRecording:(_Bool)arg2 forDeviceWithIdentifier:(id)arg3;	// IMP=0x0000000100005704
- (void)clientConnection:(id)arg1 requestsSendingInputDataPayload:(id)arg2 toDeviceIdentifier:(id)arg3;	// IMP=0x00000001000055c8
- (void)clientConnection:(id)arg1 requestsSendingInputReturnKeyToDeviceIdentifier:(id)arg2;	// IMP=0x00000001000054d4
- (void)clientConnection:(id)arg1 requestsSendingInputText:(id)arg2 toDeviceIdentifier:(id)arg3;	// IMP=0x0000000100005398
- (void)clientConnection:(id)arg1 requestsSendingTouchEvent:(id)arg2 toDeviceIdentifier:(id)arg3;	// IMP=0x0000000100005284
- (void)clientConnection:(id)arg1 requestsSendingGameControllerEvent:(id)arg2 toDeviceIdentifier:(id)arg3;	// IMP=0x0000000100005170
- (void)clientConnection:(id)arg1 requestsSendingButtonEvent:(id)arg2 toDeviceIdentifier:(id)arg3;	// IMP=0x0000000100004f90
- (void)clientConnection:(id)arg1 cancelledAuthChallengeForDeviceIdentifier:(id)arg2;	// IMP=0x0000000100004d28
- (void)clientConnection:(id)arg1 receivedAuthChallengeLocallyEnteredCode:(id)arg2 forDeviceIdentifier:(id)arg3;	// IMP=0x0000000100004a84
- (void)clientConnection:(id)arg1 removedInterestedDeviceIdentifier:(id)arg2;	// IMP=0x0000000100004850
- (void)clientConnection:(id)arg1 reiteratedInterestInDeviceIdentifier:(id)arg2;	// IMP=0x0000000100004650
- (void)clientConnection:(id)arg1 addedInterestedDeviceIdentifier:(id)arg2;	// IMP=0x00000001000044d4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100004310
- (id)init;	// IMP=0x00000001000041dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

