//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADAudioStateAnnouncing-Protocol.h"
#import "CSAudioSessionControllerDelegate-Protocol.h"

@class AFAudioState, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ADAudioStateManager : NSObject <CSAudioSessionControllerDelegate, ADAudioStateAnnouncing>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_listenerProxies;	// 16 = 0x10
    AFAudioState *_currentAudioState;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x00000001001461f0
- (void).cxx_destruct;	// IMP=0x0000000100147240
- (void)_didChangeAudioStateFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000100147034
- (void)_updateAudioSessionID:(unsigned int)arg1;	// IMP=0x0000000100146ee4
- (unsigned int)_fetchAudioSessionID;	// IMP=0x0000000100146df4
- (void)_removeListenerProxiesWithListener:(id)arg1;	// IMP=0x0000000100146c48
- (id)_currentAudioState;	// IMP=0x0000000100146c28
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;	// IMP=0x0000000100146acc
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;	// IMP=0x0000000100146998
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x000000010014683c
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x0000000100146708
- (void)removeAllListeners;	// IMP=0x000000010014669c
- (void)removeListener:(id)arg1;	// IMP=0x00000001001465c4
- (void)addListener:(id)arg1;	// IMP=0x00000001001464c0
- (void)updateAudioSessionID:(unsigned int)arg1;	// IMP=0x000000010014644c
- (void)getAudioStateWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014625c
- (id)init;	// IMP=0x00000001001460b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

