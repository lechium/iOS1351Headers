//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol APSTTLCollectionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface APSTTLCollection : NSObject
{
    NSMutableDictionary *_backingStore;	// 8 = 0x8
    double _ttlInSeconds;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_evictionTimer;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    id <APSTTLCollectionDelegate> _delegate;	// 40 = 0x28
}

+ (id)suppressedTTRTopics;	// IMP=0x0000000100017920
- (void).cxx_destruct;	// IMP=0x00000001000184d0
@property(readonly, nonatomic) double ttlInSeconds; // @synthesize ttlInSeconds=_ttlInSeconds;
@property(nonatomic) __weak id <APSTTLCollectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_performEvictionSweep;	// IMP=0x0000000100017f00
- (void)_stopEvictionTimerIfEmpty;	// IMP=0x0000000100017eb8
- (void)_stopEvictionTimer;	// IMP=0x0000000100017e7c
- (void)_startEvictionTimerIfNeeded;	// IMP=0x0000000100017cf0
- (void)dealloc;	// IMP=0x0000000100017ca4
- (void)removeItem:(id)arg1 withFlag:(unsigned int)arg2;	// IMP=0x0000000100017bbc
- (void)removeItem:(id)arg1;	// IMP=0x0000000100017bac
- (void)addItem:(id)arg1 withInitialState:(unsigned int)arg2 withTopic:(id)arg3;	// IMP=0x0000000100017af4
- (void)addItem:(id)arg1 withInitialState:(unsigned int)arg2;	// IMP=0x0000000100017adc
- (void)addItem:(id)arg1;	// IMP=0x0000000100017ac4
- (id)initWithQueue:(id)arg1 ttlInSeconds:(double)arg2;	// IMP=0x0000000100017a20

@end

