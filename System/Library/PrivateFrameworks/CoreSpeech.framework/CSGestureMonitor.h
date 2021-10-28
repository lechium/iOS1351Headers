/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSGestureMonitor : CSEventMonitor {

	unsigned long long _wakeGestureTimestamp;
	unsigned long long _dismissalTimestamp;

}

@property (assign,nonatomic) unsigned long long wakeGestureTimestamp;              //@synthesize wakeGestureTimestamp=_wakeGestureTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long dismissalTimestamp;                //@synthesize dismissalTimestamp=_dismissalTimestamp - In the implementation block
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(unsigned long long)wakeGestureTimestamp;
-(unsigned long long)dismissalTimestamp;
-(BOOL)isTriggerHandheld;
-(void)setWakeGestureTimestamp:(unsigned long long)arg1 ;
-(void)setDismissalTimestamp:(unsigned long long)arg1 ;
@end
