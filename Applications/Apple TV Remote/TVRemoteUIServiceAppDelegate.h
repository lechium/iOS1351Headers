//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"

@class NSString, UIWindow;

__attribute__((visibility("hidden")))
@interface TVRemoteUIServiceAppDelegate : UIResponder <UIApplicationDelegate>
{
    UIWindow *_window;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100005000
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0000000100004fd8
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100004fd4
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000100004fd0
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100004fcc
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100004fc8
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100004fc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
