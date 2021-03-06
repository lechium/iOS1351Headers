//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BuddyMigrationProgressController.h"

@class BYBuddyDaemonMigrationSourceClient, NSError, NSString;

@interface BuddyMigrationSourceProgressController : BuddyMigrationProgressController
{
    NSError *_error;	// 8 = 0x8
    BYBuddyDaemonMigrationSourceClient *_migrationSourceClient;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000d2a80
@property(retain, nonatomic) BYBuddyDaemonMigrationSourceClient *migrationSourceClient; // @synthesize migrationSourceClient=_migrationSourceClient;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)deviceMigrationManager:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x00000001000d2808
- (id)createLockscreenController;	// IMP=0x00000001000d279c
- (void)cancelMigration;	// IMP=0x00000001000d272c
- (void)confirmCancellation:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d26d0
@property(readonly, nonatomic) NSString *internalStatistics;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000d2434
- (void)loadView;	// IMP=0x00000001000d2388
- (id)init;	// IMP=0x00000001000d22d4

@end

