/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKServiceProviderPurchaseData.h>

@interface PKPeerPaymentPurchaseData : PKServiceProviderPurchaseData {

	BOOL _requiresInteraction;
	unsigned long long _status;

}

@property (assign,nonatomic) unsigned long long status;              //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL requiresInteraction;               //@synthesize requiresInteraction=_requiresInteraction - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(BOOL)isEqualToPKPeerPaymentPurchaseData:(id)arg1 ;
-(BOOL)requiresInteraction;
-(void)setRequiresInteraction:(BOOL)arg1 ;
@end
