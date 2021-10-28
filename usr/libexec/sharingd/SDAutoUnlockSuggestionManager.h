//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAutoUnlockNotificationsObserver-Protocol.h"
#import "SDAutoUnlockTransportClient-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSUUID, SFAutoUnlockDevice, SFBLEScanner;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockSuggestionManager : NSObject <SDAutoUnlockTransportClient, SDAutoUnlockNotificationsObserver>
{
    _Bool _foundFirstPeer;	// 8 = 0x8
    NSString *_suggestedDeviceID;	// 16 = 0x10
    NSString *_setupRetryDeviceID;	// 24 = 0x18
    SFAutoUnlockDevice *_lastSuccessfulDevice;	// 32 = 0x20
    SFBLEScanner *_scanner;	// 40 = 0x28
    NSMutableArray *_foundPeers;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_scanTimer;	// 56 = 0x38
    NSArray *_currentBluetoothIDs;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_serviceTimer;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_deviceTimer;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_setupRetryDeviceTimer;	// 88 = 0x58
    NSMutableArray *_suggestedPeers;	// 96 = 0x60
    SFAutoUnlockDevice *_suggestedPeer;	// 104 = 0x68
    NSUUID *_suggestionManagerSessionID;	// 112 = 0x70
    SFAutoUnlockDevice *_setupRetryDevice;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_suggestionManagerQueue;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000001002004a4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *suggestionManagerQueue; // @synthesize suggestionManagerQueue=_suggestionManagerQueue;
@property(retain, nonatomic) SFAutoUnlockDevice *setupRetryDevice; // @synthesize setupRetryDevice=_setupRetryDevice;
@property(retain, nonatomic) NSUUID *suggestionManagerSessionID; // @synthesize suggestionManagerSessionID=_suggestionManagerSessionID;
@property(retain, nonatomic) SFAutoUnlockDevice *suggestedPeer; // @synthesize suggestedPeer=_suggestedPeer;
@property(retain, nonatomic) NSMutableArray *suggestedPeers; // @synthesize suggestedPeers=_suggestedPeers;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *setupRetryDeviceTimer; // @synthesize setupRetryDeviceTimer=_setupRetryDeviceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *deviceTimer; // @synthesize deviceTimer=_deviceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *serviceTimer; // @synthesize serviceTimer=_serviceTimer;
@property(retain, nonatomic) NSArray *currentBluetoothIDs; // @synthesize currentBluetoothIDs=_currentBluetoothIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *scanTimer; // @synthesize scanTimer=_scanTimer;
@property(retain, nonatomic) NSMutableArray *foundPeers; // @synthesize foundPeers=_foundPeers;
@property(retain, nonatomic) SFBLEScanner *scanner; // @synthesize scanner=_scanner;
@property(nonatomic) _Bool foundFirstPeer; // @synthesize foundFirstPeer=_foundFirstPeer;
@property(retain, nonatomic) SFAutoUnlockDevice *lastSuccessfulDevice; // @synthesize lastSuccessfulDevice=_lastSuccessfulDevice;
@property(copy, nonatomic) NSString *setupRetryDeviceID; // @synthesize setupRetryDeviceID=_setupRetryDeviceID;
@property(copy, nonatomic) NSString *suggestedDeviceID; // @synthesize suggestedDeviceID=_suggestedDeviceID;
- (void)_systemHasPoweredOn;	// IMP=0x0000000100200310
- (void)_systemWillSleep;	// IMP=0x00000001002002a8
- (_Bool)alwaysShowSetupRetry;	// IMP=0x0000000100200280
- (id)testDeviceID;	// IMP=0x0000000100200264
- (_Bool)ignoreBackOff;	// IMP=0x000000010020023c
- (_Bool)suggestionsEnabled;	// IMP=0x0000000100200214
- (void)setRetriedSetup;	// IMP=0x00000001002001c0
- (_Bool)retriedSetup;	// IMP=0x00000001002000c8
- (void)loadSuggestedPeers;	// IMP=0x00000001001ffff8
- (void)setFeatureSuggestedForDeviceID:(id)arg1;	// IMP=0x00000001001ffe44
- (_Bool)featureSuggestedForDeviceID:(id)arg1;	// IMP=0x00000001001ffdcc
- (void)updateDefaultsForDeviceID:(id)arg1;	// IMP=0x00000001001ffa3c
- (_Bool)canSuggestForDeviceID:(id)arg1;	// IMP=0x00000001001ff7dc
- (_Bool)shouldSendRequestsForDeviceID:(id)arg1;	// IMP=0x00000001001ff690
- (void)watchAvailableForUnlockWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ff680
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x00000001001ff308
- (void)sendStartAdvertisingToDeviceID:(id)arg1;	// IMP=0x00000001001ff12c
- (void)invalidateScanTimer;	// IMP=0x00000001001ff054
- (void)restartScanTimer:(unsigned long long)arg1;	// IMP=0x00000001001fee68
- (void)invalidateScanner;	// IMP=0x00000001001fed24
- (void)handleFoundPeer:(id)arg1;	// IMP=0x00000001001fe90c
- (void)startScanningForIDSDeviceIDs:(id)arg1;	// IMP=0x00000001001fe110
- (void)invalidateServiceTimer;	// IMP=0x00000001001fe038
- (void)restartServiceTimer:(unsigned long long)arg1;	// IMP=0x00000001001fde34
- (void)invalidateSuggestionService;	// IMP=0x00000001001fddd0
- (void)updateSuggestionService;	// IMP=0x00000001001fdd60
- (void)invalidateSuggestedDeviceTimer;	// IMP=0x00000001001fdc88
- (void)restartSuggestedDeviceTimer:(long long)arg1;	// IMP=0x00000001001fda60
- (void)postSuggestionNotification;	// IMP=0x00000001001fd8d4
- (void)postNotificationIfNeeded;	// IMP=0x00000001001fd6e0
- (void)invalidateSetupRetryDeviceTimer;	// IMP=0x00000001001fd608
- (void)restartSetupRetryDeviceTimer:(long long)arg1;	// IMP=0x00000001001fd3e0
- (void)setupRetryNotificationDismissed;	// IMP=0x00000001001fd2f4
- (void)setupRetryNotificationSetUpSelected;	// IMP=0x00000001001fd2f0
- (void)setupRetryIfNeeded;	// IMP=0x00000001001fd0b0
- (void)screenLockUnlocked:(id)arg1;	// IMP=0x00000001001fcfec
- (void)triggerDevicesIfNeeded;	// IMP=0x00000001001fcfe8
- (void)handleTestSuggestion;	// IMP=0x00000001001fcef0
- (void)addObservers;	// IMP=0x00000001001fce54
- (id)init;	// IMP=0x00000001001fcd38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
