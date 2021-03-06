//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDWalletUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface PDWalletValueAddedServiceTransactionUserNotification : PDWalletUserNotification <NSSecureCoding>
{
    NSString *_merchantIdentifier;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000fc934
- (void).cxx_destruct;	// IMP=0x00000001000fca88
@property(readonly, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (unsigned long long)notificationType;	// IMP=0x00000001000fca70
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000fc9e8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000fc93c
- (id)initWithMerchantIdentifier:(id)arg1 localizedPassDescription:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x00000001000fc6ec

@end

