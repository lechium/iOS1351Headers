/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class PSSpecifier, PSListController, NSString;

@interface PSUICellularDataPlanListGroup : NSObject <PSSpecifierGroup> {

	PSSpecifier* _groupSpecifier;
	PSListController* _listController;

}

@property (assign,nonatomic,__weak) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * groupSpecifier;                   //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(PSSpecifier *)groupSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSListController *)listController;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)setListController:(PSListController *)arg1 ;
-(void)addNewPlanPressed:(id)arg1 ;
-(void)selectPlanWithSpecifier:(id)arg1 ;
-(void)listController:(id)arg1 didSelectSpecifier:(id)arg2 ;
@end
