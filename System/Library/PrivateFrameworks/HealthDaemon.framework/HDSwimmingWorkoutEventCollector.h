/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDWorkoutEventCollector.h>

@protocol OS_dispatch_queue;
@class CMSwimTracker, CMSwimData, NSDate, NSObject;

@interface HDSwimmingWorkoutEventCollector : HDWorkoutEventCollector {

	CMSwimTracker* _swimTracker;
	CMSwimData* _referenceSwimData;
	CMSwimData* _lastSwimData;
	NSDate* _currentSegmentStartDate;
	NSObject*<OS_dispatch_queue> _workoutEventQueue;

}
+(BOOL)isAvailableInCurrentHardware;
-(void)stop;
-(void)startWithSessionId:(id)arg1 ;
-(void)requestPendingEventsThroughDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithProfile:(id)arg1 delegate:(id)arg2 ;
-(BOOL)supportsWorkoutActivityType:(unsigned long long)arg1 ;
-(void)_queue_startCollectionWithSessionId:(id)arg1 ;
-(void)_queue_stopCollection;
-(void)_queue_addSegmentEventWithFallbackEndDate:(id)arg1 ;
-(void)_queue_querySwimDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_errorOccurred:(id)arg1 ;
-(void)_queue_processSwimData:(id)arg1 error:(id)arg2 ;
-(void)_queue_addLapEventForSwimData:(id)arg1 ;
-(void)_queue_addSegmentEventForSwimData:(id)arg1 ;
@end

