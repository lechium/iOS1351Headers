//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol NPDCardSetupReminderNotificationSchedulerDelegate <NSObject>
- (void)removeReminderNotificationForPassWithUniqueID:(NSString *)arg1;
- (void)postVerifyReminderNotificationForPassWithUniqueID:(NSString *)arg1;
- (void)postAddReminderNotificationForPassWithUniqueID:(NSString *)arg1;
- (_Bool)hasAnyWatchPaymentPasses;
- (NSString *)pairedTerminalIdentifierForCompanionPaymentPassWithUniqueID:(NSString *)arg1;
- (_Bool)hasWatchPaymentPassWithPairedTerminalIdentifier:(NSString *)arg1;
- (_Bool)hasCompanionPaymentPassWithUniqueID:(NSString *)arg1;
- (_Bool)hasWatchPaymentPassRequiringVerificationWithUniqueID:(NSString *)arg1;
- (_Bool)hasWatchPaymentPassWithUniqueID:(NSString *)arg1;
@end

