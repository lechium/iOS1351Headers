/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBBaseStartupTransition.h>

@class SBBulletinWindowController, SBFUserAuthenticationController, SBApplicationController, SBSetupManager, SBLockScreenManager, SBInitialRestartState;

@interface SBStartupTransitionToSetup : SBBaseStartupTransition {

	SBBulletinWindowController* _bulletinWindowController;
	SBFUserAuthenticationController* _authController;
	SBApplicationController* _appController;
	SBSetupManager* _setupManager;
	SBLockScreenManager* _lockScreenManager;
	SBInitialRestartState* _initialRestartState;

}
-(void)performTransitionWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithDestination:(unsigned long long)arg1 context:(id)arg2 ;
-(id)initWithDestination:(unsigned long long)arg1 context:(id)arg2 initialRestartState:(id)arg3 ;
-(void)_activateSetupWithCompletion:(/*^block*/id)arg1 underLock:(BOOL)arg2 fromSnapshot:(BOOL)arg3 ;
@end

