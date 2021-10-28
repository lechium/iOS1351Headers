//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface CARDisclosureMonitor : NSObject
{
    _Bool _markedSafe;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100027d90
@property(nonatomic) _Bool markedSafe; // @synthesize markedSafe=_markedSafe;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void)_observersDisclosureMonitorDidChange;	// IMP=0x0000000100027b90
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100027b24
- (void)addObserver:(id)arg1;	// IMP=0x0000000100027ab8
- (void)markSafe;	// IMP=0x0000000100027a68
- (void)turnFeaturesOff;	// IMP=0x0000000100027a18
@property(readonly, nonatomic) _Bool active;
- (id)init;	// IMP=0x0000000100027968

@end
