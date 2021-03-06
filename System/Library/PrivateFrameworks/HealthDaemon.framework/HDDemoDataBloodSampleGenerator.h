/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataBloodSampleGenerator : HDDemoDataBaseSampleGenerator {

	double _nextBloodAlcoholContentSampleTime;

}

@property (assign,nonatomic) double nextBloodAlcoholContentSampleTime;              //@synthesize nextBloodAlcoholContentSampleTime=_nextBloodAlcoholContentSampleTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(id)bloodAlcoholContentForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)_computeNumDrinksTodayForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)nextBloodAlcoholContentSampleTime;
-(void)setNextBloodAlcoholContentSampleTime:(double)arg1 ;
@end

