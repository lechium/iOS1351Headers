/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSHashTable, NSObject;

@interface SKUIMetricsFlushTimer : NSObject {

	NSHashTable* _metricsControllers;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _timerStartTime;

}
+(id)sharedTimer;
-(id)init;
-(void)dealloc;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)addMetricsController:(id)arg1 ;
-(void)removeMetricsController:(id)arg1 ;
-(void)flushAllMetricsControllers;
-(void)reloadFlushInterval;
-(void)_performFlush;
-(void)_cancelFlushTimer;
@end

