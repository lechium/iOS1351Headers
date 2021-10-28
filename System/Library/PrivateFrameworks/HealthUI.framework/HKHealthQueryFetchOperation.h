/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKChartCacheFetchOperation.h>

@class HKHealthStore, NSArray;

@interface HKHealthQueryFetchOperation : HKChartCacheFetchOperation {

	HKHealthStore* _healthStore;
	/*^block*/id _clientCompletion;
	/*^block*/id _fetchOperationManager;
	NSArray* _queries;

}

@property (nonatomic,retain) NSArray * queries;              //@synthesize queries=_queries - In the implementation block
-(void)setQueries:(NSArray *)arg1 ;
-(NSArray *)queries;
-(id)initWithHealthStore:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)completedWithResults:(id)arg1 error:(id)arg2 ;
-(void)stopOperation;
-(void)startOperationWithCompletion:(/*^block*/id)arg1 ;
@end
