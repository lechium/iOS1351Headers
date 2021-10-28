//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXAssertionCoordinatorDelegate-Protocol.h"

@class AXAssertionCoordinator, NSString;

@interface HNDActiveClientHelper : NSObject <AXAssertionCoordinatorDelegate>
{
    AXAssertionCoordinator *_assertionCoordinator;	// 8 = 0x8
    _Bool _hasActiveClients;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100089f50
@property(readonly, nonatomic) _Bool hasActiveClients; // @synthesize hasActiveClients=_hasActiveClients;
- (void)assertionCoordinator:(id)arg1 assertionsDidBecomeActive:(_Bool)arg2;	// IMP=0x0000000100089f30
- (id)addActiveClientWithReason:(id)arg1;	// IMP=0x0000000100089f20
- (id)init;	// IMP=0x0000000100089e74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
