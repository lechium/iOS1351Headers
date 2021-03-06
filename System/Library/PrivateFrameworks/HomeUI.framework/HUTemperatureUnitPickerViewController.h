/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>

@class HFSimpleItemManager, NSString;

@interface HUTemperatureUnitPickerViewController : UITableViewController <HFItemManagerDelegate> {

	HFSimpleItemManager* _itemManager;

}

@property (nonatomic,retain) HFSimpleItemManager * itemManager;              //@synthesize itemManager=_itemManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(HFSimpleItemManager *)itemManager;
-(void)setItemManager:(HFSimpleItemManager *)arg1 ;
-(id)_controlItem;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(id)initWithUnitItem:(id)arg1 ;
-(long long)_tableRowToTemperatureUnit:(unsigned long long)arg1 ;
@end

