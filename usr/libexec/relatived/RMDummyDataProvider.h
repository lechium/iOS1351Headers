//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RMDataProvider-Protocol.h"

@class RMDummyDataProviderConfiguration;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RMDummyDataProvider : NSObject <RMDataProvider>
{
    _Bool _running;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_producerQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_receiverQueue;	// 24 = 0x18
    RMDummyDataProviderConfiguration *_configuration;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_producerTimer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100007810
@property(retain, nonatomic) NSObject<OS_dispatch_source> *producerTimer; // @synthesize producerTimer=_producerTimer;
@property(getter=isRunning) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) RMDummyDataProviderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *receiverQueue; // @synthesize receiverQueue=_receiverQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *producerQueue; // @synthesize producerQueue=_producerQueue;
- (void)stopProducingData;	// IMP=0x0000000100007748
- (id)startProducingDataWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007454
- (id)initWithConfiguration:(id)arg1 receiverQueue:(id)arg2;	// IMP=0x0000000100007350

@end

