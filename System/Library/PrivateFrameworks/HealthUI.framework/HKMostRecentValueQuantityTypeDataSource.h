/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKQuantityTypeDataSource.h>

@interface HKMostRecentValueQuantityTypeDataSource : HKQuantityTypeDataSource
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_interval:(id)arg1 isEqualToIntervalFromCalendarUnit:(unsigned long long)arg2 ;
-(id)initWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 ;
-(id)_dataSourceValueFromMostRecentQuantity:(id)arg1 quantityDateInterval:(id)arg2 statisticsInterval:(id)arg3 ;
-(id)_middleDateFromInterval:(id)arg1 endDate:(id)arg2 ;
-(id)_dataSourceValueFromStatisticsCollection:(id)arg1 statisticsInterval:(id)arg2 ;
@end
