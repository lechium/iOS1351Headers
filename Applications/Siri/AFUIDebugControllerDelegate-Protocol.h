//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSURL, SAUIAddViews, UIViewController;
@protocol AFUIDebugControlling;

@protocol AFUIDebugControllerDelegate
- (void)debugController:(id <AFUIDebugControlling>)arg1 openURL:(NSURL *)arg2;
- (void)getScreenshotImageForDebugController:(id <AFUIDebugControlling>)arg1 withCompletion:(void (^)(UIImage *))arg2;
- (void)debugController:(id <AFUIDebugControlling>)arg1 wantsDismissViewController:(UIViewController *)arg2;
- (void)debugController:(id <AFUIDebugControlling>)arg1 wantsPresentViewController:(UIViewController *)arg2;
- (UIViewController *)presentedViewControllerForDebugController;
- (void)debugController:(id <AFUIDebugControlling>)arg1 stateDidChangeWithAddViews:(SAUIAddViews *)arg2;
@end
