//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, PDXPCEventStreamObserver;

@interface PDXPCEventStreamObserverEntry : NSObject
{
    id <PDXPCEventStreamObserver> _observer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_replyQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002fbb0
@property(retain) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
@property(nonatomic) __weak id <PDXPCEventStreamObserver> observer; // @synthesize observer=_observer;

@end

