//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRDNowPlayingPlayerClientPlaybackState, MRPlaybackQueueSubscriptionController, NSArray, NSData, NSDate, NSMutableDictionary, _MRContentItemProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRNowPlayingPlayerProtobuf, _MRPlaybackQueueProtobuf, _MRSetStateMessageProtobuf;
@protocol MRDNowPlayingPlayerClientDelegate, OS_dispatch_queue, OS_os_transaction;

@interface MRDNowPlayingPlayerClient : NSObject
{
    _MRNowPlayingPlayerPathProtobuf *_playerPath;	// 8 = 0x8
    NSArray *_supportedRemoteControlCommands;	// 16 = 0x10
    NSData *_supportedRemoteControlCommandsData;	// 24 = 0x18
    _MRPlaybackQueueProtobuf *_playbackQueue;	// 32 = 0x20
    unsigned long long _playbackQueueCapabilities;	// 40 = 0x28
    MRDNowPlayingPlayerClientPlaybackState *_playerPlaybackState;	// 48 = 0x30
    MRDNowPlayingPlayerClientPlaybackState *_inferredPlayerPlaybackState;	// 56 = 0x38
    NSMutableDictionary *_playbackStateHistory;	// 64 = 0x40
    NSMutableDictionary *_inFlightArtworkRequests;	// 72 = 0x48
    _Bool _scheduledSaveNowPlayingArtworkFileURL;	// 80 = 0x50
    NSObject<OS_os_transaction> *_hasNowPlayingDataTransaction;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_serialQueue;	// 96 = 0x60
    _Bool _pushStateIsPlaying;	// 104 = 0x68
    _Bool _pushStateHasNowPlayingData;	// 105 = 0x69
    NSDate *_lastPlayingDate;	// 112 = 0x70
    MRPlaybackQueueSubscriptionController *_subscriptionController;	// 120 = 0x78
    id <MRDNowPlayingPlayerClientDelegate> _delegate;	// 128 = 0x80
    MRDNowPlayingPlayerClientPlaybackState *_pushStatePlaybackState;	// 136 = 0x88
    _MRNowPlayingPlayerProtobuf *_pushStatePlayer;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000100018204
@property(nonatomic) _Bool pushStateHasNowPlayingData; // @synthesize pushStateHasNowPlayingData=_pushStateHasNowPlayingData;
@property(retain, nonatomic) _MRNowPlayingPlayerProtobuf *pushStatePlayer; // @synthesize pushStatePlayer=_pushStatePlayer;
@property(retain, nonatomic) MRDNowPlayingPlayerClientPlaybackState *pushStatePlaybackState; // @synthesize pushStatePlaybackState=_pushStatePlaybackState;
@property(nonatomic) _Bool pushStateIsPlaying; // @synthesize pushStateIsPlaying=_pushStateIsPlaying;
@property(nonatomic) __weak id <MRDNowPlayingPlayerClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(readonly, nonatomic) NSDate *lastPlayingDate; // @synthesize lastPlayingDate=_lastPlayingDate;
- (void)_registerCallbacksForPlayerPath:(id)arg1;	// IMP=0x0000000100017528
- (void)_onQueue_requestArtworkForContentItems:(id)arg1;	// IMP=0x0000000100016d4c
- (void)requestArtworkForContentItems:(id)arg1;	// IMP=0x00000001000166f4
- (void)_onQueue_popState;	// IMP=0x00000001000160fc
- (void)_onQueue_pushState;	// IMP=0x0000000100016030
- (void)_onQueue_playbackQueueContentItemsArtworkDidChange:(id)arg1;	// IMP=0x0000000100015fc8
- (void)_onQueue_playbackQueueContentItemsDidChange:(id)arg1;	// IMP=0x0000000100015f60
- (void)_onQueue_playbackQueueCapabilitiesDidChange:(unsigned long long)arg1;	// IMP=0x0000000100015f0c
- (void)_onQueue_playbackQueueDidChange:(id)arg1;	// IMP=0x0000000100015e90
- (void)_onQueue_supportedCommandsDidChange:(id)arg1;	// IMP=0x0000000100015e08
- (void)_onQueue_playbackStateDidChanged:(id)arg1;	// IMP=0x0000000100015cfc
- (void)_onQueue_isPlayingDidChange:(_Bool)arg1;	// IMP=0x0000000100015c78
- (void)_onQueue_saveNowPlayingItemArtworkURL;	// IMP=0x0000000100015754
- (void)saveNowPlayingArtworkFileURL;	// IMP=0x00000001000154ec
- (id)_sortSnapshots:(id)arg1;	// IMP=0x0000000100015488
@property(readonly, nonatomic) NSArray *snapshots;
- (id)snapshotForIsPlaying:(_Bool)arg1;	// IMP=0x00000001000152fc
- (id)snapshotsForIsPlaying:(_Bool)arg1;	// IMP=0x00000001000150e4
- (id)snapshotForPlaybackState:(unsigned int)arg1;	// IMP=0x0000000100014f9c
- (void)artworkUpdatedForContentItems:(id)arg1;	// IMP=0x0000000100014d48
- (void)_onQueue_updatePlaybackQueueWithItem:(id)arg1 notifyObservers:(_Bool)arg2;	// IMP=0x0000000100014cd8
- (void)_onQueue_updatePlaybackQueue:(id)arg1 notifyObservers:(_Bool)arg2;	// IMP=0x0000000100014958
- (void)updatePlaybackQueue:(id)arg1 notifyObservers:(_Bool)arg2;	// IMP=0x00000001000148b0
- (void)updatePlaybackQueue:(id)arg1;	// IMP=0x00000001000148a0
- (void)updatePlayer:(id)arg1;	// IMP=0x00000001000147c0
- (void)updateClient:(id)arg1;	// IMP=0x0000000100014704
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
- (id)_onQueue_lastPlayingDate;	// IMP=0x00000001000145c4
@property(readonly, nonatomic) double timeSincePlaying;
@property(readonly, nonatomic) _MRSetStateMessageProtobuf *nowPlayingState;
@property(readonly, nonatomic) _Bool hasNowPlayingData;
- (_Bool)_onQueue_isPlaying;	// IMP=0x0000000100014188
@property(readonly, nonatomic) _Bool isPlaying;
@property(nonatomic) unsigned long long playbackQueueCapabilities;
- (id)_onQueue_playbackState;	// IMP=0x0000000100013be4
@property(readonly, nonatomic) unsigned int playbackState;
- (void)updatePlaybackState:(unsigned int)arg1 date:(id)arg2;	// IMP=0x0000000100013810
@property(nonatomic) unsigned int inferredPlaybackState;
@property(readonly, nonatomic) _MRContentItemProtobuf *nowPlayingContentItem;
@property(copy, nonatomic) _MRPlaybackQueueProtobuf *playbackQueue;
@property(copy, nonatomic) NSData *supportedRemoteControlCommandsData;
- (id)_onQueue_supportedRemoteControlCommands;	// IMP=0x0000000100012ba0
@property(readonly, nonatomic) NSArray *supportedRemoteControlCommands;
@property(readonly, nonatomic) _MRNowPlayingPlayerProtobuf *player;
- (id)description;	// IMP=0x00000001000125cc
- (id)initWithPlayerPath:(id)arg1;	// IMP=0x0000000100012378

@end
