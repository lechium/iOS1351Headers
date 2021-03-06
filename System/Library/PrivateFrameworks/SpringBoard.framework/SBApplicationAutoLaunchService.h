/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBFMobileKeyBagObserver.h>

@class SBMainWorkspace, SBApplicationController, SBRestartManager, SBSyncController, SBFMobileKeyBag, NSMutableArray, NSTimer, NSArray, NSString;

@interface SBApplicationAutoLaunchService : NSObject <BSDescriptionProviding, SBFMobileKeyBagObserver> {

	SBMainWorkspace* _mainWorkspace;
	SBApplicationController* _applicationController;
	SBRestartManager* _restartManager;
	SBSyncController* _syncController;
	SBFMobileKeyBag* _keybag;
	NSMutableArray* _queuedApplicationsThrottledForRelaunch;
	NSTimer* _queuedApplicationsThrottledForRelaunchTimer;
	BOOL _autoLaunchSynchronously;

}

@property (assign,setter=_setAutoLaunchSynchronously:,getter=_autoLaunchSynchronously,nonatomic) BOOL autoLaunchSynchronously;                         //@synthesize autoLaunchSynchronously=_autoLaunchSynchronously - In the implementation block
@property (getter=_queuedApplicationsThrottledForRelaunchTimer,nonatomic,readonly) NSTimer * queuedApplicationsThrottledForRelaunchTimer;              //@synthesize queuedApplicationsThrottledForRelaunchTimer=_queuedApplicationsThrottledForRelaunchTimer - In the implementation block
@property (getter=_queuedApplicationsThrottledForRelaunch,nonatomic,readonly) NSArray * queuedApplicationsThrottledForRelaunch;                        //@synthesize queuedApplicationsThrottledForRelaunch=_queuedApplicationsThrottledForRelaunch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)keybagDidUnlockForTheFirstTime:(id)arg1 ;
-(id)_initWithWorkspace:(id)arg1 applicationController:(id)arg2 restartManager:(id)arg3 syncController:(id)arg4 keybag:(id)arg5 ;
-(void)autoLaunchApplicationsIfNecessaryForStartup;
-(void)_noteTerminationAssertionRemovedForApplication:(id)arg1 ;
-(void)_applicationProcessStateDidChange:(id)arg1 ;
-(void)_installedApplicationsDidChange:(id)arg1 ;
-(void)_memoryPressureRelieved:(id)arg1 ;
-(void)_memoryPressureWarn:(id)arg1 ;
-(void)_autoLaunchIfNecessary:(id)arg1 forReason:(unsigned long long)arg2 ;
-(BOOL)_shouldAutoLaunchApplication:(id)arg1 forReason:(unsigned long long)arg2 ;
-(void)_reallyDoAutoLaunchToBackground:(id)arg1 ;
-(void)_invalidateQueuedApplicationsThrottledForRelaunchTimer;
-(void)_launchNextQueuedApplicationThrottledForRelaunch;
-(void)_scheduleThrottledApplicationRelaunchTimerIfNecessary;
-(void)_recalculateVoIPBehaviorForApplication:(id)arg1 withExitContext:(id)arg2 ;
-(void)_scheduleAutoLaunchForApplicationExited:(id)arg1 withExitContext:(id)arg2 ;
-(void)_autoLaunchAppsIfNecessaryAfterFirstUnlock;
-(void)_noteKeybagDidUnlock;
-(BOOL)_autoLaunchSynchronously;
-(void)_setAutoLaunchSynchronously:(BOOL)arg1 ;
-(id)_queuedApplicationsThrottledForRelaunchTimer;
-(id)_queuedApplicationsThrottledForRelaunch;
@end

