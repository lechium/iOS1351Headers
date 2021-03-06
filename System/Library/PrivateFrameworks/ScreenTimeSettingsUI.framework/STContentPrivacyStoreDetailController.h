/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenTimeSettingsUI/STPINListViewController.h>

@class STContentPrivacyListController;

@interface STContentPrivacyStoreDetailController : STPINListViewController {

	STContentPrivacyListController* _contentPrivacyController;

}

@property (__weak) STContentPrivacyListController * contentPrivacyController;              //@synthesize contentPrivacyController=_contentPrivacyController - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setCoordinator:(id)arg1 ;
-(id)specifiers;
-(STContentPrivacyListController *)contentPrivacyController;
-(void)_isLoadedDidChange:(BOOL)arg1 ;
-(void)setContentPrivacyController:(STContentPrivacyListController *)arg1 ;
@end

