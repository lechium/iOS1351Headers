/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Tips/Tips-Structs.h>
#import <Tips/TPSDeliveryObject.h>

@class NSDate, NSArray;

@interface TPSDeliveryCondition : TPSDeliveryObject {

	unsigned long long _type;
	unsigned long long _joinType;
	NSDate* _matchedDate;
	NSArray* _rules;

}

@property (assign,nonatomic) unsigned long long joinType;              //@synthesize joinType=_joinType - In the implementation block
@property (nonatomic,copy) NSArray * rules;                            //@synthesize rules=_rules - In the implementation block
@property (assign,nonatomic) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSDate * matchedDate;                       //@synthesize matchedDate=_matchedDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(id)eventsForConditionDictionary:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setJoinType:(unsigned long long)arg1 ;
-(unsigned long long)joinType;
-(NSArray *)rules;
-(void)setRules:(NSArray *)arg1 ;
-(id)eventIdentifiers;
-(void)setMatchedDate:(NSDate *)arg1 ;
-(void)restartTracking;
-(id)initWithDictionary:(id)arg1 type:(unsigned long long)arg2 ;
-(NSDate *)matchedDate;
@end
