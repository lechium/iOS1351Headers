//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CFXEffectBrowserViewController, UIViewController;

@protocol CFXEffectBrowserContentPresenterDelegate <NSObject>

@optional
- (struct CGSize)expandedAppViewControllerSizeForEffectBrowserViewController:(CFXEffectBrowserViewController *)arg1;
- (void)effectBrowserViewController:(CFXEffectBrowserViewController *)arg1 dismissExpandedAppViewController:(UIViewController *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)effectBrowserViewController:(CFXEffectBrowserViewController *)arg1 presentExpandedAppViewController:(UIViewController *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (_Bool)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(CFXEffectBrowserViewController *)arg1;
- (void)effectBrowserViewController:(CFXEffectBrowserViewController *)arg1 willChangeDockHeight:(double)arg2;
@end
