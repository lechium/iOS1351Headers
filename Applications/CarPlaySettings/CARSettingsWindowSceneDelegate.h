//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIWindowSceneDelegate-Protocol.h"

@class CARSettingsViewController, NSString, UIWindow, UIWindowScene;

@interface CARSettingsWindowSceneDelegate : NSObject <UIWindowSceneDelegate>
{
    UIWindowScene *_windowScene;	// 8 = 0x8
    UIWindow *_settingsWindow;	// 16 = 0x10
    CARSettingsViewController *_viewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000ad8c
@property(retain, nonatomic) CARSettingsViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIWindow *settingsWindow; // @synthesize settingsWindow=_settingsWindow;
@property(retain, nonatomic) UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x000000010000ab28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
