//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, _TtC8AppStore16DynamicTypeLabel;

@interface _TtC8AppStore17DeveloperLinkView : UIView
{
    MISSING_TYPE *disclosureImageView;	// 8 = 0x8
    MISSING_TYPE *primaryLabel;	// 16 = 0x10
    MISSING_TYPE *secondaryLabel;	// 24 = 0x18
    MISSING_TYPE *tapHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000b0980
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityTitleLabel;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000b08e0
- (void)didTapLink:(id)arg1;	// IMP=0x00000001000b070c
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x00000001000b02e4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000b0114
- (void)layoutSubviews;	// IMP=0x00000001000b00e8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000afe1c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000afdfc

@end

