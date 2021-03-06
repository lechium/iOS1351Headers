/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKCurrencyAmount;

@interface PKPhysicalCardPriceOption : NSObject <NSSecureCoding> {

	unsigned long long _reason;
	PKCurrencyAmount* _amount;

}

@property (assign,nonatomic) unsigned long long reason;              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * amount;              //@synthesize amount=_amount - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)reason;
-(id)initWithDictionary:(id)arg1 ;
-(PKCurrencyAmount *)amount;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(void)setReason:(unsigned long long)arg1 ;
-(id)jsonDictionaryRepresentation;
@end

