/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUItemTableViewController.h>

@class HUAccessorySceneListContentViewController, HUAccessorySceneListItemManager;

@interface HUAccessorySceneListViewController : HUItemTableViewController {

	HUAccessorySceneListContentViewController* _existingSceneListContentViewController;
	HUAccessorySceneListContentViewController* _suggestedSceneListContentViewController;

}

@property (nonatomic,retain) HUAccessorySceneListContentViewController * existingSceneListContentViewController;               //@synthesize existingSceneListContentViewController=_existingSceneListContentViewController - In the implementation block
@property (nonatomic,retain) HUAccessorySceneListContentViewController * suggestedSceneListContentViewController;              //@synthesize suggestedSceneListContentViewController=_suggestedSceneListContentViewController - In the implementation block
@property (nonatomic,readonly) HUAccessorySceneListItemManager * itemManager; 
-(void)viewDidLoad;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)initWithServiceLikeItem:(id)arg1 ;
-(id)childViewControllersToPreload;
-(HUAccessorySceneListContentViewController *)existingSceneListContentViewController;
-(HUAccessorySceneListContentViewController *)suggestedSceneListContentViewController;
-(void)setExistingSceneListContentViewController:(HUAccessorySceneListContentViewController *)arg1 ;
-(void)setSuggestedSceneListContentViewController:(HUAccessorySceneListContentViewController *)arg1 ;
@end
