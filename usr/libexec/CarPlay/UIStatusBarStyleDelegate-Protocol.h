//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIStatusBar_Base, UISystemNavigationAction;

@protocol UIStatusBarStyleDelegate <NSObject>
- (void)statusBar:(UIStatusBar_Base *)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;
- (void)statusBar:(UIStatusBar_Base *)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;
- (long long)statusBar:(UIStatusBar_Base *)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;

@optional
- (void)statusBar:(UIStatusBar_Base *)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3 context:(id)arg4;
- (void)statusBar:(UIStatusBar_Base *)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3;
- (UISystemNavigationAction *)statusBarSystemNavigationAction:(UIStatusBar_Base *)arg1;
@end

