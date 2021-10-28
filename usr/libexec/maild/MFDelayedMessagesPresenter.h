//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol MFDelayedMessagesPresenterDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface MFDelayedMessagesPresenter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_fireSource;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    double _postingDelay;	// 32 = 0x20
    NSMutableArray *_pendingMessages;	// 40 = 0x28
    id <MFDelayedMessagesPresenterDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010006a494
@property(nonatomic) __weak id <MFDelayedMessagesPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeProcessedMessages;	// IMP=0x000000010006a370
- (void)_delegateProcessMessages:(id)arg1;	// IMP=0x0000000100069ed0
- (void)_processSufficientlyDelayedMessages;	// IMP=0x0000000100069c70
- (void)_scheduleNextFireEvent;	// IMP=0x00000001000698f8
- (void)immediatelyProcessPendingMessagesWithIdentifiers:(id)arg1;	// IMP=0x00000001000695ec
- (void)schedulePendingMessageInfo:(id)arg1 identifier:(id)arg2 context:(id)arg3;	// IMP=0x00000001000691ac
- (void)removePendingMessagesWithIdentifiers:(id)arg1;	// IMP=0x0000000100068eb8
- (void)clearPendingMessages;	// IMP=0x0000000100068dcc
@property double postingDelay;
- (void)dealloc;	// IMP=0x0000000100068ba4
- (id)init;	// IMP=0x0000000100068a14

@end
