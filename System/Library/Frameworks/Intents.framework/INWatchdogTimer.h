/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface INWatchdogTimer : NSObject {

	double _interval;
	NSObject*<OS_dispatch_source> _timerSource;
	BOOL _isStopped;
	double _remainingInterval;
	double _startTime;
	NSObject*<OS_dispatch_queue> _internalQueue;

}
-(void)cancel;
-(void)stop;
-(void)start;
-(void)_reset;
-(void)_start;
-(void)_stop;
-(void)_cancel;
-(BOOL)_isCanceled;
-(BOOL)isCanceled;
-(id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(/*^block*/id)arg2 ;
-(id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(/*^block*/id)arg3 ;
-(BOOL)cancelIfNotAlreadyCanceled;
-(BOOL)_cancelIfNotAlreadyCanceled;
@end

