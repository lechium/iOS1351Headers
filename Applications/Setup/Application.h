//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import "UIApplicationDelegate-Protocol.h"

@class NSString, UIWindow;

@interface Application : UIApplication <UIApplicationDelegate>
{
}

- (void)_statusBarTappedWithEvent:(id)arg1;	// IMP=0x00000001000047f4
- (void)_application:(id)arg1 statusBarTouchesEnded:(id)arg2;	// IMP=0x00000001000046c0
- (id)_buddyWindow;	// IMP=0x0000000100004580
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;	// IMP=0x0000000100004520
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x00000001000044d8
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100004490
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100004448
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100004400
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x000000010000437c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
