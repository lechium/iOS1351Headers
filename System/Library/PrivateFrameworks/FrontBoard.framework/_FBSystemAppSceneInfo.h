/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FBSScene, UIScene, UIWindow, FBSSceneTransitionContext;

@interface _FBSystemAppSceneInfo : NSObject {

	BOOL _isWindowScene;
	BOOL _hasSentFBSWorkspaceDelegateSceneCreate;
	FBSScene* _FBSScene;
	UIScene* _UIScene;
	UIWindow* _primaryWindow;
	FBSSceneTransitionContext* _pendingTransitionContext;

}

@property (nonatomic,retain) FBSScene * FBSScene;                                               //@synthesize FBSScene=_FBSScene - In the implementation block
@property (nonatomic,retain) UIScene * UIScene;                                                 //@synthesize UIScene=_UIScene - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * primaryWindow;                                   //@synthesize primaryWindow=_primaryWindow - In the implementation block
@property (nonatomic,readonly) BOOL isWindowScene;                                              //@synthesize isWindowScene=_isWindowScene - In the implementation block
@property (assign,nonatomic) BOOL hasSentFBSWorkspaceDelegateSceneCreate;                       //@synthesize hasSentFBSWorkspaceDelegateSceneCreate=_hasSentFBSWorkspaceDelegateSceneCreate - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * pendingTransitionContext;              //@synthesize pendingTransitionContext=_pendingTransitionContext - In the implementation block
-(FBSScene *)FBSScene;
-(void)setFBSScene:(FBSScene *)arg1 ;
-(UIScene *)UIScene;
-(void)setUIScene:(UIScene *)arg1 ;
-(UIWindow *)primaryWindow;
-(void)setPrimaryWindow:(UIWindow *)arg1 ;
-(BOOL)isWindowScene;
-(BOOL)hasSentFBSWorkspaceDelegateSceneCreate;
-(void)setHasSentFBSWorkspaceDelegateSceneCreate:(BOOL)arg1 ;
-(FBSSceneTransitionContext *)pendingTransitionContext;
-(void)setPendingTransitionContext:(FBSSceneTransitionContext *)arg1 ;
@end

