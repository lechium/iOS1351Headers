//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioPlayer, NSString, SCRCThread, VOTOutputAction;

@interface VOTSound : NSObject
{
    VOTOutputAction *_action;	// 8 = 0x8
    struct OpaqueAudioFileID *_audioFileID;	// 16 = 0x10
    struct OpaqueAudioComponentInstance *_audioUnit;	// 24 = 0x18
    unsigned int _soundID;	// 32 = 0x20
    id _delegate;	// 40 = 0x28
    id _owner;	// 48 = 0x30
    CDUnknownBlockType _completionBlock;	// 56 = 0x38
    double _volume;	// 64 = 0x40
    NSString *_soundPath;	// 72 = 0x48
    AVAudioPlayer *_player;	// 80 = 0x50
    struct os_unfair_lock_s _completionBlockLock;	// 88 = 0x58
    long long _soundChannels;	// 96 = 0x60
    _Bool _isPlaying;	// 104 = 0x68
    _Bool _isVolumeSound;	// 105 = 0x69
    SCRCThread *_soundThread;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000100012bc0
@property(nonatomic) _Bool isVolumeSound; // @synthesize isVolumeSound=_isVolumeSound;
@property(retain, nonatomic) SCRCThread *soundThread; // @synthesize soundThread=_soundThread;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x0000000100012b5c
- (void)playAvoidingSSS;	// IMP=0x0000000100012b4c
- (void)play;	// IMP=0x0000000100012b3c
- (void)playAvoidingSSS:(_Bool)arg1;	// IMP=0x00000001000127ec
- (void)_sendFinishPlayingNotificationsWithCompletionBlock:(CDUnknownBlockType)arg1 delegate:(id)arg2;	// IMP=0x000000010001271c
- (void)_finishedPlaying;	// IMP=0x0000000100012598
- (id)action;	// IMP=0x0000000100012590
- (void)setAction:(id)arg1;	// IMP=0x0000000100012584
- (id)owner;	// IMP=0x000000010001257c
- (void)setOwner:(id)arg1;	// IMP=0x0000000100012570
- (id)delegate;	// IMP=0x0000000100012568
- (void)setDelegate:(id)arg1;	// IMP=0x000000010001255c
- (void)dealloc;	// IMP=0x0000000100012454
- (void)setVolume:(float)arg1;	// IMP=0x000000010001243c
- (id)soundPath;	// IMP=0x0000000100012434
- (void)_updateAudioSessionProperties;	// IMP=0x00000001000123dc
- (void)__updateAudioSessionProperties;	// IMP=0x0000000100012190
- (void)_updatePlayerWithAudioFile:(_Bool)arg1;	// IMP=0x0000000100011f44
- (_Bool)shouldUseAVAudioPlayer;	// IMP=0x0000000100011eb4
- (void)resetSoundForLostMediaSession;	// IMP=0x0000000100011dec
- (id)initWithSoundPath:(id)arg1 thread:(id)arg2;	// IMP=0x00000001000119b0

@end
