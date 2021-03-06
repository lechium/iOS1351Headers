/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDSleepAlarmAWDSleepAlarmStatistics : PBCodable <NSCopying> {

	long long _mean;
	long long _median;
	long long _percentile25;
	long long _percentile75;
	long long _stddev;
	SCD_Struct_HD9 _has;

}

@property (assign,nonatomic) BOOL hasMean; 
@property (assign,nonatomic) long long mean;                      //@synthesize mean=_mean - In the implementation block
@property (assign,nonatomic) BOOL hasStddev; 
@property (assign,nonatomic) long long stddev;                    //@synthesize stddev=_stddev - In the implementation block
@property (assign,nonatomic) BOOL hasPercentile25; 
@property (assign,nonatomic) long long percentile25;              //@synthesize percentile25=_percentile25 - In the implementation block
@property (assign,nonatomic) BOOL hasPercentile75; 
@property (assign,nonatomic) long long percentile75;              //@synthesize percentile75=_percentile75 - In the implementation block
@property (assign,nonatomic) BOOL hasMedian; 
@property (assign,nonatomic) long long median;                    //@synthesize median=_median - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)mean;
-(void)setMean:(long long)arg1 ;
-(void)setHasMean:(BOOL)arg1 ;
-(BOOL)hasMean;
-(long long)median;
-(void)setMedian:(long long)arg1 ;
-(void)setHasMedian:(BOOL)arg1 ;
-(BOOL)hasMedian;
-(void)setStddev:(long long)arg1 ;
-(void)setPercentile25:(long long)arg1 ;
-(void)setPercentile75:(long long)arg1 ;
-(void)setHasStddev:(BOOL)arg1 ;
-(BOOL)hasStddev;
-(void)setHasPercentile25:(BOOL)arg1 ;
-(BOOL)hasPercentile25;
-(void)setHasPercentile75:(BOOL)arg1 ;
-(BOOL)hasPercentile75;
-(long long)stddev;
-(long long)percentile25;
-(long long)percentile75;
@end

