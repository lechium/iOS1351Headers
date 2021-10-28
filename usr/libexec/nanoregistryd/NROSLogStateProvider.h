//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface NROSLogStateProvider : NSObject
{
    NSString *_lastDumpString;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_currentTimer;	// 24 = 0x18
    NSObject<OS_os_transaction> *_transaction;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010005aeb0
- (void)registerOSLogStateHandlerName:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010005acac
- (id)initWithName:(id)arg1 maxStringLength:(long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000010005a9e0
- (void)createStateCaptureTransaction;	// IMP=0x000000010005a888

@end
