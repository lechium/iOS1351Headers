/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FBScene, SBDeviceApplicationSceneHandle, UIApplicationSceneClientSettings, FBSSceneTransitionContext;

@interface SBInternalClientSettingObserverContext : NSObject {

	FBScene* _scene;
	SBDeviceApplicationSceneHandle* _sceneHandle;
	UIApplicationSceneClientSettings* _oldClientSettings;
	UIApplicationSceneClientSettings* _updatedClientSettings;
	FBSSceneTransitionContext* _transition;

}

@property (nonatomic,retain) FBScene * scene;                                                       //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) SBDeviceApplicationSceneHandle * sceneHandle;                          //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (nonatomic,retain) UIApplicationSceneClientSettings * oldClientSettings;                  //@synthesize oldClientSettings=_oldClientSettings - In the implementation block
@property (nonatomic,retain) UIApplicationSceneClientSettings * updatedClientSettings;              //@synthesize updatedClientSettings=_updatedClientSettings - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transition;                                //@synthesize transition=_transition - In the implementation block
-(FBScene *)scene;
-(FBSSceneTransitionContext *)transition;
-(void)setScene:(FBScene *)arg1 ;
-(void)setTransition:(FBSSceneTransitionContext *)arg1 ;
-(SBDeviceApplicationSceneHandle *)sceneHandle;
-(UIApplicationSceneClientSettings *)updatedClientSettings;
-(void)setUpdatedClientSettings:(UIApplicationSceneClientSettings *)arg1 ;
-(void)setSceneHandle:(SBDeviceApplicationSceneHandle *)arg1 ;
-(void)setOldClientSettings:(UIApplicationSceneClientSettings *)arg1 ;
-(UIApplicationSceneClientSettings *)oldClientSettings;
@end
