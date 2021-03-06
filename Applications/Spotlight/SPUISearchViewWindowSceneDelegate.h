//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPUISearchViewControllerDelegate-Protocol.h"
#import "UIWindowSceneDelegate-Protocol.h"
#import "_UISceneSettingsDiffAction-Protocol.h"

@class NSString, SPUISearchViewController, UINavigationController, UIWindow;

@interface SPUISearchViewWindowSceneDelegate : NSObject <SPUISearchViewControllerDelegate, _UISceneSettingsDiffAction, UIWindowSceneDelegate>
{
    UIWindow *_searchViewWindow;	// 8 = 0x8
    SPUISearchViewController *_searchViewController;	// 16 = 0x10
    UINavigationController *_navController;	// 24 = 0x18
    unsigned long long _currentPresentationSource;	// 32 = 0x20
    unsigned long long _currentIntent;	// 40 = 0x28
    double _currentRevealProgress;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000061b4
@property double currentRevealProgress; // @synthesize currentRevealProgress=_currentRevealProgress;
@property unsigned long long currentIntent; // @synthesize currentIntent=_currentIntent;
@property unsigned long long currentPresentationSource; // @synthesize currentPresentationSource=_currentPresentationSource;
@property(retain) UINavigationController *navController; // @synthesize navController=_navController;
@property(retain) SPUISearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain) UIWindow *searchViewWindow; // @synthesize searchViewWindow=_searchViewWindow;
- (void)dismissSearchViewWithReason:(unsigned long long)arg1;	// IMP=0x000000010000609c
- (void)backgroundSearchScene;	// IMP=0x0000000100005ff8
- (void)searchFieldDidFocus;	// IMP=0x0000000100005ff4
- (void)removeMatchMoveAnimation;	// IMP=0x0000000100005f64
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;	// IMP=0x0000000100005338
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x00000001000052f8
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x00000001000052ec
- (void)updateDistanceToTopOfIcons;	// IMP=0x0000000100005154
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0000000100004e8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

