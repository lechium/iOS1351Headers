//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MBCKLockManager, NSError;

@protocol MBCKLockManagerDelegate
- (void)lockManager:(MBCKLockManager *)arg1 failedToReleaseLockWithError:(NSError *)arg2;
- (void)lockManagerDidReleaseLock:(MBCKLockManager *)arg1;

@optional
- (void)lockManagerDeferredLockAcquisition:(MBCKLockManager *)arg1;
- (void)lockManager:(MBCKLockManager *)arg1 failedToAcquireLockWithError:(NSError *)arg2;
- (void)lockManagerDidAcquireLock:(MBCKLockManager *)arg1;
@end
