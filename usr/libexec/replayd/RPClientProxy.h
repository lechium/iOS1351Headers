//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPClientProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface RPClientProxy : NSObject <RPClientProtocol>
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001a4f4
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (oneway void)recordingTimerDidUpdate:(id)arg1;	// IMP=0x000000010001a3e0
- (oneway void)recordingDidPause;	// IMP=0x000000010001a2f8
- (oneway void)recordingShouldResume;	// IMP=0x000000010001a210
- (oneway void)recordingLockInterrupted:(id)arg1;	// IMP=0x000000010001a110
- (oneway void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2;	// IMP=0x0000000100019fb4
- (oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;	// IMP=0x0000000100019e50
- (oneway void)updateBroadcastURL:(id)arg1;	// IMP=0x0000000100019d50
- (oneway void)updateBroadcastServiceInfo:(id)arg1;	// IMP=0x0000000100019c50
- (oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;	// IMP=0x0000000100019b2c
- (oneway void)updateScreenRecordingStateWithCurrentState:(id)arg1;	// IMP=0x0000000100019a2c
- (void)dealloc;	// IMP=0x00000001000199a4
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100019930

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
