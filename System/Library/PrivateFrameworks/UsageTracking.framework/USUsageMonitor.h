/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection;

@interface USUsageMonitor : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)startMonitoringBudgets:(id)arg1 darwinNotificationName:(id)arg2 notificationTimes:(id)arg3 clientIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)stopMonitoringBudgets:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)checkStatusOfBudgets:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startMonitoringBudgets:(id)arg1 darwinNotificationName:(id)arg2 notificationTimes:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)startMonitoringBudgets:(id)arg1 darwinNotificationName:(id)arg2 notificationTimes:(id)arg3 error:(id*)arg4 ;
-(void)stopMonitoringBudgets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopMonitoringAllBudgetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)checkStatusOfBudgets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)checkStatusOfBudgets:(id)arg1 error:(id*)arg2 ;
-(void)checkStatusOfAllBudgetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)checkStatusOfBudgets:(id)arg1 clientIdentifiers:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

