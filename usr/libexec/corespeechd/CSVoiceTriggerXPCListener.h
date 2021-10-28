//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSVoiceTriggerXPCConnectionDelegate-Protocol.h"

@class NSMapTable, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSVoiceTriggerXPCListener : NSObject <CSVoiceTriggerXPCConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_listener;	// 16 = 0x10
    NSMapTable *_connections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010002a8fc
@property(retain, nonatomic) NSMapTable *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)CSXPCConnectionReceivedClientError:(id)arg1 clientError:(id)arg2 client:(id)arg3;	// IMP=0x000000010002a758
- (void)_handleNewRemoteConnection:(id)arg1;	// IMP=0x000000010002a5d8
- (void)_handleListenerError:(id)arg1;	// IMP=0x000000010002a580
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x000000010002a460
- (void)listen;	// IMP=0x000000010002a2cc
- (id)init;	// IMP=0x000000010002a1dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
