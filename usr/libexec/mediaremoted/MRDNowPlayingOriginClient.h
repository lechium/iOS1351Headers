//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRDDeviceInfoDataSourceDelegate-Protocol.h"
#import "MRDNowPlayingDataSourceDelegate-Protocol.h"

@class MRDDeviceInfoDataSource, MRDMediaRemoteClient, MRDNowPlayingClient, MRDNowPlayingDataSource, MRMutableApplicationActivity, MSVPersistentTimer, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, _MRDeviceInfoMessageProtobuf, _MRNowPlayingPlayerPathProtobuf, _MROriginProtobuf;
@protocol MRDNowPlayingOriginClientDelegate, OS_dispatch_queue, OS_os_transaction;

@interface MRDNowPlayingOriginClient : NSObject <MRDNowPlayingDataSourceDelegate, MRDDeviceInfoDataSourceDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_nowPlayingClients;	// 16 = 0x10
    unsigned int _volumeControlCapabilities;	// 24 = 0x18
    float _volume;	// 28 = 0x1c
    MRDNowPlayingClient *_explicitNowPlayingClient;	// 32 = 0x20
    MRDNowPlayingClient *_activeNowPlayingClient;	// 40 = 0x28
    NSObject<OS_os_transaction> *_activeNowPlayingClientTransaction;	// 48 = 0x30
    NSMutableDictionary *_defaultSupportedCommandsData;	// 56 = 0x38
    MSVPersistentTimer *_playbackTimer;	// 64 = 0x40
    NSDate *_lastPlayingDate;	// 72 = 0x48
    _MROriginProtobuf *_origin;	// 80 = 0x50
    _MRNowPlayingPlayerPathProtobuf *_playerPath;	// 88 = 0x58
    _MRDeviceInfoMessageProtobuf *_deviceInfo;	// 96 = 0x60
    NSData *_deviceInfoData;	// 104 = 0x68
    MRMutableApplicationActivity *_activity;	// 112 = 0x70
    MRDMediaRemoteClient *_overrideClient;	// 120 = 0x78
    MRDNowPlayingDataSource *_nowPlayingDataSource;	// 128 = 0x80
    MRDDeviceInfoDataSource *_deviceInfoDataSource;	// 136 = 0x88
    NSDate *_registrationDate;	// 144 = 0x90
    id <MRDNowPlayingOriginClientDelegate> _delegate;	// 152 = 0x98
    MRDNowPlayingClient *_computedNowPlayingClient;	// 160 = 0xa0
    MRDNowPlayingClient *_inferredNowPlayingClient;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000001000410f8
