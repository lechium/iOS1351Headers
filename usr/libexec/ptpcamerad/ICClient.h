//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface ICClient : NSObject
{
    struct os_unfair_lock_s _resourceLock;	// 8 = 0x8
    _Bool _openSession;	// 12 = 0xc
    _Bool _forwardPTPEvents;	// 13 = 0xd
    NSXPCConnection *_connection;	// 16 = 0x10
    NSMutableArray *_notifications;	// 24 = 0x18
    unsigned long long _objectHandle;	// 32 = 0x20
}

@property _Bool forwardPTPEvents; // @synthesize forwardPTPEvents=_forwardPTPEvents;
@property unsigned long long objectHandle; // @synthesize objectHandle=_objectHandle;
@property _Bool openSession; // @synthesize openSession=_openSession;
@property(readonly) NSMutableArray *notifications; // @synthesize notifications=_notifications;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)remNotifications:(id)arg1;	// IMP=0x0000000100009bec
- (void)addNotifications:(id)arg1;	// IMP=0x0000000100009ba0
- (_Bool)interestedInNotification:(id)arg1;	// IMP=0x0000000100009b48
- (void)dealloc;	// IMP=0x0000000100009ad8
- (void)unlock;	// IMP=0x0000000100009ad0
- (void)lock;	// IMP=0x0000000100009ac8
@property(readonly) int pid; // @dynamic pid;
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100009a10

@end

