/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsDonation/CNDonationValue.h>

@class NSPersonNameComponents;

@interface _CNNameComponentsDonationValue : CNDonationValue {

	NSPersonNameComponents* _nameComponents;

}

@property (nonatomic,copy,readonly) NSPersonNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPersonNameComponents *)nameComponents;
-(id)initWithNameComponents:(id)arg1 origin:(id)arg2 ;
-(void)updatePropertyListRepresentation:(id)arg1 ;
-(id)copyWithNewExpirationDate:(id)arg1 ;
-(void)acceptDonationValueVisitor:(id)arg1 ;
@end

