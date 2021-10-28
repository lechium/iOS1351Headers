//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, Protocol;

__attribute__((visibility("hidden")))
@interface WeakObserverCollection : NSObject
{
    Protocol *_protocol;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100010654
- (id)description;	// IMP=0x00000001000103a0
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000010001002c
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000010000ffa0
- (void)removeObserver:(id)arg1;	// IMP=0x000000010000fe94
- (void)addObserver:(id)arg1;	// IMP=0x000000010000fd78
@property(readonly) _Bool hasObservers;
- (id)initWithProtocol:(id)arg1;	// IMP=0x000000010000fbd4

@end
