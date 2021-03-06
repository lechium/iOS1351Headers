//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "RPSubDaemonable-Protocol.h"

@class CUCoalescer, CURangingSession, CUSystemMonitor, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, SFDeviceDiscovery, SFService;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPPeopleDaemon : NSObject <NSXPCListenerDelegate, RPSubDaemonable>
{
    int _airdropModeNotifyToken;	// 8 = 0x8
    int _airdropMode;	// 12 = 0xc
    NSMutableArray *_bufferedCloudMessages;	// 16 = 0x10
    SFDeviceDiscovery *_deviceDiscovery;	// 24 = 0x18
    unsigned int _deviceDiscoveryID;	// 32 = 0x20
    NSMutableDictionary *_discoveredDevices;	// 40 = 0x28
    NSMutableSet *_discoveryClients;	// 48 = 0x30
    unsigned int _discoveryFlagsAggregate;	// 56 = 0x38
    _Bool _invalidateCalled;	// 60 = 0x3c
    _Bool _invalidateDone;	// 61 = 0x3d
    _Bool _prefPeopleStrangers;	// 62 = 0x3e
    int _prefTrackWhileAsleepState;	// 64 = 0x40
    NSString *_primaryAppleIDCached;	// 72 = 0x48
    CUSystemMonitor *_systemMonitor;	// 80 = 0x50
    NSMutableSet *_xpcConnections;	// 88 = 0x58
    NSXPCListener *_xpcListener;	// 96 = 0x60
    CUSystemMonitor *_familyMemberMonitor;	// 104 = 0x68
    NSMutableDictionary *_familyAccountIdentityMap;	// 112 = 0x70
    NSMutableDictionary *_familyDeviceIdentityMap;	// 120 = 0x78
    unsigned long long _familyFlags;	// 128 = 0x80
    int _familyNotifyToken;	// 136 = 0x88
    NSObject<OS_dispatch_source> *_familySyncCheckTimer;	// 144 = 0x90
    _Bool _prefPeopleDiscoveryFamily;	// 152 = 0x98
    NSMutableDictionary *_friendAccountIdentityMap;	// 160 = 0xa0
    NSMutableDictionary *_friendDeviceIdentityMap;	// 168 = 0xa8
    _Bool _friendPrivacyGetting;	// 176 = 0xb0
    NSArray *_friendsSuggestedArray;	// 184 = 0xb8
    _Bool _friendsSuggestedGetting;	// 192 = 0xc0
    _Bool _friendsSuggestedNeedsUpdate;	// 193 = 0xc1
    int _friendsSuggestedNotifyToken;	// 196 = 0xc4
    NSObject<OS_dispatch_source> *_friendsSuggestedPollTimer;	// 200 = 0xc8
    long long _prefFriendAccountPruneSeconds;	// 208 = 0xd0
    long long _prefFriendRefreshMaxSeconds;	// 216 = 0xd8
    long long _prefFriendRefreshMinSeconds;	// 224 = 0xe0
    long long _prefFriendRefreshSeconds;	// 232 = 0xe8
    int _prefFriendSuggestMax;	// 240 = 0xf0
    int _prefFriendSuggestPollSeconds;	// 244 = 0xf4
    long long _prefFriendSyncDelaySeconds;	// 248 = 0xf8
    _Bool _prefPeopleDiscoveryFriends;	// 256 = 0x100
    double _prefPrivacyCoalesceMinSecs;	// 264 = 0x108
    double _prefPrivacyCoalesceMaxSecs;	// 272 = 0x110
    CUCoalescer *_privacyChangedCoalescer;	// 280 = 0x118
    int _privacyChangedNotifyToken;	// 288 = 0x120
    double _pruneLastSeconds;	// 296 = 0x128
    SFService *_rangingBLEActionAdvertiser;	// 304 = 0x130
    NSObject<OS_dispatch_source> *_rangingBLEActionBurstTimer;	// 312 = 0x138
    NSMutableDictionary *_rangingBLEActionDevicesActive;	// 320 = 0x140
    NSMutableDictionary *_rangingBLEActionDevicesOther;	// 328 = 0x148
    SFDeviceDiscovery *_rangingBLEActionScanner;	// 336 = 0x150
    NSMutableSet *_rangingCapableDevices;	// 344 = 0x158
    CURangingSession *_rangingInitiator;	// 352 = 0x160
    CURangingSession *_rangingResponder;	// 360 = 0x168
    double _prefPTSBurstScanActionSecs;	// 368 = 0x170
    double _prefPTSBurstScanInfoSecs;	// 376 = 0x178
    _Bool _prefRanging;	// 384 = 0x180
    _Bool _ptsActive;	// 385 = 0x181
    NSObject<OS_dispatch_source> *_ptsBurstScanTimer;	// 392 = 0x188
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 400 = 0x190
}

