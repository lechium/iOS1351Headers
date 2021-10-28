//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PSDSchedulerObserver-Protocol.h"

@class NSString, NSUUID, PSDResumeContext;
@protocol OS_dispatch_queue, PSDSyncInitiatorDelegate;

@interface PSDSyncInitiator : NSObject <PSDSchedulerObserver>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    PSDResumeContext *_resumeContext;	// 16 = 0x10
    int _syncAdviceNotifyToken;	// 24 = 0x18
    int _mobileKeyBagNotifyToken;	// 28 = 0x1c
    NSUUID *_syncCompletedPairingIdentifier;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_syncStarterQueue;	// 40 = 0x28
    _Bool _syncStarterQueueIsSuspended;	// 48 = 0x30
    _Bool _registeredForPairingNotification;	// 49 = 0x31
    unsigned long long _state;	// 56 = 0x38
    id <PSDSyncInitiatorDelegate> _delegate;	// 64 = 0x40
}

+ (id)sharedSyncInitiator;	// IMP=0x0000000100004f68
- (void).cxx_destruct;	// IMP=0x0000000100008d74
@property(nonatomic) __weak id <PSDSyncInitiatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)startExternalSyncWithOptions:(id)arg1;	// IMP=0x0000000100008994
- (void)scheduler:(id)arg1 didClearSyncSession:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008540
- (void)_queue_saveResumeContextWithSyncSession:(id)arg1;	// IMP=0x0000000100008474
- (void)scheduler:(id)arg1 didUpdateSyncSessionWithUpdate:(id)arg2;	// IMP=0x000000010000811c
- (void)scheduler:(id)arg1 willStartSyncSession:(id)arg2;	// IMP=0x0000000100007fdc
- (_Bool)canSync;	// IMP=0x0000000100007f28
- (unsigned long long)needsSync;	// IMP=0x00000001000077f0
- (_Bool)supportsMigration:(id)arg1;	// IMP=0x0000000100007770
- (_Bool)_hasWatchMigrationCounterChanged;	// IMP=0x000000010000741c
- (_Bool)_hasLastKnownDeviceChanged;	// IMP=0x0000000100006de4
- (id)domainAccessorForPairingID:(id)arg1;	// IMP=0x0000000100006cf0
- (id)sortedActivityInfos:(id)arg1;	// IMP=0x00000001000069b8
- (id)activityInfos:(id)arg1 screenedBySyncSessionType:(unsigned long long)arg2;	// IMP=0x0000000100006714
- (id)syncSessionActivitiesForActivityInfos:(id)arg1;	// IMP=0x0000000100006560
- (id)defaultSyncSessionForType:(unsigned long long)arg1;	// IMP=0x0000000100006338
- (unsigned long long)readNotifyToken:(int)arg1;	// IMP=0x00000001000062f8
- (int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000061dc
- (_Bool)isSyncAdvised;	// IMP=0x00000001000061b4
- (void)_startSyncIfNeeded;	// IMP=0x000000010000578c
- (void)startSyncIfNeeded;	// IMP=0x0000000100005724
- (void)resume;	// IMP=0x000000010000571c
- (id)init;	// IMP=0x000000010000500c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
