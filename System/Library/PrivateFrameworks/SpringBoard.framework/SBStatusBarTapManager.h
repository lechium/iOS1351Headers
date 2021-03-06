/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface SBStatusBarTapManager : NSObject {

	NSMutableDictionary* _statusBarOverridesToRecentScenes;
	NSMutableDictionary* _statusBarOverridesToRecentSceneResetTimers;

}
-(id)_workspace;
-(BOOL)handleTapForStyleOverrides:(int)arg1 ;
-(BOOL)canHandleTapForStatusBarStyleOverrides:(int)arg1 ;
-(BOOL)_isUILocked;
-(id)_handlerForStyleOverrides:(int)arg1 ;
-(void)_addRecentlyTappedApplicationDestinations:(id)arg1 forStyleOverrides:(int)arg2 ;
-(BOOL)_performAfterAttemptingUnlockForAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_handlerForStyleOverrides:(int)arg1 orOutApplications:(id*)arg2 ;
-(id)_allApplicationDestinationsForApplications:(id)arg1 ;
-(id)_foregroundApplicationDestinationsForApplications:(id)arg1 ;
-(id)_appDestinationForNextSceneToVisitForApps:(id)arg1 styleOverrides:(int)arg2 ;
-(id)_recentlyTappedApplicationDestinationsForStyleOverrides:(int)arg1 ;
-(void)_resetRecentlyTappedSceneIdentifiersForStyleOverrides:(int)arg1 ;
-(void)_scheduleResetRecentlyTappedSceneIdentifiersForStyleOverrides:(int)arg1 ;
@end

