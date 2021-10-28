//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_NSDNXPCObject-Protocol.h"

@class NSMutableArray, NSString, _NSDNXPCConnection;
@protocol OS_xpc_object;

@interface ClientOfLocalNoteServer : NSObject <_NSDNXPCObject>
{
    _NSDNXPCConnection *_client;	// 8 = 0x8
    void *_registrar;	// 16 = 0x10
    NSObject<OS_xpc_object> *_queue;	// 24 = 0x18
    _Bool _suspended;	// 32 = 0x20
    NSMutableArray *_invalidHandlers;	// 40 = 0x28
    int _started;	// 48 = 0x30
    int _invalid;	// 52 = 0x34
    long long _sandboxReference;	// 56 = 0x38
    struct _opaque_pthread_mutex_t _lock;	// 64 = 0x40
    int _pid;	// 128 = 0x80
    char *_processName;	// 136 = 0x88
}

- (void)handlePost:(id)arg1;	// IMP=0x000000010000348c
- (void)postNotification:(struct __CFString *)arg1 object:(struct __CFString *)arg2 token:(unsigned long long)arg3 options:(unsigned long long)arg4 immediate:(unsigned char)arg5 userInfo:(id)arg6;	// IMP=0x00000001000030d8
- (void)enqueuePost:(id)arg1;	// IMP=0x0000000100003080
- (void)flushQueue;	// IMP=0x0000000100002f88
- (void)start;	// IMP=0x0000000100002f08
- (void)addInvalidationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100002ea4
- (void)invalidate;	// IMP=0x0000000100002d08
- (void)dealloc;	// IMP=0x0000000100002c7c
- (id)initWithClientConnection:(id)arg1 configuration:(struct distnoted_configuration *)arg2;	// IMP=0x0000000100001c10
- (_Bool)isLoginWindow;	// IMP=0x0000000100001c08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
