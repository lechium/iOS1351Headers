//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol MediaInfoDelegate;

@interface MediaInfo : NSObject
{
    unsigned int _currentPlaybackState;	// 8 = 0x8
    id <MediaInfoDelegate> _delegate;	// 16 = 0x10
    struct __CFArray *_currentSupportedCommands;	// 24 = 0x18
    NSString *_currentIdentifier;	// 32 = 0x20
    NSDictionary *_currentInfo;	// 40 = 0x28
    CDStruct_a94359dc _currentSettings;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100047d84
@property(nonatomic) CDStruct_a94359dc currentSettings; // @synthesize currentSettings=_currentSettings;
@property(retain, nonatomic) NSDictionary *currentInfo; // @synthesize currentInfo=_currentInfo;
@property(nonatomic) unsigned int currentPlaybackState; // @synthesize currentPlaybackState=_currentPlaybackState;
@property(retain, nonatomic) NSString *currentIdentifier; // @synthesize currentIdentifier=_currentIdentifier;
@property(nonatomic) struct __CFArray *currentSupportedCommands; // @synthesize currentSupportedCommands=_currentSupportedCommands;
@property(nonatomic) __weak id <MediaInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (double)preferredIntervalForCommand:(unsigned int)arg1;	// IMP=0x0000000100047bf8
- (float)defaultPlaybackRate;	// IMP=0x0000000100047b68
- (float)playbackRate;	// IMP=0x0000000100047ab0
- (void)avServerConnectionDiedNotification;	// IMP=0x0000000100047a7c
- (void)avEffectiveVolumeDidChangeNotification:(id)arg1;	// IMP=0x00000001000479f8
- (void)mrInfoDidChangeNotification;	// IMP=0x0000000100047984
- (void)mrPlaybackStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100047918
- (void)mrApplicationDidChangeNotification:(id)arg1;	// IMP=0x00000001000478ac
- (void)mrSupportedCommandsDidChangeNotification;	// IMP=0x0000000100047820
- (void)volumeDidChangeForCategory:(id)arg1;	// IMP=0x00000001000477bc
- (void)infoDidChange:(id)arg1;	// IMP=0x0000000100047778
- (void)playbackStateDidChange:(unsigned int)arg1;	// IMP=0x0000000100047734
- (void)applicationDidChange:(id)arg1;	// IMP=0x00000001000476e0
- (void)supportedCommandsDidChange:(struct __CFArray *)arg1;	// IMP=0x0000000100047644
- (void)unregisterForAVNotifications;	// IMP=0x0000000100047590
- (void)registerForAVNotifications;	// IMP=0x0000000100047458
- (void)dealloc;	// IMP=0x00000001000473a0
- (id)trackDuration;	// IMP=0x0000000100047340
- (id)trackTitle;	// IMP=0x00000001000472e0
- (id)trackAlbum;	// IMP=0x0000000100047280
- (id)trackArtist;	// IMP=0x0000000100047220
- (id)queueRepeatMode;	// IMP=0x00000001000471d0
- (id)queueShuffleMode;	// IMP=0x000000010004717c
- (id)queueCount;	// IMP=0x000000010004711c
- (id)queueIndex;	// IMP=0x00000001000470bc
- (float)playerPlaybackRate;	// IMP=0x00000001000470b0
- (id)playerElapsedTime;	// IMP=0x0000000100046f1c
- (id)playerVolume;	// IMP=0x0000000100046e88
- (id)playerPlaybackState;	// IMP=0x0000000100046dbc
- (id)playerName;	// IMP=0x0000000100046cfc
- (id)playerBundleID;	// IMP=0x0000000100046cf0
- (id)supportedCommands;	// IMP=0x0000000100046a80
- (void)sendCommand:(unsigned char)arg1;	// IMP=0x0000000100046710
- (id)init;	// IMP=0x00000001000463d0

@end

