//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE, _TtC8AppStore16DynamicTypeLabel;

@interface _TtC8AppStore24ActionCollectionViewCell : UICollectionViewCell
{
    MISSING_TYPE *textLabel;	// 8 = 0x8
    MISSING_TYPE *separatorView;	// 16 = 0x10
    MISSING_TYPE *accessoryView;	// 24 = 0x18
    MISSING_TYPE *accessory;	// 32 = 0x20
    MISSING_TYPE *searchAdTransparencyButton;	// 72 = 0x48
    MISSING_TYPE *isDisplayingSearchAd;	// 80 = 0x50
    MISSING_TYPE *isVertical;	// 81 = 0x51
    MISSING_TYPE *lazilyCreatedArtworkView;	// 88 = 0x58
    MISSING_TYPE *accessoryAction;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001002ca43c
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityTextLabel;
- (void)accessoryDidActionWithSender:(id)arg1;	// IMP=0x00000001002ca358
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001002ca180
- (void)layoutSubviews;	// IMP=0x00000001002ca038
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001002c9c24
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001002c9c04

@end

