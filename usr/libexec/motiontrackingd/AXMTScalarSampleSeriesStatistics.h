//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXEQueueDelegate-Protocol.h"

@class AXMTQueue, NSString;

@interface AXMTScalarSampleSeriesStatistics : NSObject <AXEQueueDelegate>
{
    unsigned long long _count;	// 8 = 0x8
    double _mean;	// 16 = 0x10
    double _minimumValue;	// 24 = 0x18
    double _maximumValue;	// 32 = 0x20
    double _standardDeviation;	// 40 = 0x28
    AXMTQueue *__samplesQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010001d5f4
@property(readonly) AXMTQueue *_samplesQueue; // @synthesize _samplesQueue=__samplesQueue;
@property(nonatomic) double standardDeviation; // @synthesize standardDeviation=_standardDeviation;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double mean; // @synthesize mean=_mean;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)queue:(id)arg1 dequeuedValue:(id)arg2;	// IMP=0x000000010001d2cc
- (void)queue:(id)arg1 enqueuedValue:(id)arg2;	// IMP=0x000000010001d11c
@property(readonly, nonatomic) _Bool valid;
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010001d044

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

