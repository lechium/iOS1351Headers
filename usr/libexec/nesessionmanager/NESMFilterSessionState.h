//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NESMPowerManagerDelegate-Protocol.h"

@class NESMFilterSession;

@interface NESMFilterSessionState : NSObject <NESMPowerManagerDelegate>
{
    long long _type;	// 8 = 0x8
    NESMFilterSession *_session;	// 16 = 0x10
    long long _timeout;	// 24 = 0x18
}

+ (id)stateWithType:(long long)arg1;	// IMP=0x000000010004c358
- (void).cxx_destruct;	// IMP=0x000000010004d60c
@property long long timeout; // @synthesize timeout=_timeout;
@property(retain) NESMFilterSession *session; // @synthesize session=_session;
@property(readonly) long long type; // @synthesize type=_type;
- (void)handleUpdateConfiguration;	// IMP=0x000000010004d4e0
- (void)handleTimeout;	// IMP=0x000000010004d3a4
- (void)handleWakeup;	// IMP=0x000000010004d2a4
- (_Bool)canSleep;	// IMP=0x000000010004d29c
- (_Bool)handleSleep;	// IMP=0x000000010004d198
- (void)handlePluginDisposeComplete:(id)arg1;	// IMP=0x000000010004d07c
- (void)handlePlugin:(id)arg1 statusDidChangeToStoppingWithError:(long long)arg2;	// IMP=0x000000010004ced4
- (void)handlePluginStatusDidChangeToUpdating:(id)arg1;	// IMP=0x000000010004cd7c
- (void)handlePluginStatusDidChangeToRunning:(id)arg1;	// IMP=0x000000010004cc60
- (void)handlePluginStatusDidChangeToStarting:(id)arg1;	// IMP=0x000000010004cb44
- (void)handlePlugin:(id)arg1 statusDidChangeToIdleWithError:(long long)arg2;	// IMP=0x000000010004c99c
- (void)handleStop;	// IMP=0x000000010004c860
- (void)handleStartMessage:(id)arg1;	// IMP=0x000000010004c760
- (void)leave;	// IMP=0x000000010004c64c
- (void)enterWithSession:(id)arg1;	// IMP=0x000000010004c438
- (id)initWithType:(long long)arg1 andTimeout:(long long)arg2;	// IMP=0x000000010004c3d0

@end

