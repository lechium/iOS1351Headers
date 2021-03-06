/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class _HKExpiringCompletionTimer, NSObject;

@interface _HDFTMProducerMetricTracker : NSObject {

	_HKExpiringCompletionTimer* _timer;
	/*^block*/id _timeoutHandler;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _paused;
	BOOL _metricAvailable;

}

@property (nonatomic,readonly) BOOL metricAvailable;              //@synthesize metricAvailable=_metricAvailable - In the implementation block
-(void)invalidate;
-(void)pause;
-(void)resume;
-(void)_startTimer;
-(id)initWithTimeoutHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)metricReceived;
-(BOOL)metricAvailable;
@end

