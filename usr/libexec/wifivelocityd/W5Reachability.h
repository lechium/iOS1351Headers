//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface W5Reachability : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct __SCNetworkReachability *_reachabilityRef;	// 16 = 0x10
    _Bool _isMonitoringEvents;	// 24 = 0x18
    CDUnknownBlockType _updatedReachabilityCallback;	// 32 = 0x20
    NSString *_hostName;	// 40 = 0x28
}

@property(readonly, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(copy, nonatomic) CDUnknownBlockType updatedReachabilityCallback; // @synthesize updatedReachabilityCallback=_updatedReachabilityCallback;
- (unsigned int)flags;	// IMP=0x000000010001692c
- (void)stopEventMonitoring;	// IMP=0x0000000100016870
- (void)startEventMonitoring;	// IMP=0x0000000100016654
- (id)description;	// IMP=0x00000001000165b8
- (void)dealloc;	// IMP=0x0000000100016474
- (id)init;	// IMP=0x000000010001643c
- (id)initWithHostName:(id)arg1;	// IMP=0x0000000100016374

@end
