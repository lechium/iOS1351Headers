//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE, _TtC8AppStore15LockupMediaView, _TtC8AppStore15SmallLockupView, _TtC8AppStore16DynamicTypeLabel, _TtC8AppStore9VideoView;

@interface _TtC8AppStore34MixedMediaLockupCollectionViewCell : UICollectionViewCell
{
    MISSING_TYPE *lockupView;	// 8 = 0x8
    MISSING_TYPE *mediaView;	// 16 = 0x10
    MISSING_TYPE *taglineLabel;	// 24 = 0x18
    MISSING_TYPE *pageTraits;	// 32 = 0x20
    MISSING_TYPE *overrideLockupPosition;	// 40 = 0x28
    MISSING_TYPE *isFixedHeight;	// 41 = 0x29
    MISSING_TYPE *searchAdTransparencyButton;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100055d50
- (void)prepareForReuse;	// IMP=0x0000000100055cac
@property(nonatomic, readonly) _TtC8AppStore15LockupMediaView *accessibilityMediaView;
@property(nonatomic, readonly) _TtC8AppStore9VideoView *accessibilityVideoView;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityTaglineLabel;
@property(nonatomic, readonly) _TtC8AppStore15SmallLockupView *accessibilityLockupView;
- (void)layoutSubviews;	// IMP=0x0000000100055a60
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100055780
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100055760

@end

