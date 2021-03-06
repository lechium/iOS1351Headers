//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VCPTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPProgressReporter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    VCPTimer *_timer;	// 16 = 0x10
    long long _processedJobCountOnLastUpdate;	// 24 = 0x18
    long long _processedJobCount;	// 32 = 0x20
    long long _totalJobCount;	// 40 = 0x28
}

+ (id)reporterWithIntervalSeconds:(unsigned long long)arg1 andTotalJobCount:(long long)arg2 andBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000307c0
- (void).cxx_destruct;	// IMP=0x00000001000309dc
- (void)_reportProgressWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000308dc
- (void)increaseProcessedJobCountByOne;	// IMP=0x00000001000308cc
- (void)dealloc;	// IMP=0x000000010003084c
- (id)initWithIntervalSeconds:(unsigned long long)arg1 andTotalJobCount:(long long)arg2 andBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010003056c
- (id)init;	// IMP=0x0000000100030554

@end

