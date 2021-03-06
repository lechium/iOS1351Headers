/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class SPUIAppService, NSHashTable, FBSDisplayLayoutMonitor, BSTimer, RBSProcessHandle, RBSAssertion, NSObject;

@interface SPUISpotlightSceneManager : NSObject {

	SPUIAppService* _appService;
	NSHashTable* _managedScenes;
	NSHashTable* _foregroundScenes;
	FBSDisplayLayoutMonitor* _layoutMonitor;
	BSTimer* _watchdogTimer;
	RBSProcessHandle* _spotlightProcessHandle;
	RBSAssertion* _initializationAssertions;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSHashTable * managedScenes;                            //@synthesize managedScenes=_managedScenes - In the implementation block
@property (retain) NSHashTable * foregroundScenes;                         //@synthesize foregroundScenes=_foregroundScenes - In the implementation block
@property (retain) FBSDisplayLayoutMonitor * layoutMonitor;                //@synthesize layoutMonitor=_layoutMonitor - In the implementation block
@property (retain) BSTimer * watchdogTimer;                                //@synthesize watchdogTimer=_watchdogTimer - In the implementation block
@property (retain) RBSProcessHandle * spotlightProcessHandle;              //@synthesize spotlightProcessHandle=_spotlightProcessHandle - In the implementation block
@property (retain) RBSAssertion * initializationAssertions;                //@synthesize initializationAssertions=_initializationAssertions - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)removeScene:(id)arg1 ;
-(void)addScene:(id)arg1 ;
-(BSTimer *)watchdogTimer;
-(void)setWatchdogTimer:(BSTimer *)arg1 ;
-(void)launchSpotlightIfNeededWithForegroundPriority:(BOOL)arg1 ;
-(void)sceneWillForeground:(id)arg1 ;
-(void)sceneWillBackground:(id)arg1 ;
-(void)setManagedScenes:(NSHashTable *)arg1 ;
-(void)setForegroundScenes:(NSHashTable *)arg1 ;
-(void)setLayoutMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(RBSProcessHandle *)spotlightProcessHandle;
-(void)setSpotlightProcessHandle:(RBSProcessHandle *)arg1 ;
-(RBSAssertion *)initializationAssertions;
-(void)setInitializationAssertions:(RBSAssertion *)arg1 ;
-(NSHashTable *)managedScenes;
-(NSHashTable *)foregroundScenes;
-(void)applyAssertionAsNeeded;
-(FBSDisplayLayoutMonitor *)layoutMonitor;
@end

