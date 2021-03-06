/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class HDDemoDataFoodDatabase, NSArray;

@interface HDDemoDataFoodSampleGenerator : HDDemoDataBaseSampleGenerator {

	HDDemoDataFoodDatabase* _foodDatabase;
	double _nextMealTime;
	double _nextBreakfastTime;
	double _nextLunchTime;
	double _nextSnackTime;
	double _nextDinnerTime;
	double _lastMealTime;
	NSArray* _lastMeal;
	double _nextBloodGlucoseSampleTime;
	double _nextBloodGlucoseFingerStickSampleTime;
	double _nextBloodGlucoseMealTime;
	double _lastBloodGlucose;
	double _nextInsulinPumpBasalSampleTime;
	double _carbohydratesLeftToDigest;
	double _bloodGlucoseCarbohydrateGlycemicRate;
	double _bloodGlucoseDecreaseRateDueToInsulin;
	double _nextWaterConsumedSampleTime;

}

@property (nonatomic,retain) HDDemoDataFoodDatabase * foodDatabase;                     //@synthesize foodDatabase=_foodDatabase - In the implementation block
@property (assign,nonatomic) double nextMealTime;                                       //@synthesize nextMealTime=_nextMealTime - In the implementation block
@property (assign,nonatomic) double nextBreakfastTime;                                  //@synthesize nextBreakfastTime=_nextBreakfastTime - In the implementation block
@property (assign,nonatomic) double nextLunchTime;                                      //@synthesize nextLunchTime=_nextLunchTime - In the implementation block
@property (assign,nonatomic) double nextSnackTime;                                      //@synthesize nextSnackTime=_nextSnackTime - In the implementation block
@property (assign,nonatomic) double nextDinnerTime;                                     //@synthesize nextDinnerTime=_nextDinnerTime - In the implementation block
@property (assign,nonatomic) double lastMealTime;                                       //@synthesize lastMealTime=_lastMealTime - In the implementation block
@property (nonatomic,copy) NSArray * lastMeal;                                          //@synthesize lastMeal=_lastMeal - In the implementation block
@property (assign,nonatomic) double nextBloodGlucoseSampleTime;                         //@synthesize nextBloodGlucoseSampleTime=_nextBloodGlucoseSampleTime - In the implementation block
@property (assign,nonatomic) double nextBloodGlucoseFingerStickSampleTime;              //@synthesize nextBloodGlucoseFingerStickSampleTime=_nextBloodGlucoseFingerStickSampleTime - In the implementation block
@property (assign,nonatomic) double nextBloodGlucoseMealTime;                           //@synthesize nextBloodGlucoseMealTime=_nextBloodGlucoseMealTime - In the implementation block
@property (assign,nonatomic) double lastBloodGlucose;                                   //@synthesize lastBloodGlucose=_lastBloodGlucose - In the implementation block
@property (assign,nonatomic) double nextInsulinPumpBasalSampleTime;                     //@synthesize nextInsulinPumpBasalSampleTime=_nextInsulinPumpBasalSampleTime - In the implementation block
@property (assign,nonatomic) double carbohydratesLeftToDigest;                          //@synthesize carbohydratesLeftToDigest=_carbohydratesLeftToDigest - In the implementation block
@property (assign,nonatomic) double bloodGlucoseCarbohydrateGlycemicRate;               //@synthesize bloodGlucoseCarbohydrateGlycemicRate=_bloodGlucoseCarbohydrateGlycemicRate - In the implementation block
@property (assign,nonatomic) double bloodGlucoseDecreaseRateDueToInsulin;               //@synthesize bloodGlucoseDecreaseRateDueToInsulin=_bloodGlucoseDecreaseRateDueToInsulin - In the implementation block
@property (assign,nonatomic) double nextWaterConsumedSampleTime;                        //@synthesize nextWaterConsumedSampleTime=_nextWaterConsumedSampleTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)generateFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3 ;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(void)generateWaterAndCaffeineSampleForTodayIfNeededWith:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(double)totalDailyInsulinTherapyRequirementForDemoPerson:(id)arg1 ;
-(long long)mealTypeForTime:(double)arg1 ;
-(id)_mealForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(BOOL)_isTypicalNutritionTrackingQuantityType:(id)arg1 ;
-(double)_computeNutrientForDemoPerson:(id)arg1 atTime:(double)arg2 mealItem:(id)arg3 quantityType:(id)arg4 ;
-(id)basalInsulinInjectionForDemoPerson:(id)arg1 quantityType:(id)arg2 totalDailyInsulinInUnits:(double)arg3 sampleDate:(id)arg4 ;
-(id)bolusInsulinDeliveryForFoodItems:(id)arg1 totalDailyInsulinInUnits:(double)arg2 ;
-(id)bloodGlucoseForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)basalInsulinPumpDeliveryForDemoPerson:(id)arg1 quantityType:(id)arg2 totalDailyInsulinInUnits:(double)arg3 currentTime:(double)arg4 sampleDate:(id)arg5 ;
-(id)waterConsumedForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)_computeMealTimeForDemoPerson:(id)arg1 fromTime:(double)arg2 mealTimeType:(long long)arg3 timeMean:(double)arg4 stdDev:(double)arg5 ;
-(double)_computeBloodGlucoseForDemoPerson:(id)arg1 atTime:(double)arg2 weight:(double)arg3 ;
-(double)basalInsulinDeliveryForTotalDailyInsulinInUnits:(double)arg1 timeInterval:(double)arg2 ;
-(HDDemoDataFoodDatabase *)foodDatabase;
-(double)_nextMealTimeForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(BOOL)_isDemoPersonConsumingCaffeine:(id)arg1 atTime:(double)arg2 ;
-(void)_generateRandomLastMeal;
-(id)_lastMeal;
-(void)setFoodDatabase:(HDDemoDataFoodDatabase *)arg1 ;
-(double)nextMealTime;
-(void)setNextMealTime:(double)arg1 ;
-(double)nextBreakfastTime;
-(void)setNextBreakfastTime:(double)arg1 ;
-(double)nextLunchTime;
-(void)setNextLunchTime:(double)arg1 ;
-(double)nextSnackTime;
-(void)setNextSnackTime:(double)arg1 ;
-(double)nextDinnerTime;
-(void)setNextDinnerTime:(double)arg1 ;
-(double)lastMealTime;
-(void)setLastMealTime:(double)arg1 ;
-(NSArray *)lastMeal;
-(void)setLastMeal:(NSArray *)arg1 ;
-(double)nextBloodGlucoseSampleTime;
-(void)setNextBloodGlucoseSampleTime:(double)arg1 ;
-(double)nextBloodGlucoseFingerStickSampleTime;
-(void)setNextBloodGlucoseFingerStickSampleTime:(double)arg1 ;
-(double)nextBloodGlucoseMealTime;
-(void)setNextBloodGlucoseMealTime:(double)arg1 ;
-(double)lastBloodGlucose;
-(void)setLastBloodGlucose:(double)arg1 ;
-(double)nextInsulinPumpBasalSampleTime;
-(void)setNextInsulinPumpBasalSampleTime:(double)arg1 ;
-(double)carbohydratesLeftToDigest;
-(void)setCarbohydratesLeftToDigest:(double)arg1 ;
-(double)bloodGlucoseCarbohydrateGlycemicRate;
-(void)setBloodGlucoseCarbohydrateGlycemicRate:(double)arg1 ;
-(double)bloodGlucoseDecreaseRateDueToInsulin;
-(void)setBloodGlucoseDecreaseRateDueToInsulin:(double)arg1 ;
-(double)nextWaterConsumedSampleTime;
-(void)setNextWaterConsumedSampleTime:(double)arg1 ;
@end

