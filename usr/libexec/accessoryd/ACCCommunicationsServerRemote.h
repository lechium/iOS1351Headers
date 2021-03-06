//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCCommunicationsXPCServerProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface ACCCommunicationsServerRemote : NSObject <ACCCommunicationsXPCServerProtocol>
{
    NSXPCConnection *_XPCConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000db50
@property(readonly, nonatomic) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
- (void)listUpdate:(id)arg1 forType:(int)arg2 coalesced:(_Bool)arg3;	// IMP=0x000000010000d970
- (void)commStatusDidChange:(id)arg1;	// IMP=0x000000010000d7dc
- (void)callStateDidChange:(id)arg1;	// IMP=0x000000010000d648
- (void)initConnection:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d390
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x000000010000d304

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