+ (id)sharedPeopleDaemon;	// IMP=0x000000010003d00c
- (void).cxx_destruct;	// IMP=0x000000010004c644
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x000000010004c5bc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010004c300
- (unsigned int)_updateIdentityType:(int)arg1 idsDeviceID:(id)arg2 appleID:(id)arg3 contactID:(id)arg4 msg:(id)arg5;	// IMP=0x000000010004b908
- (_Bool)_sendCloudIdentityFrameType:(unsigned char)arg1 destinationID:(id)arg2 flags:(unsigned int)arg3 msgCtx:(id)arg4;	// IMP=0x000000010004b5c0
- (void)_processBufferedCloudMessages;	// IMP=0x000000010004b18c
- (void)_bufferCloudMessage:(id)arg1 frameType:(unsigned char)arg2 msgCtx:(id)arg3;	// IMP=0x000000010004aeac
- (void)_rangingUpdateForDevice:(id)arg1;	// IMP=0x000000010004abd0
- (void)_rangingRemoveDevice:(id)arg1;	// IMP=0x000000010004ab28
- (void)_rangingResponderUpdateForAirDropChange;	// IMP=0x000000010004a560
- (void)_rangingResponderEnsureStopped;	// IMP=0x000000010004a4c8
- (void)_rangingResponderEnsureStarted;	// IMP=0x000000010004a228
- (void)_rangingResponderUpdate;	// IMP=0x000000010004a1dc
- (void)_rangingInitiatorStatusChanged;	// IMP=0x000000010004a04c
- (void)_rangingInitiatorHandlePeer:(id)arg1 measurement:(id)arg2;	// IMP=0x0000000100049e74
- (void)_rangingInitiatorEnsureStopped;	// IMP=0x0000000100049dc0
- (void)_rangingInitiatorEnsureStarted;	// IMP=0x00000001000499f0
- (void)_rangingBLEActionScannerBurst;	// IMP=0x0000000100049738
- (void)_rangingBLEActionScannerDeviceLost:(id)arg1;	// IMP=0x0000000100049620
- (void)_rangingBLEActionScannerDeviceFound:(id)arg1;	// IMP=0x00000001000493f4
- (void)_rangingBLEActionScannerEnsureStopped;	// IMP=0x000000010004931c
- (void)_rangingBLEActionScannerEnsureStarted;	// IMP=0x0000000100048f5c
- (void)receivedFriendIdentityUpdate:(id)arg1 msgCtx:(id)arg2;	// IMP=0x00000001000489e0
- (void)receivedFriendIdentityResponse:(id)arg1 msgCtx:(id)arg2;	// IMP=0x0000000100048314
- (void)receivedFriendIdentityRequest:(id)arg1 msgCtx:(id)arg2;	// IMP=0x0000000100047d70
- (void)_updateFriendSyncing;	// IMP=0x0000000100047320
- (void)_updateFriendPrivacyResults:(id)arg1;	// IMP=0x0000000100046d9c
- (void)_updateFriendPrivacy;	// IMP=0x00000001000469c4
- (_Bool)_updateFriendDevices;	// IMP=0x0000000100046714
- (unsigned int)_updateFriendIdentityWithAppleID:(id)arg1 contactID:(id)arg2 sendersKnownAlias:(id)arg3 userAdded:(_Bool)arg4 updateDateRequested:(_Bool)arg5;	// IMP=0x00000001000460c8
- (_Bool)_updateFriendAccounts;	// IMP=0x0000000100045850
- (void)_updateFriendIdentities;	// IMP=0x0000000100045710
- (void)_resetFriends;	// IMP=0x0000000100045384
- (_Bool)_pruneFriendDevices;	// IMP=0x00000001000450bc
- (_Bool)_pruneFriendAccounts:(_Bool)arg1;	// IMP=0x0000000100044d28
- (_Bool)_pruneFriends:(_Bool)arg1;	// IMP=0x0000000100044b30
- (void)_friendsUpdateSuggestedIfNeeded;	// IMP=0x0000000100044428
- (void)_friendsEnsureStopped;	// IMP=0x0000000100044358
- (void)_friendsEnsureStarted;	// IMP=0x0000000100044154
- (void)_updateFamilyNotification;	// IMP=0x0000000100043f44
- (void)receivedFamilyIdentityUpdate:(id)arg1 msgCtx:(id)arg2;	// IMP=0x0000000100043c34
- (void)receivedFamilyIdentityResponse:(id)arg1 msgCtx:(id)arg2;	// IMP=0x00000001000438a0
- (void)receivedFamilyIdentityRequest:(id)arg1 msgCtx:(id)arg2;	// IMP=0x0000000100043544
- (void)_updateFamilySyncing;	// IMP=0x0000000100042cb0
- (_Bool)_updateFamilyDevices;	// IMP=0x0000000100042a00
- (_Bool)_updateFamilyIdentityWithFamilyMember:(id)arg1;	// IMP=0x00000001000425f0
- (_Bool)_updateFamilyAccounts;	// IMP=0x0000000100041f98
- (void)_updateFamilyIdentities;	// IMP=0x0000000100041e60
- (void)_familyEnsureStopped;	// IMP=0x0000000100041d50
- (void)_familyEnsureStarted;	// IMP=0x0000000100041aec
- (void)_daemonDevice:(id)arg1 updatedMeasurement:(id)arg2;	// IMP=0x00000001000418d8
- (void)_daemonDeviceChanged:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x0000000100041664
- (void)_daemonDeviceLost:(id)arg1;	// IMP=0x0000000100041450
- (void)_daemonDeviceFound:(id)arg1;	// IMP=0x0000000100041210
- (void)_discoveryEnsureStopped;	// IMP=0x00000001000410c8
- (void)_discoveryEnsureStarted;	// IMP=0x0000000100040440
- (void)_regenerateSelfIdentity:(id)arg1;	// IMP=0x0000000100040248
- (id)_primaryAppleID:(_Bool)arg1;	// IMP=0x0000000100040120
- (void)_update;	// IMP=0x000000010003ffe8
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x000000010003ffe0
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003ffd8
- (void)prefsChanged;	// IMP=0x000000010003f404
- (_Bool)addOrUpdateIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003ef28
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x000000010003e494
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x000000010003e2b0
- (void)_invalidated;	// IMP=0x000000010003e204
- (void)_invalidate;	// IMP=0x000000010003dfb0
- (void)invalidate;	// IMP=0x000000010003df48
- (void)_activate;	// IMP=0x000000010003dba0
- (void)activate;	// IMP=0x000000010003db38
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000010003d0f4
- (id)init;	// IMP=0x000000010003d078

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

