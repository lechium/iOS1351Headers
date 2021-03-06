//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class PKPaymentTransaction;

@interface PDPassPaymentTransactionUserNotification : PDUserNotification <NSSecureCoding>
{
    PKPaymentTransaction *_paymentTransaction;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000fdb10
+ (id)notificationIdentifierForPaymentTransaction:(id)arg1;	// IMP=0x00000001000fd860
- (void).cxx_destruct;	// IMP=0x00000001000fe78c
@property(readonly, nonatomic) PKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
- (id)_amountString;	// IMP=0x00000001000fe318
- (id)_locationString;	// IMP=0x00000001000fe19c
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00000001000fdcf8
- (_Bool)isValid;	// IMP=0x00000001000fdc54
- (unsigned long long)notificationType;	// IMP=0x00000001000fdc4c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000fdbc4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000fdb18
- (id)initWithPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;	// IMP=0x00000001000fd8e4

@end

