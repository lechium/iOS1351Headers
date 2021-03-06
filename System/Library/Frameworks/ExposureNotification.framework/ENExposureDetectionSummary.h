/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSArray, NSDictionary;

@interface ENExposureDetectionSummary : NSObject <CUXPCCodable> {

	unsigned char _maximumRiskScore;
	NSArray* _attenuationDurations;
	long long _daysSinceLastExposure;
	unsigned long long _matchedKeyCount;
	double _maximumRiskScoreFullRange;
	NSDictionary* _metadata;
	double _riskScoreSumFullRange;

}

@property (nonatomic,copy) NSArray * attenuationDurations;                    //@synthesize attenuationDurations=_attenuationDurations - In the implementation block
@property (assign,nonatomic) long long daysSinceLastExposure;                 //@synthesize daysSinceLastExposure=_daysSinceLastExposure - In the implementation block
@property (assign,nonatomic) unsigned long long matchedKeyCount;              //@synthesize matchedKeyCount=_matchedKeyCount - In the implementation block
@property (assign,nonatomic) unsigned char maximumRiskScore;                  //@synthesize maximumRiskScore=_maximumRiskScore - In the implementation block
@property (assign,nonatomic) double maximumRiskScoreFullRange;                //@synthesize maximumRiskScoreFullRange=_maximumRiskScoreFullRange - In the implementation block
@property (assign,nonatomic) double riskScoreSumFullRange;                    //@synthesize riskScoreSumFullRange=_riskScoreSumFullRange - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                  //@synthesize metadata=_metadata - In the implementation block
-(id)description;
-(NSDictionary *)metadata;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(NSArray *)attenuationDurations;
-(void)setAttenuationDurations:(NSArray *)arg1 ;
-(long long)daysSinceLastExposure;
-(void)setDaysSinceLastExposure:(long long)arg1 ;
-(unsigned long long)matchedKeyCount;
-(void)setMatchedKeyCount:(unsigned long long)arg1 ;
-(unsigned char)maximumRiskScore;
-(void)setMaximumRiskScore:(unsigned char)arg1 ;
-(double)maximumRiskScoreFullRange;
-(void)setMaximumRiskScoreFullRange:(double)arg1 ;
-(double)riskScoreSumFullRange;
-(void)setRiskScoreSumFullRange:(double)arg1 ;
@end

