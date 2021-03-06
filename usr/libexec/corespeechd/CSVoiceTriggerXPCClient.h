//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSVoiceTriggerXPCClientDelegate, OS_xpc_object;

@interface CSVoiceTriggerXPCClient : NSObject
{
    id <CSVoiceTriggerXPCClientDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_xpc_object> *_xpcConnection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100112520
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <CSVoiceTriggerXPCClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001123a4
- (void)notifyVoiceTriggeredSiriSessionCancelled;	// IMP=0x0000000100112290
- (void)setPhraseSpotterBypassing:(_Bool)arg1 timeout:(double)arg2;	// IMP=0x0000000100112134
- (void)enableVoiceTrigger:(_Bool)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000100111fa4
- (void)_handleListenerDisconnectedError:(id)arg1;	// IMP=0x0000000100111f18
- (void)_handleListenerError:(id)arg1;	// IMP=0x0000000100111db0
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x0000000100111d00
- (void)dealloc;	// IMP=0x0000000100111c20
- (void)connect;	// IMP=0x0000000100111b10
- (id)init;	// IMP=0x0000000100111aa0

@end

