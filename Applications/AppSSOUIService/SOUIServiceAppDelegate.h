//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"

@class NSString, UIWindow;

@interface SOUIServiceAppDelegate : UIResponder <UIApplicationDelegate>
{
    UIWindow *_window;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100002fe8
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0000000100002ed4
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100002e18
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000100002d5c
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100002ca0
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100002be4
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100002b24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

