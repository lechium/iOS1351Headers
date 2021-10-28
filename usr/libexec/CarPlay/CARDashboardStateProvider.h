//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CARHomeViewPageChangeObserving-Protocol.h"
#import "CARWorkspaceObserver-Protocol.h"

@class CARDashboard, CARObserverHashTable, NSString;

@interface CARDashboardStateProvider : NSObject <CARWorkspaceObserver, CARHomeViewPageChangeObserving>
{
    _Bool _connectionReady;	// 8 = 0x8
    unsigned long long _lockoutState;	// 16 = 0x10
    unsigned long long _pageType;	// 24 = 0x18
    NSString *_activeBundleIdentifier;	// 32 = 0x20
    CARDashboard *_dashboard;	// 40 = 0x28
    CARObserverHashTable *_observers;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000a96fc
@property(retain, nonatomic) CARObserverHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) __weak CARDashboard *dashboard; // @synthesize dashboard=_dashboard;
@property(copy, nonatomic) NSString *activeBundleIdentifier; // @synthesize activeBundleIdentifier=_activeBundleIdentifier;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) unsigned long long lockoutState; // @synthesize lockoutState=_lockoutState;
@property(nonatomic) _Bool connectionReady; // @synthesize connectionReady=_connectionReady;
- (void)homeViewController:(id)arg1 didChangeToPageIndex:(long long)arg2 firstIconPageIndex:(long long)arg3 minimumPageIndex:(long long)arg4;	// IMP=0x00000001000a9694
- (void)workspace:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;	// IMP=0x00000001000a9644
- (void)_refreshObservations;	// IMP=0x00000001000a94e0
- (void)removeObserver:(id)arg1;	// IMP=0x00000001000a9138
- (void)addObserver:(id)arg1;	// IMP=0x00000001000a90cc
- (id)initWithDashboard:(id)arg1;	// IMP=0x00000001000a901c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
