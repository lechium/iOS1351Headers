//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRExternalClientConnection.h>

#import "MREmulatedGameControllerDelegate-Protocol.h"

@class MRCoreUtilsPairingSessionPeer, MRPasscodeCredentials, MRPlaybackQueueClient, NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol MRDExternalDeviceServerClientConnectionDelegate, OS_dispatch_queue;

@interface MRDExternalDeviceServerClientConnection : MRExternalClientConnection <MREmulatedGameControllerDelegate>
{
    NSMutableArray *_virtualTouchDevices;	// 8 = 0x8
    NSMutableArray *_registeredVirtualVoiceInputDevices;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    NSMutableDictionary *_packedDeviceIDToDeviceIDMapping;	// 32 = 0x20
    short _deviceIDCounter;	// 40 = 0x28
    NSMutableDictionary *_gameControllers;	// 48 = 0x30
    short _gameControllerDeviceIDCounter;	// 56 = 0x38
    NSMutableArray *_lyricsEvents;	// 64 = 0x40
    struct _MRHIDButtonEvent _lastVolumeIncrementEvent;	// 72 = 0x48
    struct _MRHIDButtonEvent _lastVolumeDecrementEvent;	// 84 = 0x54
    NSMutableDictionary *_pendingPlaybackSessionMigrateEvents;	// 96 = 0x60
    MRPasscodeCredentials *_credentials;	// 104 = 0x68
    MRPlaybackQueueClient *_playbackQueueRequests;	// 112 = 0x70
    MRCoreUtilsPairingSessionPeer *_sessionPeer;	// 120 = 0x78
    id _pinPairingToken;	// 128 = 0x80
    id <MRDExternalDeviceServerClientConnectionDelegate> _serverDelegate;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000010002c0f4
@property(nonatomic) __weak id <MRDExternalDeviceServerClientConnectionDelegate> serverDelegate; // @synthesize serverDelegate=_serverDelegate;
@property(retain, nonatomic) id pinPairingToken; // @synthesize pinPairingToken=_pinPairingToken;
@property(readonly, nonatomic) MRCoreUtilsPairingSessionPeer *sessionPeer; // @synthesize sessionPeer=_sessionPeer;
@property(readonly, nonatomic) MRPlaybackQueueClient *playbackQueueRequests; // @synthesize playbackQueueRequests=_playbackQueueRequests;
@property(retain, nonatomic) MRPasscodeCredentials *credentials; // @synthesize credentials=_credentials;
- (void)gameController:(id)arg1 propertiesDidChange:(id)arg2;	// IMP=0x000000010002bdec
- (void)flushPendingPlaybackSessionMigrateEvents:(CDUnknownBlockType)arg1;	// IMP=0x000000010002bb48
- (_Bool)removePendingPlaybackSessionMigrateEvent:(id)arg1;	// IMP=0x000000010002b9b4
- (void)addPendingPlaybackSessionMigrateEvent:(id)arg1 playerPath:(id)arg2;	// IMP=0x000000010002b830
- (void)flushVolumeEvents:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b670
- (void)addVolumeEvent:(struct _MRHIDButtonEvent)arg1;	// IMP=0x000000010002b5a8
- (void)flushLyricsEvents:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b370
- (void)removeLyricsEvent:(id)arg1;	// IMP=0x000000010002b128
- (void)addLyricsEvent:(id)arg1;	// IMP=0x000000010002b084
- (unsigned long long)virtualTouchIDWithPackedID:(unsigned long long)arg1;	// IMP=0x000000010002aff4
- (void)unregisterAllVirtualVoiceInputDevices;	// IMP=0x000000010002adac
- (void)addRegisteredVirtualVoiceInputDevice:(unsigned int)arg1;	// IMP=0x000000010002aad8
- (void)removeAllVirtualTouchDevices;	// IMP=0x000000010002aa28
- (id)virtualTouchDeviceWithID:(unsigned long long)arg1;	// IMP=0x000000010002a7a0
- (unsigned long long)addVirtualTouchDevice:(id)arg1;	// IMP=0x000000010002a61c
- (void)removeGameController:(unsigned long long)arg1;	// IMP=0x000000010002a55c
- (id)gameControllerWithID:(unsigned long long)arg1;	// IMP=0x000000010002a404
- (unsigned long long)addGameController:(id)arg1;	// IMP=0x000000010002a244
@property(readonly, nonatomic) NSArray *registeredVirtualVoiceInputDevices;
@property(readonly, nonatomic) NSArray *virtualTouchDevices;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x0000000100029d34
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3;	// IMP=0x0000000100029b30

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
