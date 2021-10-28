//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDActivationPredicateObserver.h"

@class NSArray;

@interface DMDActivationPredicateCompound : DMDActivationPredicateObserver
{
    NSArray *_subPredicateObservers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100011854
@property(readonly, copy, nonatomic) NSArray *subPredicateObservers; // @synthesize subPredicateObservers=_subPredicateObservers;
- (void)reportActivationPredicateObserverDidTrigger;	// IMP=0x0000000100011708
- (id)metadata;	// IMP=0x00000001000114ec
- (void)invalidate;	// IMP=0x00000001000113ac
- (void)updateObserverRegistration;	// IMP=0x0000000100011270
- (id)initWithDelegate:(id)arg1 uniqueIdentifier:(id)arg2 subPredicateObservers:(id)arg3 predicate:(id)arg4;	// IMP=0x0000000100011198

@end
