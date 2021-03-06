//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccessoryNowPlayingXPCServerProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface ACCNowPlayingServerRemote : NSObject <AccessoryNowPlayingXPCServerProtocol>
{
    NSXPCConnection *_XPCConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010003d744
@property(readonly, nonatomic) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
- (void)playbackQueueListInfoResponse:(id)arg1 requestID:(id)arg2 info:(id)arg3;	// IMP=0x000000010003d5d8
- (void)playbackQueueListChanged;	// IMP=0x000000010003d514
- (void)playbackAttributesHaveChanged:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003d3cc
- (void)mediaItemArtworkHasChanged:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003d274
- (void)mediaItemAttributesHaveChanged:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003d12c
- (void)initConnection:(CDUnknownBlockType)arg1;	// IMP=0x000000010003cea0
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x000000010003ce14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

