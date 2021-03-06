/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivacySettingsUI/PUITCCAccessController.h>

@protocol OS_dispatch_group;
@class ENManager, NSObject, PSSpecifier;

@interface PUIBluetoothController : PUITCCAccessController {

	ENManager* _enmanager;
	NSObject*<OS_dispatch_group> _enmanagerActivationGroup;
	PSSpecifier* _covidSpecifier;

}

@property (nonatomic,retain) ENManager * enmanager;                                              //@synthesize enmanager=_enmanager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> enmanagerActivationGroup;              //@synthesize enmanagerActivationGroup=_enmanagerActivationGroup - In the implementation block
@property (nonatomic,retain) PSSpecifier * covidSpecifier;                                       //@synthesize covidSpecifier=_covidSpecifier - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)reloadCovidEnabled;
-(BOOL)supportsExposureNotifications;
-(ENManager *)enmanager;
-(void)setEnmanager:(ENManager *)arg1 ;
-(void)setEnmanagerActivationGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)enmanagerActivationGroup;
-(id)exposureNotificationsLabel:(id)arg1 ;
-(void)setCovidSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)covidSpecifier;
-(void)exposureTapped:(id)arg1 ;
-(BOOL)isExposureNotificationFeatureActive;
-(void)fetchActiveAppIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSupportedWithCompletion:(/*^block*/id)arg1 ;
-(void)performAfterActivation:(/*^block*/id)arg1 ;
-(BOOL)isExposureNotificationsEnabledFromTCC;
-(id)enabledExposureNotificationApps;
@end

