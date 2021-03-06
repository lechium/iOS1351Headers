/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface HKFeatureAvailabilityRuleSet : NSObject {

	NSMutableDictionary* _conditions;

}

@property (nonatomic,retain) NSMutableDictionary * conditions;              //@synthesize conditions=_conditions - In the implementation block
-(NSMutableDictionary *)conditions;
-(void)setConditions:(NSMutableDictionary *)arg1 ;
-(id)initWithRawValue:(id)arg1 dataSource:(id)arg2 ;
-(id)evaluateAll;
-(void)_parseRulesFromRawValue:(id)arg1 dataSource:(id)arg2 ;
@end

