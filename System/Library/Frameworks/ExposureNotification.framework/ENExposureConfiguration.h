/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSDictionary, NSArray;

@interface ENExposureConfiguration : NSObject <CUXPCCodable> {

	unsigned char _attenuationLevelValuesMap[8];
	unsigned char _daysSinceLastExposureLevelValuesMap[8];
	unsigned char _durationLevelValuesMap[8];
	unsigned char _transmissionRiskLevelValuesMap[8];
	unsigned char _minimumRiskScore;
	NSDictionary* _metadata;
	double _minimumRiskScoreFullRange;
	NSArray* _attenuationDurationThresholds;
	NSArray* _attenuationLevelValues;
	double _attenuationWeight;
	NSArray* _daysSinceLastExposureLevelValues;
	double _daysSinceLastExposureWeight;
	NSArray* _durationLevelValues;
	double _durationWeight;
	NSArray* _transmissionRiskLevelValues;
	double _transmissionRiskWeight;

}

@property (nonatomic,copy) NSDictionary * metadata;                                       //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) unsigned char minimumRiskScore;                              //@synthesize minimumRiskScore=_minimumRiskScore - In the implementation block
@property (assign,nonatomic) double minimumRiskScoreFullRange;                            //@synthesize minimumRiskScoreFullRange=_minimumRiskScoreFullRange - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attenuationDurationThresholds;              //@synthesize attenuationDurationThresholds=_attenuationDurationThresholds - In the implementation block
@property (nonatomic,copy) NSArray * attenuationLevelValues;                              //@synthesize attenuationLevelValues=_attenuationLevelValues - In the implementation block
@property (assign,nonatomic) double attenuationWeight;                                    //@synthesize attenuationWeight=_attenuationWeight - In the implementation block
@property (nonatomic,copy) NSArray * daysSinceLastExposureLevelValues;                    //@synthesize daysSinceLastExposureLevelValues=_daysSinceLastExposureLevelValues - In the implementation block
@property (assign,nonatomic) double daysSinceLastExposureWeight;                          //@synthesize daysSinceLastExposureWeight=_daysSinceLastExposureWeight - In the implementation block
@property (nonatomic,copy) NSArray * durationLevelValues;                                 //@synthesize durationLevelValues=_durationLevelValues - In the implementation block
@property (assign,nonatomic) double durationWeight;                                       //@synthesize durationWeight=_durationWeight - In the implementation block
@property (nonatomic,copy) NSArray * transmissionRiskLevelValues;                         //@synthesize transmissionRiskLevelValues=_transmissionRiskLevelValues - In the implementation block
@property (assign,nonatomic) double transmissionRiskWeight;                               //@synthesize transmissionRiskWeight=_transmissionRiskWeight - In the implementation block
-(id)init;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(double)attenuationLevelValueWithAttenuation:(unsigned char)arg1 ;
-(double)daysSinceLastExposureLevelValueWithDays:(long long)arg1 ;
-(double)durationLevelValueWithDuration:(double)arg1 ;
-(double)transmissionLevelValueWithTransmissionRiskLevel:(unsigned char)arg1 ;
-(double)attenuationWeight;
-(double)daysSinceLastExposureWeight;
-(double)durationWeight;
-(double)transmissionRiskWeight;
-(unsigned char)minimumRiskScore;
-(void)setMinimumRiskScore:(unsigned char)arg1 ;
-(double)minimumRiskScoreFullRange;
-(void)setMinimumRiskScoreFullRange:(double)arg1 ;
-(NSArray *)attenuationDurationThresholds;
-(NSArray *)attenuationLevelValues;
-(void)setAttenuationLevelValues:(NSArray *)arg1 ;
-(void)setAttenuationWeight:(double)arg1 ;
-(NSArray *)daysSinceLastExposureLevelValues;
-(void)setDaysSinceLastExposureLevelValues:(NSArray *)arg1 ;
-(void)setDaysSinceLastExposureWeight:(double)arg1 ;
-(NSArray *)durationLevelValues;
-(void)setDurationLevelValues:(NSArray *)arg1 ;
-(void)setDurationWeight:(double)arg1 ;
-(NSArray *)transmissionRiskLevelValues;
-(void)setTransmissionRiskLevelValues:(NSArray *)arg1 ;
-(void)setTransmissionRiskWeight:(double)arg1 ;
@end

