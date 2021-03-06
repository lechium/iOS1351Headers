/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class SBApplicationSceneHandle;


@protocol SBApplicationSceneViewControlling <SBSceneViewControlling>
@property (nonatomic,readonly) SBApplicationSceneHandle * sceneHandle; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long overrideStatusBarStyle; 
@property (assign,nonatomic,__weak) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; 
@required
-(double)statusBarAlpha;
-(SBApplicationSceneHandle *)sceneHandle;
-(long long)overrideStatusBarStyle;
-(id<SBApplicationSceneViewControllingStatusBarDelegate>)applicationSceneStatusBarDelegate;
-(void)setApplicationSceneStatusBarDelegate:(id)arg1;

@end

