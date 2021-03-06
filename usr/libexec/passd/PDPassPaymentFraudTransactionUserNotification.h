//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class PKPaymentTransaction, PKPaymentTransactionQuestion;

@interface PDPassPaymentFraudTransactionUserNotification : PDUserNotification <NSSecureCoding>
{
    _Bool _accountSuspended;	// 88 = 0x58
    PKPaymentTransaction *_paymentTransaction;	// 96 = 0x60
    PKPaymentTransactionQuestion *_question;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001069a4
- (void).cxx_destruct;	// IMP=0x0000000100107060
@property(nonatomic) _Bool accountSuspended; // @synthesize accountSuspended=_accountSuspended;
@property(readonly, nonatomic) PKPaymentTransactionQuestion *question; // @synthesize question=_question;
@property(readonly, nonatomic) PKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
- (id)_messageString;	// IMP=0x0000000100106fdc
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0000000100106cf4
- (_Bool)questionIsValid;	// IMP=0x0000000100106c50
- (_Bool)isValid;	// IMP=0x0000000100106bc0
- (unsigned long long)notificationType;	// IMP=0x0000000100106bb8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100106ae8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001069ac
- (id)initWithPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2;	// IMP=0x000000010010675c

@end

