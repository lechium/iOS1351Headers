//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SiriUIContentButton, UILabel;

@interface SRTapToEditView : UIView
{
    UILabel *_tapToEditLabel;	// 8 = 0x8
    SiriUIContentButton *_circleButton;	// 16 = 0x10
    SiriUIContentButton *_chevronButton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010004ba8c
- (double)_circleToLabelHeightDifference;	// IMP=0x000000010004b9f4
- (void)_setHighlighted:(_Bool)arg1;	// IMP=0x000000010004b93c
- (double)baselineOffsetFromBottom;	// IMP=0x000000010004b8b0
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x000000010004b82c
- (void)layoutSubviews;	// IMP=0x000000010004b624
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010004b5a0
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010004b590
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010004b580
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010004b570
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010004b0a4

@end

