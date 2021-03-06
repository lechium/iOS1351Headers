//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSVoiceIdXPCListener : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_listener;	// 16 = 0x10
    NSMapTable *_connections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000d30b8
@property(retain, nonatomic) NSMapTable *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_handleNewRemoteConnection:(id)arg1;	// IMP=0x00000001000d2f10
- (void)_handleListenerError:(id)arg1;	// IMP=0x00000001000d2eb8
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x00000001000d2d98
- (void)listen;	// IMP=0x00000001000d2c04
- (id)init;	// IMP=0x00000001000d2b14

@end

