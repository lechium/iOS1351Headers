//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FSVolume, NSMutableArray, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface FSChangeMonitor : NSObject
{
    _Atomic int _resetCount;	// 8 = 0x8
    _Atomic int _suspendCount;	// 12 = 0xc
    struct fpfs_fsevent_stream *_liveStream;	// 16 = 0x10
    struct fpfs_fsevent_stream *_histStream;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_streamQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegationQueue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_fseventsProcessSource;	// 48 = 0x30
    NSMutableArray *_fseventsToProcess;	// 56 = 0x38
    unsigned long long _maxFSEventQueueSize;	// 64 = 0x40
    unsigned long long _fseventProcessBatchSize;	// 72 = 0x48
    _Bool _isCancelled;	// 80 = 0x50
    _Bool _drainEvents;	// 81 = 0x51
    _Bool _isActivated;	// 82 = 0x52
    FSVolume *_volume;	// 88 = 0x58
    unsigned long long _processHistoryToEvent;	// 96 = 0x60
    unsigned long long _historyDoneJumpToEvent;	// 104 = 0x68
    NSMutableArray *_subscriptions;	// 112 = 0x70
    NSObject<OS_os_log> *_log;	// 120 = 0x78
    NSURL *_barrierFolderURL;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000010000b5f8
@property(retain, nonatomic) NSURL *barrierFolderURL; // @synthesize barrierFolderURL=_barrierFolderURL;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegationQueue; // @synthesize delegationQueue=_delegationQueue;
- (void)cancel;	// IMP=0x000000010000b51c
- (void)_cancel;	// IMP=0x000000010000b4b0
- (void)resume;	// IMP=0x000000010000b0b4
- (void)suspend;	// IMP=0x000000010000aeac
- (void)resetWithReason:(long long)arg1 dropFSEventID:(_Bool)arg2;	// IMP=0x000000010000a854
- (void)resetWithReason:(long long)arg1;	// IMP=0x000000010000a844
- (void)close;	// IMP=0x000000010000a6e4
- (void)_close;	// IMP=0x000000010000a514
- (void)flushStream;	// IMP=0x000000010000a4ec
- (id)description;	// IMP=0x000000010000a320
- (void)fseventAtPath:(id)arg1 eventFlags:(unsigned int)arg2 eventID:(unsigned long long)arg3 fileID:(unsigned long long)arg4 barrierUUID:(id)arg5 eventIndex:(unsigned int)arg6 eventCount:(unsigned int)arg7;	// IMP=0x00000001000097d0
- (_Bool)eventIsLive:(unsigned long long)arg1;	// IMP=0x00000001000097b4
- (void)processFseventBatch;	// IMP=0x0000000100009560
- (void)queueEvents:(id)arg1 stream:(struct __FSEventStream *)arg2;	// IMP=0x0000000100009190
- (_Bool)_queueEvents:(id)arg1;	// IMP=0x0000000100008f30
- (_Bool)setUpStreamForReason:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000100008b4c
- (id)liveFSEventsXPCActivityCriteria;	// IMP=0x0000000100008b44
- (id)historicalFSEventsXPCActivityCriteria;	// IMP=0x0000000100008b3c
- (struct fpfs_fsevent_stream *)_createStreamNamed:(id)arg1 since:(unsigned long long)arg2 criteria:(id)arg3;	// IMP=0x0000000100008164
- (unsigned long long)oldestStartingPoint;	// IMP=0x0000000100008004
- (void)foreachSubscriptionInState:(unsigned long long)arg1 apply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007ea8
- (void)disableSubscription:(id)arg1;	// IMP=0x0000000100007dc8
- (_Bool)activateSubscription:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100007cf0
- (_Bool)_activateSubscription:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100007b18
- (id)subscribeToEventsAtPath:(id)arg1 sinceEventID:(unsigned long long)arg2 streamUUID:(id)arg3 ignoreOwnEvents:(_Bool)arg4 delegate:(id)arg5 purpose:(id)arg6;	// IMP=0x00000001000079c0
- (void)dealloc;	// IMP=0x0000000100007930
- (id)initWithLabel:(id)arg1 workloop:(id)arg2;	// IMP=0x000000010000754c
- (id)init;	// IMP=0x0000000100007540

@end

