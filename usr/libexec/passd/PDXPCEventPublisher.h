//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface PDXPCEventPublisher : NSObject
{
    _Bool _receivedInitialBarrier;	// 8 = 0x8
    NSObject<OS_xpc_event_publisher> *_publisher;	// 16 = 0x10
    NSString *_streamName;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSMutableArray *_pendingSendEvents;	// 40 = 0x28
    NSMutableSet *_tokens;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100111068
@property(nonatomic) _Bool receivedInitialBarrier; // @synthesize receivedInitialBarrier=_receivedInitialBarrier;
@property(retain, nonatomic) NSMutableSet *tokens; // @synthesize tokens=_tokens;
@property(retain, nonatomic) NSMutableArray *pendingSendEvents; // @synthesize pendingSendEvents=_pendingSendEvents;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *streamName; // @synthesize streamName=_streamName;
@property(retain, nonatomic) NSObject<OS_xpc_event_publisher> *publisher; // @synthesize publisher=_publisher;
- (void)sendEvent:(id)arg1;	// IMP=0x0000000100110c90
- (void)handleEventWithAction:(unsigned int)arg1 token:(unsigned long long)arg2 descriptor:(id)arg3;	// IMP=0x0000000100110900
- (id)initWithStreamName:(id)arg1;	// IMP=0x00000001001105f8

@end

