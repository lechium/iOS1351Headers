/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNScheduler.h>

@class CNQueue, NSString;

@interface CNVirtualScheduler : NSObject <CNScheduler> {

	unsigned long long _clock;
	unsigned long long _nextSchedulableTick;
	unsigned long long _stopTime;
	CNQueue* _queue;
	BOOL _isStarted;
	BOOL _isPerforming;

}

@property (nonatomic,readonly) unsigned long long nextSchedulableTick;              //@synthesize nextSchedulableTick=_nextSchedulableTick - In the implementation block
@property (nonatomic,readonly) unsigned long long stopTime;                         //@synthesize stopTime=_stopTime - In the implementation block
@property (nonatomic,readonly) CNQueue * queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL isStarted;                                      //@synthesize isStarted=_isStarted - In the implementation block
@property (nonatomic,readonly) BOOL isPerforming;                                   //@synthesize isPerforming=_isPerforming - In the implementation block
@property (readonly) unsigned long long clock;                                      //@synthesize clock=_clock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double timestamp; 
+(unsigned long long)timeWithDelay:(double)arg1 fromClock:(unsigned long long)arg2 ;
+(id)providerWithScheduler:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(CNQueue *)queue;
-(BOOL)isStarted;
-(void)stop;
-(void)start;
-(void)performBlock:(/*^block*/id)arg1 ;
-(double)timestamp;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(unsigned long long)_nextSchedulableTick;
-(id)_scheduleBlock:(/*^block*/id)arg1 atTime:(unsigned long long)arg2 ;
-(BOOL)_performJobs;
-(unsigned long long)clock;
-(void)advanceTo:(unsigned long long)arg1 ;
-(unsigned long long)stopTime;
-(void)advanceBy:(unsigned long long)arg1 ;
-(BOOL)hasJobsScheduled;
-(unsigned long long)nextSchedulableTick;
-(BOOL)isPerforming;
@end

