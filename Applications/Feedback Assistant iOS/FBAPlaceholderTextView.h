//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextView.h>

@class UILabel;

@interface FBAPlaceholderTextView : UITextView
{
    UILabel *_placeholderLabel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000f9d4
@property(readonly, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
- (void)setText:(id)arg1;	// IMP=0x000000010000f974
- (void)_updatePlaceholderVisibility;	// IMP=0x000000010000f848
- (void)layoutSubviews;	// IMP=0x000000010000f63c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000f4ac

@end
