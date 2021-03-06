/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>

@protocol HUCameraSmartNotificationSettingsModuleControllerDelegate;
@class NSString;

@interface HUCameraSmartNotificationSettingsModuleController : HUItemTableModuleController <HUSwitchCellDelegate> {

	id<HUCameraSmartNotificationSettingsModuleControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HUCameraSmartNotificationSettingsModuleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUCameraSmartNotificationSettingsModuleControllerDelegate>)delegate;
-(void)setDelegate:(id<HUCameraSmartNotificationSettingsModuleControllerDelegate>)arg1 ;
-(id)initWithModule:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(BOOL)isItemHeader:(id)arg1 ;
@end

