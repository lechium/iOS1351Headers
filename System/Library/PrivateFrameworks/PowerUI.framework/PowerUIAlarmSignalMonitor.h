/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PowerUI/PowerUISignalMonitor.h>

@protocol PowerUISignalMonitorDelegate, OS_os_log;
@class MTAlarmManager, NSObject, NSString;

@interface PowerUIAlarmSignalMonitor : NSObject <PowerUISignalMonitor> {

	MTAlarmManager* _alarmManager;
	id<PowerUISignalMonitorDelegate> _delegate;
	NSObject*<OS_os_log> _log;

}

@property (retain) MTAlarmManager * alarmManager;                          //@synthesize alarmManager=_alarmManager - In the implementation block
@property (retain) id<PowerUISignalMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                               //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)monitorWithDelegate:(id)arg1 ;
-(id<PowerUISignalMonitorDelegate>)delegate;
-(void)setDelegate:(id<PowerUISignalMonitorDelegate>)arg1 ;
-(NSObject*<OS_os_log>)log;
-(id)initWithDelegate:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)startMonitoring;
-(void)stopMonitoring;
-(MTAlarmManager *)alarmManager;
-(id)sleepAlarm;
-(id)nextAlarm;
-(void)setAlarmManager:(MTAlarmManager *)arg1 ;
-(unsigned long long)signalID;
-(id)requiredFullChargeDate;
-(void)sourceInformationChangedNotification:(id)arg1 ;
-(id)bedtimeEndAtDate:(id)arg1 ;
@end

