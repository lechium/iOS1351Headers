/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSBundleController.h>

@class UIAlertController, NSString, NSMutableArray;

@interface WirelessModemBundleController : PSBundleController {

	UIAlertController* _tetheringAlert;
	NSString* _tetheringPhoneNumber;
	NSString* _tetheringURL;
	NSMutableArray* _specifiers;
	BOOL _wifiTetheringSupported;

}
-(void)dealloc;
-(id)initWithParentListController:(id)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(id)getTetheringStatus:(id)arg1 ;
-(void)MISStateChangedNotification:(id)arg1 ;
-(void)updateSpecifiersForState:(int)arg1 andReason:(int)arg2 andButton:(id)arg3 ;
-(void)showSetupAlert:(id)arg1 ;
-(id)_specifiersWithSpecifierMain:(id)arg1 ;
@end
