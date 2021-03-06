/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface QLGracePeriodTimer : NSObject {

	/*^block*/id _action;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	double _delay;
	NSObject*<OS_dispatch_source> _timer;

}

@property (copy) id action;              //@synthesize action=_action - In the implementation block
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)_suppress;
-(void)suppress;
-(void)_createTimer;
-(id)initWithAction:(/*^block*/id)arg1 callbackQueue:(id)arg2 delay:(double)arg3 ;
-(void)arm;
@end

