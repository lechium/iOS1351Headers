/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBForcePressToFullScreenAppLayoutSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _fromAppLayout;
	SBAppLayout* _toAppLayout;
	long long _startingEnvironmentMode;

}
-(long long)wallpaperStyle;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(long long)backdropBlurType;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(unsigned long long)numberOfAppLayoutsToCacheSnapshots;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 effectiveStartingEnvironmentMode:(long long)arg4 ;
@end
