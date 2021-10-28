//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PSDSchedulerObserver-Protocol.h"

@class NPSDomainAccessor, NPSManager, NSDictionary, NSString, PSYWatchSyncClientState, PSYWatchSyncState;
@protocol OS_dispatch_queue;

@interface PSDWatchSyncStateObserver : NSObject <PSDSchedulerObserver>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    PSYWatchSyncState *_syncState;	// 16 = 0x10
    PSYWatchSyncClientState *_syncClientState;	// 24 = 0x18
    NPSDomainAccessor *_domainAccessor;	// 32 = 0x20
    NPSManager *_preferencesManager;	// 40 = 0x28
    NSDictionary *_lastSyncClientPlistRepresentation;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010001b350
- (void)scheduler:(id)arg1 didUpdateSyncSessionWithUpdate:(id)arg2;	// IMP=0x000000010001b300
- (void)_updateStateWithSyncSession:(id)arg1;	// IMP=0x000000010001b260
- (id)_watchSyncClientStateFromSyncSession:(id)arg1;	// IMP=0x000000010001af40
- (id)_watchSyncStateFromSyncSession:(id)arg1;	// IMP=0x000000010001add8
- (unsigned long long)_watchSyncSessionTypeFromSyncSession:(id)arg1;	// IMP=0x000000010001adb0
- (unsigned long long)_watchSyncProgressStateFromSyncSession:(id)arg1;	// IMP=0x000000010001ad78
- (void)_updateWithSyncState:(id)arg1 andSyncClientState:(id)arg2;	// IMP=0x000000010001ab68
- (void)dealloc;	// IMP=0x000000010001aaf0
- (id)init;	// IMP=0x000000010001a9d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
