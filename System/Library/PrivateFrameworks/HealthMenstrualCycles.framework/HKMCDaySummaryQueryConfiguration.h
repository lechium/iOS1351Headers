/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@interface HKMCDaySummaryQueryConfiguration : HKQueryServerConfiguration {

	BOOL _ascending;
	long long _limit;
	SCD_Struct_HK0 _dayIndexRange;

}

@property (assign,nonatomic) SCD_Struct_HK0 dayIndexRange;              //@synthesize dayIndexRange=_dayIndexRange - In the implementation block
@property (assign,nonatomic) BOOL ascending;                            //@synthesize ascending=_ascending - In the implementation block
@property (assign,nonatomic) long long limit;                           //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)ascending;
-(long long)limit;
-(void)setLimit:(long long)arg1 ;
-(void)setAscending:(BOOL)arg1 ;
-(SCD_Struct_HK0)dayIndexRange;
-(void)setDayIndexRange:(SCD_Struct_HK0)arg1 ;
@end
