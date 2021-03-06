/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, HAMenstrualAlgorithmsStats;

@interface HAMenstrualAlgorithmsAnalysis : NSObject {

	NSArray* _menstruationPredictions;
	NSArray* _fertilityPredictions;
	HAMenstrualAlgorithmsStats* _stats;

}

@property (nonatomic,retain) NSArray * menstruationPredictions;               //@synthesize menstruationPredictions=_menstruationPredictions - In the implementation block
@property (nonatomic,retain) NSArray * fertilityPredictions;                  //@synthesize fertilityPredictions=_fertilityPredictions - In the implementation block
@property (nonatomic,retain) HAMenstrualAlgorithmsStats * stats;              //@synthesize stats=_stats - In the implementation block
-(HAMenstrualAlgorithmsStats *)stats;
-(void)setStats:(HAMenstrualAlgorithmsStats *)arg1 ;
-(NSArray *)menstruationPredictions;
-(void)setMenstruationPredictions:(NSArray *)arg1 ;
-(NSArray *)fertilityPredictions;
-(void)setFertilityPredictions:(NSArray *)arg1 ;
@end

