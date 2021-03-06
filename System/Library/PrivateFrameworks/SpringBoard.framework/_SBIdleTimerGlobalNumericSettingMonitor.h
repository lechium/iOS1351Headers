/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/_SBIdleTimerGlobalSettingMonitor.h>

@class NSNumber;

@interface _SBIdleTimerGlobalNumericSettingMonitor : _SBIdleTimerGlobalSettingMonitor {

	NSNumber* _settingCache;
	/*^block*/id _fetchSettingFromSource;

}

@property (nonatomic,readonly) NSNumber * numericValue; 
-(void)dealloc;
-(NSNumber *)numericValue;
-(id)formattedValue;
-(BOOL)_updateCache;
-(id)initWithLabel:(id)arg1 delegate:(id)arg2 updatingForNotification:(id)arg3 fetchingWith:(/*^block*/id)arg4 ;
-(void)_settingChanged:(id)arg1 ;
@end

