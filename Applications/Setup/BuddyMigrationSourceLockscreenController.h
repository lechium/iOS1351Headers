//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BuddyMigrationLockscreenController.h"

@class BuddyMigrationLockscreenFinishedController, BuddyMigrationSourceLockscreenErrorController;

@interface BuddyMigrationSourceLockscreenController : BuddyMigrationLockscreenController
{
    BuddyMigrationSourceLockscreenErrorController *_errorController;	// 8 = 0x8
    BuddyMigrationLockscreenFinishedController *_finishedController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000cbb34
@property(retain, nonatomic) BuddyMigrationLockscreenFinishedController *finishedController; // @synthesize finishedController=_finishedController;
@property(retain, nonatomic) BuddyMigrationSourceLockscreenErrorController *errorController; // @synthesize errorController=_errorController;
- (void)deviceMigrationManager:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x00000001000cb900

@end

