//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoLeash/NFMIDSServiceDelegate.h>

#import "IDSServiceDelegate-Protocol.h"
#import "NFMCompanionFindMyController-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class AVQueuePlayer, IDSService, NSMutableDictionary, NSString, NSTimer, NSXPCListener;

@interface NFMRemoteFindLocally : NFMIDSServiceDelegate <IDSServiceDelegate, NSXPCListenerDelegate, NFMCompanionFindMyController>
{
    _Bool _flashEnabled;	// 8 = 0x8
    NSTimer *_flashScheduler;	// 16 = 0x10
    long long _flashCount;	// 24 = 0x18
    IDSService *_gizmoService;	// 32 = 0x20
    NSTimer *_alarm;	// 40 = 0x28
    AVQueuePlayer *_avQueuePlayer;	// 48 = 0x30
    NSXPCListener *_localListener;	// 56 = 0x38
    NSMutableDictionary *_localConnections;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100005950
@property(retain, nonatomic) NSMutableDictionary *localConnections; // @synthesize localConnections=_localConnections;
@property(retain, nonatomic) NSXPCListener *localListener; // @synthesize localListener=_localListener;
@property(retain, nonatomic) AVQueuePlayer *avQueuePlayer; // @synthesize avQueuePlayer=_avQueuePlayer;
@property(retain, nonatomic) NSTimer *alarm; // @synthesize alarm=_alarm;
@property(retain, nonatomic) IDSService *gizmoService; // @synthesize gizmoService=_gizmoService;
@property(nonatomic) _Bool flashEnabled; // @synthesize flashEnabled=_flashEnabled;
@property(nonatomic) long long flashCount; // @synthesize flashCount=_flashCount;
@property(retain, nonatomic) NSTimer *flashScheduler; // @synthesize flashScheduler=_flashScheduler;
- (void)playSoundAndFlashRemotely;	// IMP=0x0000000100005750
- (id)_playSoundAndFlashRemotely;	// IMP=0x000000010000567c
- (void)playSoundRemotely;	// IMP=0x0000000100005584
- (id)_playSoundRemotely;	// IMP=0x00000001000054b0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100004a60
- (void)didPlaySoundAndFlashLED:(id)arg1;	// IMP=0x000000010000496c
- (void)didPlaySound:(id)arg1;	// IMP=0x0000000100004878
- (id)connectionForResponse;	// IMP=0x0000000100004818
- (_Bool)_isInFaceTimeCall;	// IMP=0x00000001000047c0
- (_Bool)_isFaceTimeOrCameraFrontmost;	// IMP=0x0000000100004758
- (_Bool)_isDeviceLocked;	// IMP=0x0000000100004738
- (void)playSound:(id)arg1;	// IMP=0x0000000100004404
- (void)playSoundAndFlash:(id)arg1;	// IMP=0x00000001000040b4
- (_Bool)_playSoundAndFlash;	// IMP=0x0000000100003fec
- (void)cancelAllAlerts:(id)arg1;	// IMP=0x0000000100003f60
- (_Bool)_playFindLocallySound;	// IMP=0x0000000100003c14
- (void)playbackStateChanged:(id)arg1;	// IMP=0x00000001000039f4
- (void)flashLED;	// IMP=0x0000000100003804
- (void)flashLEDIfAppropriate;	// IMP=0x0000000100003740
- (void)updateFlashState;	// IMP=0x00000001000035fc
- (void)lazilyBeginObservingTUChangesIfNeeded;	// IMP=0x00000001000033c4
- (void)beginObservingTUChanges;	// IMP=0x00000001000032e4
- (id)init;	// IMP=0x000000010000302c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

