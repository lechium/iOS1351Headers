//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSessionState.h"

@interface NESMVPNSessionStateUpdating : NESMVPNSessionState
{
}

- (_Bool)handleClearConfiguration;	// IMP=0x000000010005df58
- (_Bool)handleSetConfiguration;	// IMP=0x000000010005de54
- (void)handlePlugin:(id)arg1 statusDidChangeToDisconnectingWithReason:(int)arg2;	// IMP=0x000000010005dd18
- (void)handlePlugin:(id)arg1 statusDidChangeToDisconnectedWithReason:(int)arg2;	// IMP=0x000000010005dba0
- (void)handleRestart;	// IMP=0x000000010005daa0
- (void)handleUpdateConfiguration;	// IMP=0x000000010005d9a0
- (_Bool)handleSleep;	// IMP=0x000000010005d89c
- (void)handleStop;	// IMP=0x000000010005d79c
- (void)handleTimeout;	// IMP=0x000000010005d728
- (void)handleEstablishIPC;	// IMP=0x000000010005d5f0
- (void)leave;	// IMP=0x000000010005d504
- (void)enterWithSession:(id)arg1;	// IMP=0x000000010005d458
- (id)init;	// IMP=0x000000010005d41c

@end
