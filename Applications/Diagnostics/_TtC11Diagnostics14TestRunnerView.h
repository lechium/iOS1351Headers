//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC11Diagnostics8BaseView.h"

@class MISSING_TYPE, UIStackView;

@interface _TtC11Diagnostics14TestRunnerView : _TtC11Diagnostics8BaseView
{
    MISSING_TYPE *fontSizeTestRunner;	// 8 = 0x8
    MISSING_TYPE *fontSizeButton;	// 16 = 0x10
    MISSING_TYPE *verticalPadding;	// 24 = 0x18
    MISSING_TYPE *horizontalPadding;	// 32 = 0x20
    MISSING_TYPE *bottomMarginWithoutButtons;	// 40 = 0x28
    MISSING_TYPE *iconViewWidthHeight;	// 48 = 0x30
    MISSING_TYPE *buttonMinimumSize;	// 56 = 0x38
    MISSING_TYPE *stackView;	// 72 = 0x48
    MISSING_TYPE *runnerContainerView;	// 80 = 0x50
    MISSING_TYPE *buttonContainerView;	// 88 = 0x58
    MISSING_TYPE *titleLabel;	// 96 = 0x60
    MISSING_TYPE *iconView;	// 104 = 0x68
    MISSING_TYPE *progressIndicatorView;	// 112 = 0x70
    MISSING_TYPE *skipButton;	// 120 = 0x78
    MISSING_TYPE *delegate;	// 128 = 0x80
    MISSING_TYPE *containerLayoutUpdateHandler;	// 168 = 0xa8
    MISSING_TYPE *hasExplicitHeight;	// 184 = 0xb8
    MISSING_TYPE *buttonContainerShowingHeightConstraint;	// 192 = 0xc0
    MISSING_TYPE *buttonContainerHidingHeightConstraint;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000100038d18
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100039068
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100039048
- (void)skipPressed;	// IMP=0x0000000100038888
@property(nonatomic, readonly) UIStackView *stackView; // @synthesize stackView;

@end
