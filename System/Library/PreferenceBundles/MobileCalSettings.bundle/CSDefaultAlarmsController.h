/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>

@class NSNumber;

@interface CSDefaultAlarmsController : PSListController {

	NSNumber* _defaultAllDayAlarmOffset;
	NSNumber* _defaultTimedAlarmOffset;

}
-(id)specifiers;
-(id)_defaultTimedAlarmOffset;
-(id)_defaultAllDayAlarmOffset;
-(void)setDefaultAlarmOffset:(id)arg1 specifier:(id)arg2 ;
-(id)defaultAlarmOffsetForSpecifier:(id)arg1 ;
-(id)_alarmValuesForAllDay:(BOOL)arg1 ;
-(id)_alarmTitlesForAllDay:(BOOL)arg1 shortened:(BOOL)arg2 ;
-(void)_setEnableTravelAdvisoriesForAutomaticBehavior:(id)arg1 specifier:(id)arg2 ;
-(id)_enableTravelAdvisoriesForAutomaticBehavior:(id)arg1 ;
-(id)_defaultBirthdayAlarmOffset;
@end