@property(retain, nonatomic) MRDNowPlayingClient *inferredNowPlayingClient; // @synthesize inferredNowPlayingClient=_inferredNowPlayingClient;
@property(retain, nonatomic) MRDNowPlayingClient *computedNowPlayingClient; // @synthesize computedNowPlayingClient=_computedNowPlayingClient;
@property(nonatomic) __weak id <MRDNowPlayingOriginClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;
@property(retain, nonatomic) MRDDeviceInfoDataSource *deviceInfoDataSource; // @synthesize deviceInfoDataSource=_deviceInfoDataSource;
@property(retain, nonatomic) MRDNowPlayingDataSource *nowPlayingDataSource; // @synthesize nowPlayingDataSource=_nowPlayingDataSource;
@property(retain, nonatomic) MRDNowPlayingClient *explicitNowPlayingClient; // @synthesize explicitNowPlayingClient=_explicitNowPlayingClient;
@property(retain, nonatomic) MRDMediaRemoteClient *overrideClient; // @synthesize overrideClient=_overrideClient;
@property(retain, nonatomic) MRMutableApplicationActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSData *deviceInfoData; // @synthesize deviceInfoData=_deviceInfoData;
@property(retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) _MROriginProtobuf *origin; // @synthesize origin=_origin;
- (id)_playerPathForNowPlayingClient:(id)arg1;	// IMP=0x0000000100040fb0
- (unsigned int)_stateFromDataSource:(id)arg1;	// IMP=0x0000000100040f40
- (void)_registerCallbacks;	// IMP=0x0000000100040d30
- (void)_onQueue_maybeSavePlaybackStateForNotification:(id)arg1;	// IMP=0x0000000100040c00
- (void)_onQueue_maybeSetupPlaybackTimeoutTimerForNotification:(id)arg1;	// IMP=0x00000001000408c0
- (void)_reloadNowPlayingClientFromDataSource:(id)arg1;	// IMP=0x000000010004074c
- (id)_onQueue_addNowPlayingClient:(id)arg1;	// IMP=0x0000000100040534
- (void)_updateActivityStatus:(int)arg1;	// IMP=0x0000000100040480
- (void)_reevaluateState;	// IMP=0x000000010003ffec
- (id)_calculateComputedNowPlayingClient;	// IMP=0x000000010003fbfc
- (id)_calculateActiveNowPlayingClient;	// IMP=0x000000010003fa74
- (_Bool)_shouldHandleNotification:(id)arg1;	// IMP=0x000000010003f97c
- (void)_handleOriginIsPlayingDidChange:(id)arg1;	// IMP=0x000000010003f88c
- (void)_handlePlayerIsPlayingDidChange:(id)arg1;	// IMP=0x000000010003f740
- (void)_handleNowPlayingAppMaybeDidChange:(id)arg1;	// IMP=0x000000010003f670
- (void)deviceInfoDataSource:(id)arg1 deviceInfoDidChange:(id)arg2;	// IMP=0x000000010003f660
- (void)nowPlayingDataSourceNowPlayingApplicationPlaybackStateDidChange:(id)arg1;	// IMP=0x000000010003f330
- (void)nowPlayingDataSourceNowPlayingApplicationDidChange:(id)arg1;	// IMP=0x000000010003f324
- (void)clearDefaultSupportedCommandsData;	// IMP=0x000000010003f1f8
@property(readonly, nonatomic) NSDictionary *defaultSupportedCommands;
- (id)defaultSupportedCommandsForClient:(id)arg1;	// IMP=0x000000010003eefc
- (id)defaultSupportedCommandsDataForClient:(id)arg1;	// IMP=0x000000010003ed40
- (void)updateDefaultSupportedCommandsData:(id)arg1 forClient:(id)arg2;	// IMP=0x000000010003ebcc
- (void)removeNowPlayingClientForClient:(id)arg1;	// IMP=0x000000010003e7a8
- (id)existingNowPlayingClientForClient:(id)arg1;	// IMP=0x000000010003e488
- (id)existingNowPlayingClientForDisplayID:(id)arg1;	// IMP=0x000000010003e430
- (id)existingNowPlayingClientForPid:(int)arg1;	// IMP=0x000000010003e3d8
- (id)existingNowPlayingClientForPlayerPath:(id)arg1;	// IMP=0x000000010003e3a4
- (id)nowPlayingClientForPlayerPath:(id)arg1;	// IMP=0x000000010003e1e4
- (id)nowPlayingClientForClient:(id)arg1;	// IMP=0x000000010003e148
@property(readonly, nonatomic) double timeSincePlaying;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) _Bool isActivityActive;
@property(readonly, nonatomic) MRDNowPlayingClient *activeNowPlayingClient;
@property(readonly, nonatomic) NSArray *mostRecentPlayers;
@property(readonly, nonatomic) NSArray *nowPlayingClients;
- (void)flipVolumeControlCapabilityFlag:(unsigned int)arg1 enable:(_Bool)arg2;	// IMP=0x000000010003c550
@property(nonatomic) unsigned int volumeControlCapabilities;
@property(nonatomic) float volume;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *activePlayerPath;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithOrigin:(id)arg1;	// IMP=0x000000010003b0d8

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

