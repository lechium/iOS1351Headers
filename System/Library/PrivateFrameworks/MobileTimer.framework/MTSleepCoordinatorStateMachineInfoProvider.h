/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class MTAlarm, NSDate;


@protocol MTSleepCoordinatorStateMachineInfoProvider <MTStateMachineInfoProvider>
@property (nonatomic,readonly) MTAlarm * sleepAlarm; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) unsigned long long sleepTimeOutMinutes; 
@required
-(NSDate *)currentDate;
-(MTAlarm *)sleepAlarm;
-(unsigned long long)sleepTimeOutMinutes;

@end

