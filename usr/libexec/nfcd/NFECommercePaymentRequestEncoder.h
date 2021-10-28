//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFECommercePaymentRequestEncoder : NSObject
{
}

+ (unsigned long long)_iso3166ForCountryCode:(id)arg1;	// IMP=0x0000000100067170
+ (long long)_iso4217ForCurrencyCode:(id)arg1;	// IMP=0x0000000100066ed0
+ (id)encodeRequest:(id)arg1 withPIN:(id)arg2;	// IMP=0x0000000100066ad0
+ (id)_tlvForMerchantCapabilities:(unsigned char)arg1;	// IMP=0x000000010006693c
+ (id)_tlvForNonce:(unsigned long long)arg1;	// IMP=0x00000001000668f8
+ (id)_tlvForAmount:(id)arg1 decimalDigits:(long long)arg2;	// IMP=0x00000001000663f8
+ (id)_tlvForCurrency:(id)arg1 decimalDigits:(long long *)arg2;	// IMP=0x0000000100066078
+ (id)_tlvForCountryCode:(id)arg1;	// IMP=0x0000000100065edc
+ (id)_tlvForDate:(id)arg1;	// IMP=0x0000000100065c54
+ (id)_tlvForApplicationIdentifier:(id)arg1;	// IMP=0x000000010006596c
+ (id)dataWithInteger:(unsigned long long)arg1 length:(int)arg2;	// IMP=0x00000001000658f4

@end
