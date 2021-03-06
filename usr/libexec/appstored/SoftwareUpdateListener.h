//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BaseListener.h"

#import "ASDSoftwareUpdateProtocol-Protocol.h"

@class NSString;

@interface SoftwareUpdateListener : BaseListener <ASDSoftwareUpdateProtocol>
{
}

- (void)_initializeConnection:(id)arg1;	// IMP=0x00000001001d9f80
- (void)_handleDisconnect:(id)arg1;	// IMP=0x00000001001d9e98
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001001d9cd4
- (void)updateAllWithOrder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d9950
- (void)updateAllWithJobResults:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d95e0
- (void)reloadManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d93cc
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d9184
- (void)reloadFromServerInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d8df8
- (void)removeUpdateBulletins;	// IMP=0x00000001001d8cbc
- (void)showApplicationBadgeForPendingUpdates;	// IMP=0x00000001001d8b4c
- (void)showApplicationUpdatesBulletin;	// IMP=0x00000001001d8a10
- (void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d88a0
- (void)refreshUpdateCountWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d8568
- (void)migrateUpdatesStoreWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d84b4
- (void)hideApplicationBadgeForPendingUpdates;	// IMP=0x00000001001d8344
- (void)getManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d8130
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d7f30
- (void)getUpdatesMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d7ca4
- (void)getUpdatesIncludingMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d7a90
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d7920
- (id)init;	// IMP=0x00000001001d78ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

