//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FSChangeMonitor, NSString, NSUUID;
@protocol FSChangeSubscriptionDelegate, OS_dispatch_semaphore;

@interface FSChangeSubscription : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 8 = 0x8
    NSUUID *_notifyStreamUUID;	// 16 = 0x10
    unsigned long long _notifyEventId;	// 24 = 0x18
    FSChangeMonitor *_reader;	// 32 = 0x20
    NSString *_purpose;	// 40 = 0x28
    _Bool _isActivated;	// 48 = 0x30
    _Bool _ignoreOwnEvents;	// 49 = 0x31
    int _rootfd;	// 52 = 0x34
    NSString *_root;	// 56 = 0x38
    unsigned long long _rootFileID;	// 64 = 0x40
    id <FSChangeSubscriptionDelegate> _delegate;	// 72 = 0x48
    unsigned long long _lastDeliveredEventID;	// 80 = 0x50
    NSUUID *_eventStreamUUID;	// 88 = 0x58
    unsigned long long _state;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100004014
@property(readonly, nonatomic) _Bool ignoreOwnEvents; // @synthesize ignoreOwnEvents=_ignoreOwnEvents;
@property(nonatomic) _Bool isActivated; // @synthesize isActivated=_isActivated;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSUUID *eventStreamUUID; // @synthesize eventStreamUUID=_eventStreamUUID;
@property(nonatomic) unsigned long long lastDeliveredEventID; // @synthesize lastDeliveredEventID=_lastDeliveredEventID;
@property __weak id <FSChangeSubscriptionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long rootFileID; // @synthesize rootFileID=_rootFileID;
@property(readonly, nonatomic) int rootfd; // @synthesize rootfd=_rootfd;
@property(readonly, nonatomic) NSString *root; // @synthesize root=_root;
- (void)dispose;	// IMP=0x0000000100003e9c
- (_Bool)didProcessBarrierEventUUID:(id)arg1;	// IMP=0x0000000100003df8
- (void)didProcessEventID:(unsigned long long)arg1;	// IMP=0x0000000100003dec
- (void)barrier;	// IMP=0x0000000100003bac
@property(readonly, nonatomic) NSString *rootParent;
- (id)description;	// IMP=0x0000000100003b40
- (_Bool)activateWithError:(id *)arg1;	// IMP=0x00000001000039c4
- (id)initWithPath:(id)arg1 reader:(id)arg2 sinceEventID:(unsigned long long)arg3 streamUUID:(id)arg4 ignoreOwnEvents:(_Bool)arg5 delegate:(id)arg6 purpose:(id)arg7;	// IMP=0x000000010000386c

@end

