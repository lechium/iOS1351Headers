/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@class HUItemTableViewController, NSLayoutConstraint, NSString;

@interface HUItemTableOBWelcomeController : OBWelcomeController <HUPreloadableViewController> {

	HUItemTableViewController* _itemTableViewController;
	NSLayoutConstraint* _itemTableViewHeightConstraint;

}

@property (nonatomic,retain) HUItemTableViewController * itemTableViewController;              //@synthesize itemTableViewController=_itemTableViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * itemTableViewHeightConstraint;               //@synthesize itemTableViewHeightConstraint=_itemTableViewHeightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)updateViewConstraints;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4 ;
-(id)hu_preloadContent;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 itemTableViewController:(id)arg4 ;
-(HUItemTableViewController *)itemTableViewController;
-(NSLayoutConstraint *)itemTableViewHeightConstraint;
-(void)setItemTableViewController:(HUItemTableViewController *)arg1 ;
-(void)setItemTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

