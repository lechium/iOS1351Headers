/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride <NSObject>
@required
-(long long)_statusBarStyle;
-(CGRect*)statusBarAvoidanceFrame;
-(id)_statusBarPartStyles;
-(double)_statusBarAlpha;
-(int)statusBarStyleOverridesToSuppress;
-(id)statusBarSceneIdentifier;
-(id)statusBarControllingSceneHandle;
-(long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(BOOL)arg2;
-(BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
-(long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
-(BOOL)_suppressInheritedPartStyles;
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(long long)_fallbackInterfaceOrientation;

@end

