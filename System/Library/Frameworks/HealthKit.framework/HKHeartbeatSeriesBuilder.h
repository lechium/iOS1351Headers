/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKSeriesBuilder.h>

@class NSDate, NSMutableDictionary, NSMutableData;

@interface HKHeartbeatSeriesBuilder : HKSeriesBuilder {

	NSDate* _startDate;
	NSMutableDictionary* _mutableMetadata;
	NSMutableData* _mutableHeartbeats;
	unsigned long long _count;
	double _lastHeartbeatTimeInterval;

}
+(unsigned long long)maximumCount;
-(void)_resourceQueue_addMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resourceQueue_addHeartbeatWithTimeIntervalSinceSeriesStartDate:(double)arg1 precededByGap:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_resourceQueue_finishSeriesWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithHealthStore:(id)arg1 device:(id)arg2 startDate:(id)arg3 ;
-(void)addHeartbeatWithTimeIntervalSinceSeriesStartDate:(double)arg1 precededByGap:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)finishSeriesWithCompletion:(/*^block*/id)arg1 ;
-(void)discard;
@end
