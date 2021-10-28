/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libnfshared.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSObject;

@interface NFTimer : NSObject {

	NSObject*<OS_dispatch_source> _src;
	BOOL _monotonic;

}
-(void)dealloc;
-(void)stopTimer;
-(void)startTimer:(double)arg1 ;
-(void)startTimer:(double)arg1 leeway:(double)arg2 ;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)initSleepTimerWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
@end
