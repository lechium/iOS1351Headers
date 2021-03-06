/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKValueDataProvider.h>

@interface HKSleepCurrentValueDataProvider : HKValueDataProvider
-(id)currentValue;
-(id)fetchOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_queryDateRangeFromSampleDate:(id)arg1 ;
-(id)_currentSleepQueryWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchQueryResultFromDate:(id)arg1 toDate:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

