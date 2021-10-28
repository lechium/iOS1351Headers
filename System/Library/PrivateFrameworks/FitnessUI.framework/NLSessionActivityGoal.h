/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKQuantity;

@interface NLSessionActivityGoal : NSObject <NSSecureCoding> {

	double _doubleValue;
	unsigned long long _goalTypeIdentifier;

}

@property (assign,nonatomic) unsigned long long goalTypeIdentifier;              //@synthesize goalTypeIdentifier=_goalTypeIdentifier - In the implementation block
@property (nonatomic,retain) HKQuantity * value; 
+(BOOL)supportsSecureCoding;
+(id)goalWithGoalTypeIdentifier:(unsigned long long)arg1 value:(id)arg2 ;
+(id)goalFromURL:(id)arg1 ;
-(double)doubleValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKQuantity *)value;
-(void)setValue:(HKQuantity *)arg1 ;
-(double)_doubleValueForQuantity:(id)arg1 ;
-(id)_quantityForDoubleValue:(double)arg1 ;
-(unsigned long long)goalTypeIdentifier;
-(id)initWithGoalTypeIdentifier:(unsigned long long)arg1 value:(id)arg2 ;
-(void)setGoalTypeIdentifier:(unsigned long long)arg1 ;
@end
