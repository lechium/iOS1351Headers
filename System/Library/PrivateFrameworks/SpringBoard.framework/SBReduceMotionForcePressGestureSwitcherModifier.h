/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>

@class SBAppLayout, SBForcePressGestureStateTrackingSwitcherModifier;

@interface SBReduceMotionForcePressGestureSwitcherModifier : SBGestureSwitcherModifier {

	SBAppLayout* _selectedAppLayout;
	long long _startingEnvironmentMode;
	SBForcePressGestureStateTrackingSwitcherModifier* _stateTrackingModifier;

}
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(long long)wallpaperStyle;
-(id)layoutSettings;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(long long)backdropBlurType;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(unsigned long long)numberOfAppLayoutsToCacheSnapshots;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(long long)liveContentRasterizationStyle;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(BOOL)wantsMinificationFilter;
-(void)didMoveToParentModifier:(id)arg1 ;
-(BOOL)wantsResignActiveAssertion;
-(long long)sceneDeactivationReason;
-(long long)keyboardSuppressionMode;
-(double)_effectivePanProgress;
-(unsigned long long)_indexOfSelectedAppLayout;
-(double)initialPanThreshold;
-(id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3 ;
@end
