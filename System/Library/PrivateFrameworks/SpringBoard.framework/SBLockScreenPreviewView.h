/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, SBFLockScreenDateView, _UILegibilityLabel, UIStatusBar, _UILegibilitySettings, SBWallpaperController, SBUILegibilityView, UILabel, CSPageControl, SBUICallToActionLabel, SBUIProudLockIconView, CSQuickActionsView, SBHomeGrabberView;

@interface SBLockScreenPreviewView : UIView {

	UIView* _wallpaperView;
	SBFLockScreenDateView* _dateView;
	_UILegibilityLabel* _slideToUnlockLegibilityLabel;
	UIStatusBar* _statusBar;
	_UILegibilitySettings* _legibilitySettings;
	SBWallpaperController* _wallpaperController;
	SBUILegibilityView* _cameraView;
	UILabel* _slideToUnlockView;
	CSPageControl* _dashBoardPageControl;
	SBUICallToActionLabel* _callToActionLabel;
	SBUIProudLockIconView* _proudLockIconView;
	CSQuickActionsView* _quickActionsView;
	SBHomeGrabberView* _homeGrabberView;

}
-(void)layoutSubviews;
-(void)_layoutDateView;
-(void)_layoutWallpaperView;
-(void)_layoutQuickActionsView;
-(void)_layoutPageControl;
-(void)_layoutCallToActionLabel;
-(void)_setupWallpaperViewWithImage:(id)arg1 ;
-(void)_setupDateViewWithOptions:(unsigned long long)arg1 ;
-(void)_setupStatusBar;
-(void)_setupPageControl;
-(void)_setupCallToActionLabel;
-(void)_setupProudLockIconView;
-(void)_setupQuickActionView;
-(void)_setupHomeGrabberView;
-(void)_layoutStatusBar;
-(void)_layoutProudLockIconView;
-(void)_layoutHomeGrabberView;
-(id)initWithFrame:(CGRect)arg1 wallpaperController:(id)arg2 options:(unsigned long long)arg3 wallpaperImage:(id)arg4 ;
@end

