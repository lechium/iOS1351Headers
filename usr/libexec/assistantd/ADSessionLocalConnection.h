//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CDMXPCClientDelegate-Protocol.h"

@class CDMXPCClient, NSString;
@protocol ADSessionLocalConnectionDelegate, OS_dispatch_queue;

@interface ADSessionLocalConnection : NSObject <CDMXPCClientDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CDMXPCClient *_cdmClient;	// 16 = 0x10
    id <ADSessionLocalConnectionDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100032d44
@property(nonatomic) __weak id <ADSessionLocalConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)smXPCClient:(id)arg1 aceUpdate:(id)arg2;	// IMP=0x0000000100032c20
- (void)smXPCClientDidDisconnect:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100032b5c
- (void)smXPCClientDidDisconnect:(id)arg1;	// IMP=0x0000000100032ac4
- (void)cancelWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100032a78
- (void)sendCommand:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032a0c
- (void)start;	// IMP=0x000000010003295c
- (void)dealloc;	// IMP=0x0000000100032928
- (id)initOnQueue:(id)arg1;	// IMP=0x0000000100032854

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
