/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKSampleType, NSArray;

@interface HKHorizontalTimePeriodDataSource : HKHealthQueryChartCacheDataSource {

	HKSampleType* _sampleType;
	/*^block*/id _userInfoCreationBlock;
	NSArray* _valueOrder;

}

@property (nonatomic,retain) HKSampleType * sampleType;              //@synthesize sampleType=_sampleType - In the implementation block
@property (nonatomic,copy) id userInfoCreationBlock;                 //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
@property (nonatomic,retain) NSArray * valueOrder;                   //@synthesize valueOrder=_valueOrder - In the implementation block
-(HKSampleType *)sampleType;
-(void)setSampleType:(HKSampleType *)arg1 ;
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)userInfoCreationBlock;
-(void)_handleSamples:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_organizeSamplesByValueAndDateInterval:(id)arg1 ;
-(NSArray *)valueOrder;
-(void)setValueOrder:(NSArray *)arg1 ;
@end
