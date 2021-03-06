/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IdentityLookup/ILClassificationRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ILCallClassificationRequest : ILClassificationRequest <NSSecureCoding> {

	NSArray* _callCommunications;

}

@property (nonatomic,copy,readonly) NSArray * callCommunications;              //@synthesize callCommunications=_callCommunications - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(NSArray *)callCommunications;
-(id)initWithCallCommunications:(id)arg1 ;
@end

