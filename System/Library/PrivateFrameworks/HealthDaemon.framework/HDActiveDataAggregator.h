/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDDataAggregator.h>

@protocol OS_dispatch_queue;
@class NSLock, NSMutableDictionary, _HKDelayedOperation, NSObject;

@interface HDActiveDataAggregator : HDDataAggregator {

	NSLock* _aggregationLock;
	NSMutableDictionary* _currentAggregationStates;
	_HKDelayedOperation* _delayedAggregationOperation;
	NSObject*<OS_dispatch_queue> _delayedAggregationQueue;

}
-(double)aggregationIntervalForCollector:(id)arg1 ;
-(id)aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 freezeSeries:(BOOL)arg6 error:(id*)arg7 ;
-(id)initialAggregationState;
-(id)initWithDataCollectionManager:(id)arg1 ;
-(Class)sensorDatumClass;
-(void)unregisterDataCollector:(id)arg1 ;
-(double)aggregationInterval;
-(void)_reconsiderDelayedAggregation;
-(void)_requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 freezeSeries:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_aggregateForAllDevicesForCollector:(id)arg1 date:(id)arg2 mode:(long long)arg3 freezeSeries:(BOOL)arg4 ;
-(void)_aggregateForCollector:(id)arg1 device:(id)arg2 requestedAggregationDate:(id)arg3 mode:(long long)arg4 freezeSeries:(BOOL)arg5 ;
-(BOOL)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id*)arg4 ;
-(void)requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 freezeSeries:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)recomputeCollectorConfiguration;
-(void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3 ;
-(id)configurationForCollector:(id)arg1 ;
@end

