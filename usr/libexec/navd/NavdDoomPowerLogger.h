//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NavdDoomConductorObserver-Protocol.h"
#import "NavdDoomTriggerObserver-Protocol.h"

@class NSDate, NSString;
@protocol NavdDoomStorageSnapshotDataSource, OS_dispatch_queue;

@interface NavdDoomPowerLogger : NSObject <NavdDoomConductorObserver, NavdDoomTriggerObserver>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    long long _trigger;	// 16 = 0x10
    NSDate *_updateEndDate;	// 24 = 0x18
    _Bool _firedAlert;	// 32 = 0x20
    id <NavdDoomStorageSnapshotDataSource> _snapshotDataSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100032f34
@property(retain, nonatomic) id <NavdDoomStorageSnapshotDataSource> snapshotDataSource; // @synthesize snapshotDataSource=_snapshotDataSource;
- (void)didEndUpdate;	// IMP=0x0000000100032e70
- (void)didFireAlert;	// IMP=0x0000000100032e08
- (void)didReceiveTrigger:(id)arg1;	// IMP=0x0000000100032d40
- (void)_resetValues;	// IMP=0x0000000100032d0c
- (void)_flushToPowerLog;	// IMP=0x00000001000325bc
- (id)init;	// IMP=0x00000001000324d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

