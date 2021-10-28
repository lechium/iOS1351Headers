/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class MTObserverStore, NSObject;

@interface MTSpringboardStartMonitor : NSObject {

	int _notifyToken;
	BOOL _isSpringBoardStarted;
	MTObserverStore* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_stopMonitoring;
-(BOOL)_checkSpringBoardStarted;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)didReceiveSpringboardStarted:(BOOL)arg1 ;
-(void)enumerateObservers:(/*^block*/id)arg1 ;
-(BOOL)isSpringboardStarted;
@end
