//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MFNanoServerMessageSender : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_messagesDeliveredSemaphore;	// 16 = 0x10
    NSMutableSet *_pendingMessageReferences;	// 24 = 0x18
    NSMutableDictionary *_sentMessageReferences;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000c4bd4
- (id)_libraryMessageForMessageId:(id)arg1;	// IMP=0x00000001000c4aac
- (id)_messageToSendWithCompositionContext:(id)arg1;	// IMP=0x00000001000c48e0
- (id)_sendComposedMessage:(id)arg1;	// IMP=0x00000001000c466c
- (void)_didReceiveMessageDeliveryNotification:(id)arg1;	// IMP=0x00000001000c427c
- (void)sendMessage:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c31fc
- (id)init;	// IMP=0x00000001000c3090

@end
