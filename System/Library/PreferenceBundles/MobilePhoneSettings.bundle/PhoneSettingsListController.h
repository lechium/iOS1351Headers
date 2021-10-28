/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <Preferences/PSListController.h>

@interface PhoneSettingsListController : PSListController {

	CTServerConnectionRef _telephonyServerConnection;

}

@property (nonatomic,readonly) CTServerConnectionRef telephonyServerConnection;              //@synthesize telephonyServerConnection=_telephonyServerConnection - In the implementation block
-(id)init;
-(void)dealloc;
-(id)bundle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)destroyTelephonyServerConnection;
-(void)updateCellStates;
-(void)pushController:(Class)arg1 specifier:(id)arg2 ;
-(id)sheetSpecifierWithTitle:(id)arg1 controller:(Class)arg2 detail:(Class)arg3 ;
-(id)setControlEnabled:(BOOL)arg1 atIndex:(long long)arg2 ;
-(id)setCellEnabled:(BOOL)arg1 atIndex:(unsigned)arg2 ;
-(id)setCellLoading:(BOOL)arg1 atIndex:(unsigned)arg2 ;
-(CTServerConnectionRef)telephonyServerConnection;
@end
