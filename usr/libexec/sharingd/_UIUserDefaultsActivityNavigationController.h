//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "_UIAppearanceRestriction-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIUserDefaultsActivityNavigationController : UINavigationController <_UIAppearanceRestriction>
{
}

+ (_Bool)_preventsAppearanceProxyCustomization;	// IMP=0x000000010007e708
- (_Bool)_viewControllerUnderlapsStatusBar;	// IMP=0x000000010007e8ec
- (double)_statusBarHeightAdjustmentForCurrentOrientation;	// IMP=0x000000010007e888
- (_Bool)_shouldUseContentOverlayInsetsAsStatusBarUnderlapHeight;	// IMP=0x000000010007e7c4
- (void)setPreferredContentSize:(struct CGSize)arg1;	// IMP=0x000000010007e76c
- (struct CGSize)preferredContentSize;	// IMP=0x000000010007e710

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
