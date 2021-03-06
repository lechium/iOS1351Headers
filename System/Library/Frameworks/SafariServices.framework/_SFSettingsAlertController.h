/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UINavigationController, _SFSettingsAlertContentController, NSArray, _SFSettingsAlertItem;

@interface _SFSettingsAlertController : UIViewController {

	UINavigationController* _navigationController;

}

@property (nonatomic,readonly) _SFSettingsAlertContentController * _rootContentController; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,retain) _SFSettingsAlertItem * focusedItem; 
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(_SFSettingsAlertItem *)focusedItem;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)_pushSubItemsForGroup:(id)arg1 ;
-(_SFSettingsAlertContentController *)_rootContentController;
-(void)addDivider;
-(void)setFocusedItem:(_SFSettingsAlertItem *)arg1 ;
@end

