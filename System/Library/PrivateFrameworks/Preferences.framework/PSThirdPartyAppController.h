/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSSpecifierController.h>
#import <libobjc.A.dylib/PSSystemPolicyForAppDelegate.h>

@class PSSystemPolicyForApp;

@interface PSThirdPartyAppController : PSSpecifierController <PSSystemPolicyForAppDelegate> {

	PSSystemPolicyForApp* _systemPolicy;
	PSSystemPolicyForApp* _appPolicy;

}

@property (nonatomic,retain) PSSystemPolicyForApp * appPolicy;                 //@synthesize appPolicy=_appPolicy - In the implementation block
@property (nonatomic,retain) PSSystemPolicyForApp * systemPolicy;              //@synthesize systemPolicy=_systemPolicy - In the implementation block
-(id)bundle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)_uiValueFromValue:(id)arg1 specifier:(id)arg2 ;
-(id)_valueFromUIValue:(id)arg1 specifier:(id)arg2 ;
-(void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)arg1 ;
-(id)_readToggleSwitchSpecifierValue:(id)arg1 ;
-(void)_setToggleSwitchSpecifierValue:(id)arg1 specifier:(id)arg2 ;
-(void)showPrivacyControllerForSpecifier:(id)arg1 ;
-(PSSystemPolicyForApp *)appPolicy;
-(void)setAppPolicy:(PSSystemPolicyForApp *)arg1 ;
-(void)setSystemPolicy:(PSSystemPolicyForApp *)arg1 ;
-(PSSystemPolicyForApp *)systemPolicy;
-(id)loadSpecifiers;
@end
