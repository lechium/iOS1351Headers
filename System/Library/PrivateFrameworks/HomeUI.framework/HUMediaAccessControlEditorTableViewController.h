/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUMediaAccessControlEditorModuleControllerDelegate.h>

@class HMHome, HUMediaAccessControlEditorModuleController, NSString;

@interface HUMediaAccessControlEditorTableViewController : HUItemTableViewController <HUMediaAccessControlEditorModuleControllerDelegate> {

	HMHome* _home;
	HUMediaAccessControlEditorModuleController* _accessControlEditorModuleController;

}

@property (nonatomic,readonly) HUMediaAccessControlEditorModuleController * accessControlEditorModuleController;              //@synthesize accessControlEditorModuleController=_accessControlEditorModuleController - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                                                 //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMHome *)home;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)initWithHome:(id)arg1 ;
-(id)itemModuleControllers;
-(void)accessControlEditorModuleController:(id)arg1 didUpdateAccessControl:(id)arg2 ;
-(HUMediaAccessControlEditorModuleController *)accessControlEditorModuleController;
-(void)_updateFooterView:(id)arg1 forSection:(long long)arg2 ;
@end
