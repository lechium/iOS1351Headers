/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class NSSet;

@interface _REAggregateRuleCondition : RECondition <REAutomaticExportedInterface> {

	unsigned long long _type;
	NSSet* _conditions;

}

@property (nonatomic,readonly) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSSet * conditions;                    //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)type;
-(NSSet *)conditions;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(id)_inflectionFeatureValuePairs;
-(id)_dependentFeatures;
-(BOOL)_requiresTwoFeatures;
-(BOOL)_validForRanking;
-(BOOL)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2 ;
-(BOOL)_needsProbability;
-(id)initWithConditions:(id)arg1 type:(unsigned long long)arg2 ;
@end
