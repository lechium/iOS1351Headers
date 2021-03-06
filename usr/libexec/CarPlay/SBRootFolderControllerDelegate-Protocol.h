//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBFolderControllerDelegate-Protocol.h"

@class SBIconListView, SBRootFolderController, SBViewControllerTransitionContext, UIView, UIViewPropertyAnimator;

@protocol SBRootFolderControllerDelegate <SBFolderControllerDelegate>

@optional
- (void)rootFolderController:(SBRootFolderController *)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 didOverscrollOnFirstPageByAmount:(double)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 didChangeSidebarVisibilityProgress:(double)arg2;
- (SBIconListView *)externalDockIconListViewForRootFolderController:(SBRootFolderController *)arg1;
- (void)rootFolderController:(SBRootFolderController *)arg1 willUsePropertyAnimator:(UIViewPropertyAnimator *)arg2 toTransitionToState:(long long)arg3;
- (void)rootFolderController:(SBRootFolderController *)arg1 willUseTransitionContext:(SBViewControllerTransitionContext *)arg2 toTransitionToState:(long long)arg3;
- (void)rootFolderController:(SBRootFolderController *)arg1 statusBarInsetsDidChange:(struct UIEdgeInsets)arg2;
- (UIView *)backgroundViewForEditingDoneButtonForRootFolderController:(SBRootFolderController *)arg1;
- (UIView *)backgroundViewForDockForRootFolderController:(SBRootFolderController *)arg1;
- (double)preferredExternalDockVerticalMarginForRootFolderController:(SBRootFolderController *)arg1;
- (double)externalDockHeightForRootFolderController:(SBRootFolderController *)arg1;
- (double)maxExternalDockHeightForRootFolderController:(SBRootFolderController *)arg1;
- (double)distanceToTopOfSpotlightIconsForRootFolderController:(SBRootFolderController *)arg1;
- (void)rootFolderController:(SBRootFolderController *)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(struct CGPoint)arg2;
- (_Bool)rootFolderControllerCanUseSeparateWindowForRotation:(SBRootFolderController *)arg1;
@end

