/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface FPGracePeriodTimer : NSObject {

	/*^block*/id _action;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	double _delay;
	NSObject*<OS_dispatch_source> _timer;
	double _expectedFiringTimeSinceReferenceDate;

}
-(void)suppress;
-(void)_createTimer;
-(id)initWithAction:(/*^block*/id)arg1 callbackQueue:(id)arg2 delay:(double)arg3 ;
-(void)arm;
-(id)prettyDescription;
@end

