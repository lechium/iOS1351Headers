//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

@class MISSING_TYPE, UIWindow;

@interface _TtC6Health11AppDelegate : UIResponder
{
    MISSING_TYPE *window;	// 8 = 0x8
    MISSING_TYPE *introFlowManager;	// 16 = 0x10
    MISSING_TYPE *pendingUserActivities;	// 24 = 0x18
    MISSING_TYPE *pendingURLs;	// 32 = 0x20
    MISSING_TYPE *pluginsHandlingNotifications;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000236cc
- (id)init;	// IMP=0x000000010002381c
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100023604
- (void)application:(id)arg1 didDecodeRestorableStateWithCoder:(id)arg2;	// IMP=0x0000000100023538
- (_Bool)application:(id)arg1 shouldSaveApplicationState:(id)arg2;	// IMP=0x00000001000234cc
- (_Bool)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;	// IMP=0x00000001000233ec
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100023358
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100023204
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0000000100023200
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100023134
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000100023130
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x000000010002312c
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100023128
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100023120
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010002306c
@property(nonatomic, retain) UIWindow *window; // @synthesize window;

@end

