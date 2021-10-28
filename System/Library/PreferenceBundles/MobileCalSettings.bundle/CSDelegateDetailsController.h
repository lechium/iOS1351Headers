/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/EKUIAccountRefresherDelegate.h>

@class EKSource, CalendarModel, EKUIAccountRefresher, NSString;

@interface CSDelegateDetailsController : PSListController <EKUIAccountRefresherDelegate> {

	EKSource* _source;
	CalendarModel* _model;
	EKUIAccountRefresher* _currentAccountRefresher;
	BOOL _reloadingAccount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(void)accountRefreshFinished:(id)arg1 ;
-(void)cleanupAccountRefresher;
-(void)_setShowDelegationCalendar:(id)arg1 ;
-(id)_showDelegationCalendar;
-(BOOL)_shouldShowNotificationSetting;
-(BOOL)_canChangeNotificationSetting;
-(void)_setShowNotifications:(id)arg1 ;
-(id)_showNotifications;
-(BOOL)_canChangeDefaultCalendar;
-(BOOL)_shouldShowSpinner;
-(void)_setDefaultCalendar:(id)arg1 specifier:(id)arg2 ;
-(id)_defaultCalendar;
-(void)_refreshAccounts;
@end
