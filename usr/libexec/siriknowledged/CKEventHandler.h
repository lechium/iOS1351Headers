//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CKEventHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_event_stream_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000fdec
- (void)setupNotifyHandlers;	// IMP=0x000000010000fbec
- (void)setupNSNotificationHandlers;	// IMP=0x000000010000fa1c
- (id)init;	// IMP=0x000000010000f990

@end
