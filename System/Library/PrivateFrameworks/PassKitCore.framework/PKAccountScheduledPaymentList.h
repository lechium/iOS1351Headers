/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface PKAccountScheduledPaymentList : NSObject <NSSecureCoding> {

	NSMutableArray* _scheduledPayments;

}

@property (nonatomic,readonly) NSArray * scheduledPayments; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addScheduledPayment:(id)arg1 ;
-(id)jsonArrayRepresentationWithCertificatesResponse:(id)arg1 ;
-(id)scheduledPaymentOfFundingSourceType:(long long)arg1 ;
-(NSArray *)scheduledPayments;
-(id)initWithScheduledPayment:(id)arg1 ;
@end
