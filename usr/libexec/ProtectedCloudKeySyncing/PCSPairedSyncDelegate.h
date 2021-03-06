//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PSYInitialSyncStateObserverDelegate-Protocol.h"
#import "PSYSyncCoordinatorDelegate-Protocol.h"

@class NSString, PSYInitialSyncStateObserver, PSYSyncCoordinator;

@interface PCSPairedSyncDelegate : NSObject <PSYSyncCoordinatorDelegate, PSYInitialSyncStateObserverDelegate>
{
    PSYSyncCoordinator *_coordinator;	// 8 = 0x8
    PSYInitialSyncStateObserver *_stateObserver;	// 16 = 0x10
}

+ (id)sharedSyncDelegate;	// IMP=0x0000000100010940
- (void).cxx_destruct;	// IMP=0x0000000100011100
@property(readonly) PSYInitialSyncStateObserver *stateObserver; // @synthesize stateObserver=_stateObserver;
@property(readonly) PSYSyncCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x0000000100010da4
- (_Bool)syncingIsRestrictedForPairingID:(id)arg1;	// IMP=0x0000000100010ad4
- (id)init;	// IMP=0x0000000100010a18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

