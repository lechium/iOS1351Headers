//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCAudioXPCServerProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface ACCAudioServerRemote : NSObject <ACCAudioXPCServerProtocol>
{
    NSXPCConnection *_XPCConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010002cc34
@property(readonly, nonatomic) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
- (void)allowBackgroundAudioForClient:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002ca34
- (void)deviceAudioStatesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010002c8f8
- (void)supportedDigitalAudioSampleRatesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010002c7bc
- (void)supportedDigitalAudioSampleRate:(unsigned int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002c67c
- (void)setDigitalAudioSampleRate:(unsigned int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002c53c
- (void)initConnectionToServer:(CDUnknownBlockType)arg1;	// IMP=0x000000010002c2e4
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x000000010002c258

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
