//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"

@class MISSING_TYPE, UIWindow;

@interface _TtC8AppStore11AppDelegate : UIResponder <UIApplicationDelegate>
{
    MISSING_TYPE *window;	// 8 = 0x8
    MISSING_TYPE *appHasBeenInBackground;	// 16 = 0x10
    MISSING_TYPE *eventWatchdoge;	// 24 = 0x18
    MISSING_TYPE *urlActionRunner;	// 32 = 0x20
    MISSING_TYPE *quickActionsController;	// 40 = 0x28
    MISSING_TYPE *pendingBootstrap;	// 48 = 0x30
    MISSING_TYPE *pptViewHierarchyProxy;	// 56 = 0x38
    MISSING_TYPE *flowController;	// 64 = 0x40
    MISSING_TYPE *adBootstrap;	// 104 = 0x68
    MISSING_TYPE *freshnessWatchdog;	// 176 = 0xb0
    MISSING_TYPE *pendingOnboarding;	// 184 = 0xb8
    MISSING_TYPE *isOnboardingFinished;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000100194028
- (id)init;	// IMP=0x000000010019426c
- (void)handleDebugActivationFrom:(id)arg1;	// IMP=0x000000010019370c
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100193058
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100192e10
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100192a50
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100192a04
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00000001001928cc
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100192544
@property(nonatomic, retain) UIWindow *window; // @synthesize window;

@end

