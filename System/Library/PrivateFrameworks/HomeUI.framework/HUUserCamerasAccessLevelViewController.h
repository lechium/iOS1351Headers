/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUItemTableViewController.h>

@class HFUserItem, HUUserCamerasAccessLevelItemManager;

@interface HUUserCamerasAccessLevelViewController : HUItemTableViewController {

	HFUserItem* _userItem;
	HUUserCamerasAccessLevelItemManager* _camerasAccessLevelItemManager;

}

@property (nonatomic,copy,readonly) HFUserItem * userItem;                                                            //@synthesize userItem=_userItem - In the implementation block
@property (nonatomic,copy,readonly) HUUserCamerasAccessLevelItemManager * camerasAccessLevelItemManager;              //@synthesize camerasAccessLevelItemManager=_camerasAccessLevelItemManager - In the implementation block
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(HFUserItem *)userItem;
-(id)initWithUserItem:(id)arg1 home:(id)arg2 ;
-(HUUserCamerasAccessLevelItemManager *)camerasAccessLevelItemManager;
@end
