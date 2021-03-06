/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBSwitcherContentViewControllerDelegate <NSObject>
@optional
-(void)switcherContentController:(id)arg1 bringAppLayoutToFront:(id)arg2;
-(BOOL)switcherContentController:(id)arg1 shouldResignActiveForStartOfTransition:(id)arg2;
-(id)windowsToExcludeForCrossfadeSnapshotForSwitcherContentController:(id)arg1;
-(void)updateWindowVisibilityForSwitcherContentController:(id)arg1;
-(void)updateUserInteractionEnabledForSwitcherContentController:(id)arg1;
-(void)switcherContentController:(id)arg1 setWallpaperScale:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4;
-(void)switcherContentController:(id)arg1 setHomeScreenScale:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4;
-(void)switcherContentController:(id)arg1 setHomeScreenAlpha:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4;
-(void)switcherContentController:(id)arg1 setDimmingAlpha:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4;
-(void)switcherContentController:(id)arg1 setBackdropBlurProgress:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4;
-(void)switcherContentController:(id)arg1 setContainerStatusBarHidden:(BOOL)arg2 animationDuration:(double)arg3;
-(void)switcherContentController:(id)arg1 handlePlusButtonActionForBundleIdentifier:(id)arg2;
-(void)switcherContentController:(id)arg1 reopenHiddenAppLayoutsWithBundleIdentifier:(id)arg2;
-(void)switcherContentController:(id)arg1 setCursorInteractionsEnabled:(BOOL)arg2;
-(void)switcherContentController:(id)arg1 setWallpaperStyle:(long long)arg2;
-(void)switcherContentController:(id)arg1 setBackdropBlurType:(long long)arg2;
-(void)switcherContentController:(id)arg1 setCacheAsynchronousRenderingSurfaces:(BOOL)arg2;
-(void)switcherContentControllerBeginTethering:(id)arg1;
-(void)switcherContentControllerEndTethering:(id)arg1;
-(void)cancelActiveGestureForSwitcherContentController:(id)arg1;
-(void)switcherContentController:(id)arg1 activatedBestAppSuggestion:(id)arg2;

@required
-(void)switcherContentController:(id)arg1 setContentOrientation:(long long)arg2;
-(void)switcherContentController:(id)arg1 deletedAppLayout:(id)arg2 forReason:(long long)arg3;
-(void)switcherContentController:(id)arg1 performTransitionWithRequest:(id)arg2 gestureInitiated:(BOOL)arg3;

@end

