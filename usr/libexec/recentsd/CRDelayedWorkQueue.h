//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CRDelayedWorkQueue : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_requests;	// 24 = 0x18
}

- (void)flush;	// IMP=0x00000001000034f8
- (void)cancel;	// IMP=0x00000001000033c0
- (_Bool)scheduleWorkForKey:(id)arg1 afterDelay:(double)arg2 work:(CDUnknownBlockType)arg3;	// IMP=0x0000000100002f04
- (void)cancelWorkForKey:(id)arg1;	// IMP=0x0000000100002e9c
- (void)dealloc;	// IMP=0x0000000100002e4c
- (id)init;	// IMP=0x0000000100002da8

@end
