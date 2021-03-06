/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PSUISubscriptionContextMenusFactory.h>

@class PSListController, PSSpecifier;

@interface PSUISubscriptionContextMenusProductionFactory : NSObject <PSUISubscriptionContextMenusFactory> {

	BOOL _popViewControllerOnPlanRemoval;
	PSListController* _hostController;
	PSSpecifier* _parentSpecifier;
	PSSpecifier* _groupSpecifier;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * parentSpecifier;                  //@synthesize parentSpecifier=_parentSpecifier - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * groupSpecifier;                   //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (assign,nonatomic) BOOL popViewControllerOnPlanRemoval;                   //@synthesize popViewControllerOnPlanRemoval=_popViewControllerOnPlanRemoval - In the implementation block
-(PSSpecifier *)groupSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(PSSpecifier *)parentSpecifier;
-(void)setParentSpecifier:(PSSpecifier *)arg1 ;
-(BOOL)shouldPopViewControllerOnPlanRemoval;
-(id)createCallingSubgroup;
-(id)createCarrierSpaceSubgroup;
-(id)createNetworkSelectionSubgroup;
-(id)createMyNumberSubgroup;
-(id)createNetworkSettingsSubgroup;
-(id)createSimSubgroup;
-(id)createSimStatusCache;
-(id)createCarrierBundleCache;
-(id)createDataCache;
-(id)createCellularPlanManagerCache;
-(id)createCellularPlanManager;
-(id)createLowDataModeSubgroup;
-(id)createRoamingSpecifiersSubgroup;
-(id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 groupSpecifier:(id)arg3 popViewControllerOnPlanRemoval:(BOOL)arg4 ;
-(BOOL)popViewControllerOnPlanRemoval;
-(void)setPopViewControllerOnPlanRemoval:(BOOL)arg1 ;
@end

