//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, PKPaymentApplication, PKPaymentTransaction, PKPaymentTransactionProcessor;

@protocol PKPaymentTransactionProcessorDelegate <NSObject>
- (void)paymentTransactionUpdated:(PKPaymentTransaction *)arg1 forPassUniqueIdentifier:(NSString *)arg2 paymentApplication:(PKPaymentApplication *)arg3;

@optional
- (void)paymentTransactionProcessorDidDeactivate:(PKPaymentTransactionProcessor *)arg1;
- (void)paymentTransactionProcessorDidActivate:(PKPaymentTransactionProcessor *)arg1;
@end

