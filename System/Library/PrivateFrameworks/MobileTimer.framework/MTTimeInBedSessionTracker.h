/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileTimer/MTBedtimeSessionTracker.h>

@interface MTTimeInBedSessionTracker : MTBedtimeSessionTracker
+(BOOL)_trackingEnabledForSleepAlarm:(id)arg1 ;
+(BOOL)_shouldUseBedtimeDismissedDateForAlarm:(id)arg1 ;
-(void)startSession;
-(void)sleepCoordinator:(id)arg1 bedtimeDNDManuallyExited:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)endSessionWithDate:(id)arg1 reason:(unsigned long long)arg2 ;
-(Class)sessionClass;
-(id)processedSessionForSession:(id)arg1 ;
-(id)_createBedtimeSessionWithUserWakeTime:(id)arg1 endReason:(unsigned long long)arg2 ;
@end
