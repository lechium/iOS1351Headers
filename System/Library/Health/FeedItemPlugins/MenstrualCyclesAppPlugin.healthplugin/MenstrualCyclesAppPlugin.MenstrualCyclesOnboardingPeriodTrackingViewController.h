/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OnBoardingKit/OBTableWelcomeController.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@interface MenstrualCyclesAppPlugin.MenstrualCyclesOnboardingPeriodTrackingViewController : OBTableWelcomeController <HKSwitchTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource> {

	 userInfo;
	 delegate;
	 tableViewHeight;
	 $__lazy_storage_$_heightAnchor;

}
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)nextButtonTapped:(id)arg1 ;
@end
