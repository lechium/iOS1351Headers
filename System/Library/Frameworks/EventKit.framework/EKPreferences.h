/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CalPreferences, NSArray;

@interface EKPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (assign,nonatomic) double travelEngineThrottlePeriod; 
@property (assign,nonatomic) BOOL refiringReminderAlarmsEnabled; 
@property (assign,nonatomic) BOOL useShortReminderSnoozeInterval; 
@property (assign,nonatomic) BOOL useShortReminderRefireInterval; 
@property (assign,nonatomic) BOOL alwaysSetArrivedAndSettledForReminders; 
@property (assign,nonatomic) unsigned long long lastConfirmedSplashScreenVersion; 
@property (readonly) BOOL bypassSplashScreen; 
@property (assign,nonatomic) BOOL showDeclinedEvents; 
@property (assign,nonatomic) BOOL alertInviteeDeclines; 
@property (nonatomic,readonly) NSArray * deselectedCalendarIdentifiers; 
@property (nonatomic,readonly) NSArray * deselectedCalendarSyncHashes; 
@property (nonatomic,readonly) NSArray * deselectedCalendarSyncIdentifiers; 
@property (nonatomic,retain) NSArray * selectedCalendarIdentifiers; 
+(id)shared;
-(id)init;
-(BOOL)showDeclinedEvents;
-(NSArray *)deselectedCalendarIdentifiers;
-(void)setShowDeclinedEvents:(BOOL)arg1 ;
-(NSArray *)deselectedCalendarSyncHashes;
-(BOOL)bypassSplashScreen;
-(unsigned long long)lastConfirmedSplashScreenVersion;
-(void)setLastConfirmedSplashScreenVersion:(unsigned long long)arg1 ;
-(void)_setDeselectedCalendars_iOS:(id)arg1 ;
-(void)_setDeselectedCalendarIdentifiers:(id)arg1 ;
-(void)_setDeselectedCalendarSyncIdentifiers:(id)arg1 ;
-(void)_setDeselectedCalendarSyncHashes:(id)arg1 ;
-(double)travelEngineThrottlePeriod;
-(void)setTravelEngineThrottlePeriod:(double)arg1 ;
-(BOOL)refiringReminderAlarmsEnabled;
-(void)setRefiringReminderAlarmsEnabled:(BOOL)arg1 ;
-(BOOL)useShortReminderSnoozeInterval;
-(void)setUseShortReminderSnoozeInterval:(BOOL)arg1 ;
-(BOOL)useShortReminderRefireInterval;
-(void)setUseShortReminderRefireInterval:(BOOL)arg1 ;
-(BOOL)alwaysSetArrivedAndSettledForReminders;
-(void)setAlwaysSetArrivedAndSettledForReminders:(BOOL)arg1 ;
-(void)setDeselectedCalendars:(id)arg1 ;
-(NSArray *)deselectedCalendarSyncIdentifiers;
-(NSArray *)selectedCalendarIdentifiers;
-(void)setSelectedCalendarIdentifiers:(NSArray *)arg1 ;
-(BOOL)alertInviteeDeclines;
-(void)setAlertInviteeDeclines:(BOOL)arg1 ;
@end

