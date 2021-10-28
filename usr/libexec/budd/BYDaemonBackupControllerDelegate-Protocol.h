//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSError;

@protocol BYDaemonBackupControllerDelegate <NSObject>
- (void)backupUpdatedProgress:(double)arg1 estimatedTimeRemaining:(unsigned long long)arg2;
- (void)backupCompletedWithError:(NSError *)arg1 dateOfLastBackup:(NSDate *)arg2;
@end
