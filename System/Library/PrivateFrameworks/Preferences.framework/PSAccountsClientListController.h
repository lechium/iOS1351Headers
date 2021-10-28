/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSAccountsClientListController : PSListController {

	BOOL _noAccountsSetUp;
	BOOL _showExtraVC;
	PSSpecifier* _accountSpecifier;
	id _acObserver;
	int accountUpdateThrottle;

}
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifierForID:(id)arg1 ;
-(void)setSpecifiers:(id)arg1 ;
-(void)updateAccountSpecifier;
-(id)requestedAccountDataclass;
-(id)_visibleAccountTypeIDs;
-(BOOL)_isAccountModificationDisabledByRestrictions;
@end
