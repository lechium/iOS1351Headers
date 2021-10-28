//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NavdDoomConductorObserver-Protocol.h"

@class NSString;
@protocol NavdDoomStorageSnapshotDataSource, OS_dispatch_queue;

@interface NavdDoomEvalDumper : NSObject <NavdDoomConductorObserver>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <NavdDoomStorageSnapshotDataSource> _snapshotDataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002ae68
@property(retain, nonatomic) id <NavdDoomStorageSnapshotDataSource> snapshotDataSource; // @synthesize snapshotDataSource=_snapshotDataSource;
- (void)didEndUpdate;	// IMP=0x000000010002ae0c
- (void)didScheduleWakeup;	// IMP=0x000000010002adc4
- (void)didFireAlert;	// IMP=0x000000010002ad7c
- (void)willFireAlert;	// IMP=0x000000010002ad34
- (void)didUpdateRoutes;	// IMP=0x000000010002acec
- (void)willUpdateRoutes;	// IMP=0x000000010002aca4
- (void)didUpdateDestinations;	// IMP=0x000000010002ac5c
- (void)willUpdateDestinations;	// IMP=0x000000010002ac14
- (void)didUpdateWindow;	// IMP=0x000000010002abcc
- (void)didInvalidateWindow;	// IMP=0x000000010002ab84
- (void)didUpdateExitTime;	// IMP=0x000000010002ab3c
- (void)willUpdateExitTime;	// IMP=0x000000010002aaf4
- (void)willStartUpdate;	// IMP=0x000000010002aaac
- (void)_writeJSONForStep:(id)arg1;	// IMP=0x0000000100028684
- (id)init;	// IMP=0x00000001000285ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
