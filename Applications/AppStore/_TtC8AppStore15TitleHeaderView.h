//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class MISSING_TYPE, NSString, UIView, _TtC8AppStore16DynamicTypeLabel;

@interface _TtC8AppStore15TitleHeaderView : UICollectionReusableView
{
    MISSING_TYPE *titleLabel;	// 8 = 0x8
    MISSING_TYPE *detailLabel;	// 16 = 0x10
    MISSING_TYPE *style;	// 24 = 0x18
    MISSING_TYPE *accessoryView;	// 256 = 0x100
    MISSING_TYPE *accessory;	// 264 = 0x108
    MISSING_TYPE *accessoryAction;	// 304 = 0x130
    MISSING_TYPE *separatorLineView;	// 320 = 0x140
    MISSING_TYPE *separatorInset;	// 328 = 0x148
    MISSING_TYPE *allowsAccessibilityLayouts;	// 360 = 0x168
}

- (void).cxx_destruct;	// IMP=0x000000010017064c
@property(nonatomic, readonly) UIView *accessibilityAccessoryView;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityTitleLabel;
@property(nonatomic, copy) NSString *accessibilityLabel;
- (void)prepareForReuse;	// IMP=0x0000000100170198
- (void)layoutSubviews;	// IMP=0x000000010017016c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010016f718
- (void)didTapWithAccessoryView:(id)arg1;	// IMP=0x000000010016f480
- (_Bool)_disableRasterizeInAnimations;	// IMP=0x000000010016e928
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010016e900
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010016e8e0

@end
