//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPMetrics : NSObject
{
    unsigned long long _eventCountTotal;	// 8 = 0x8
    unsigned long long _eventCountLastInterval;	// 16 = 0x10
    unsigned long long _eventCountLastReport;	// 24 = 0x18
    unsigned long long _eventsPerMin;	// 32 = 0x20
    unsigned long long _eventLengthBuckets[4];	// 40 = 0x28
    unsigned long long _requestCountTotal;	// 72 = 0x48
    unsigned long long _requestCountLastInterval;	// 80 = 0x50
    unsigned long long _requestCountLastReport;	// 88 = 0x58
    unsigned long long _requestsPerMin;	// 96 = 0x60
    unsigned long long _requestLengthBuckets[4];	// 104 = 0x68
    unsigned long long _responseCountTotal;	// 136 = 0x88
    unsigned long long _responseCountLastInterval;	// 144 = 0x90
    unsigned long long _responseCountLastReport;	// 152 = 0x98
    unsigned long long _responsesPerMin;	// 160 = 0xa0
    unsigned long long _responseLengthBuckets[4];	// 168 = 0xa8
    unsigned long long _responseRTTBuckets[4];	// 200 = 0xc8
    unsigned long long _rateLastTicks;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_reportQueue;	// 240 = 0xf0
    NSObject<OS_dispatch_source> *_reportTimer;	// 248 = 0xf8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 256 = 0x100
}

+ (id)sharedMetricsNoCreate;	// IMP=0x000000010003be40
+ (id)sharedMetrics;	// IMP=0x000000010003bd88
- (void).cxx_destruct;	// IMP=0x000000010003cf68
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_logReceivedMessageType:(int)arg1 identifier:(id)arg2 options:(id)arg3 appID:(id)arg4 timeBegin:(double)arg5 timeEnd:(double)arg6 bytesAdded:(unsigned long long)arg7 messagesAdded:(unsigned long long)arg8;	// IMP=0x000000010003cc30
- (void)logReceivedMessageType:(int)arg1 identifier:(id)arg2 options:(id)arg3 appID:(id)arg4 ctx:(CDStruct_20fd928a *)arg5;	// IMP=0x000000010003ca90
- (void)_reportMetrics:(_Bool)arg1;	// IMP=0x000000010003c588
- (void)reportMetrics;	// IMP=0x000000010003c51c
- (void)invalidate;	// IMP=0x000000010003c430
- (void)_activate;	// IMP=0x000000010003c304
- (void)activate;	// IMP=0x000000010003c29c
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000010003bf1c
- (id)init;	// IMP=0x000000010003be4c

@end

