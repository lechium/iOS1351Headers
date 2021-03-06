//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NFTrustObject.h"

@class NFECommercePaymentResponse, NFTrustSignResponse;

@interface NFTrustPaymentSignResponse : NFTrustObject
{
    NFTrustSignResponse *_signResponse;	// 8 = 0x8
    NFECommercePaymentResponse *_paymentResponse;	// 16 = 0x10
}

+ (id)paymentSignResponseWithSignResponse:(id)arg1 paymentResponse:(id)arg2;	// IMP=0x000000010008caa4
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010008c938
@property(retain, nonatomic) NFECommercePaymentResponse *paymentResponse; // @synthesize paymentResponse=_paymentResponse;
@property(retain, nonatomic) NFTrustSignResponse *signResponse; // @synthesize signResponse=_signResponse;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010008ca2c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010008c940
- (void)dealloc;	// IMP=0x000000010008c8d8

@end

