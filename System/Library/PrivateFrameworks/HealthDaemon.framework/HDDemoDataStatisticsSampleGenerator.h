/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSArray;

@interface HDDemoDataStatisticsSampleGenerator : HDDemoDataBaseSampleGenerator {

	linear_congruential_engine<unsigned int, 48271, 0, 2147483647> _generator;
	normal_distribution<double> _distribution;
	NSArray* _pseudoRandomDoubles;

}

@property (nonatomic,copy) NSArray * pseudoRandomDoubles;              //@synthesize pseudoRandomDoubles=_pseudoRandomDoubles - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(double)pseudoRandomDoubleFromTime:(double)arg1 ;
-(double)computeNoiseFromTime:(double)arg1 stdDev:(double)arg2 ;
-(double)computeStatisticalTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3 ;
-(id)_createPseudoRandomDoubles;
-(double)_pseudoRandomDoubleFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3 ;
-(double)randomDoubleFromGenerator;
-(id)_pseudoRandomDoubles;
-(NSArray *)pseudoRandomDoubles;
-(void)setPseudoRandomDoubles:(NSArray *)arg1 ;
@end
