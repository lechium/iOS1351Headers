//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

@class MISSING_TYPE, NSString;

@interface _TtC18SharingViewService21SVSCardViewController : SVSBaseViewController
{
    MISSING_TYPE *containerHeightConstraint;	// 8 = 0x8
    MISSING_TYPE *centerCardVerticallyConstraint;	// 16 = 0x10
    MISSING_TYPE *titleLabel;	// 24 = 0x18
    MISSING_TYPE *primaryButton;	// 32 = 0x20
    MISSING_TYPE *secondaryButton;	// 40 = 0x28
    MISSING_TYPE *dismissButton;	// 48 = 0x30
    MISSING_TYPE *actions;	// 56 = 0x38
    MISSING_TYPE *showsDismissButton;	// 64 = 0x40
    MISSING_TYPE *contentViewConstraints;	// 72 = 0x48
    MISSING_TYPE *contentView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100017a60
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100017bd0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100017b48
- (id)initWithMainController:(id)arg1;	// IMP=0x0000000100017b08
- (void)dismissButtonTapped:(id)arg1;	// IMP=0x000000010001776c
- (void)updateViewConstraints;	// IMP=0x00000001000169f0
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x0000000100016430
- (void)loadView;	// IMP=0x0000000100016408
@property(nonatomic, copy) NSString *title;

@end

