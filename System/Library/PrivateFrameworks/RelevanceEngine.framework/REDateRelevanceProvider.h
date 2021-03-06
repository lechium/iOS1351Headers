/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSDateInterval, NSDate;

@interface REDateRelevanceProvider : RERelevanceProvider {

	NSDateInterval* _interval;
	NSDate* _initialRelevanceDate;
	NSDate* _irrelevantDate;
	double _recentDuration;

}

@property (nonatomic,readonly) NSDateInterval * interval;                  //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) NSDate * initialRelevanceDate;              //@synthesize initialRelevanceDate=_initialRelevanceDate - In the implementation block
@property (nonatomic,readonly) NSDate * irrelevantDate;                    //@synthesize irrelevantDate=_irrelevantDate - In the implementation block
@property (nonatomic,readonly) double recentDuration;                      //@synthesize recentDuration=_recentDuration - In the implementation block
+(id)_simulationDateFormatter;
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
-(NSDateInterval *)interval;
-(id)dictionaryEncoding;
-(id)initWithEventInterval:(id)arg1 ;
-(id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2 ;
-(id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2 firstBecomesRelevantDate:(id)arg3 recentDuration:(double)arg4 ;
-(id)initWithEventDate:(id)arg1 ;
-(id)initWithEventDate:(id)arg1 duration:(double)arg2 ;
-(NSDate *)initialRelevanceDate;
-(NSDate *)irrelevantDate;
-(double)recentDuration;
@end

