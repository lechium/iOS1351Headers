//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIFontDescriptor, UILabel, UIVisualEffectView;

@interface BCSCoachingMessageView : UIView
{
    UIVisualEffectView *_coachingMessageContainerView;	// 8 = 0x8
    UILabel *_coachingMessageLabel;	// 16 = 0x10
    UIFontDescriptor *_fontDescriptor;	// 24 = 0x18
    NSLayoutConstraint *_coachingLabelTopAnchorConstraint;	// 32 = 0x20
    NSLayoutConstraint *_coachingLabelBottomAnchorConstraint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100016ba8
- (void)layoutSubviews;	// IMP=0x0000000100016964
@property(copy, nonatomic) NSString *message;
- (id)init;	// IMP=0x000000010001618c

@end

