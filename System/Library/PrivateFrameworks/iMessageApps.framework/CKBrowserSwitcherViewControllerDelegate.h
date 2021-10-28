/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKBrowserSwitcherViewControllerDelegate <NSObject>
@optional
-(void)switcherViewControllerDidSelectAppManager:(id)arg1 shouldRestoreAppSwitcher:(BOOL)arg2;
-(void)switcherViewControllerDidSelectAppStore:(id)arg1 shouldRestoreAppSwitcher:(BOOL)arg2;
-(void)switcherViewControllerDidStartSwitching:(id)arg1;
-(void)switcherViewController:(id)arg1 didSelectPluginAtIndexPath:(id)arg2;
-(void)switcherViewController:(id)arg1 willShowSelectionViewWithAnimations:(/*^block*/id*)arg2 completion:(/*^block*/id*)arg3;
-(void)switcherViewController:(id)arg1 willHideSelectionViewWithAnimations:(/*^block*/id*)arg2 completion:(/*^block*/id*)arg3;
-(void)switcherViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
-(BOOL)switcherViewControllerShouldShowIconAndTitleWhenCompact:(id)arg1;

@required
-(void)switcherViewControllerDidFinishSwitching:(id)arg1 toViewController:(id)arg2;
-(void)switcherViewControllerDidCollapse:(id)arg1;

@end
