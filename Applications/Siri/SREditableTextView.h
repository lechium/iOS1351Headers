//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SRUtteranceCorrectionTextViewDelegate-Protocol.h"

@class NSString, SRSpeechRecognizedCorrectionTextView, UIVisualEffectView;
@protocol SREditableTextViewDelegate;

@interface SREditableTextView : UIView <SRUtteranceCorrectionTextViewDelegate>
{
    struct NSDirectionalEdgeInsets _edgeInsets;	// 8 = 0x8
    SRSpeechRecognizedCorrectionTextView *_textView;	// 40 = 0x28
    UIVisualEffectView *_blurView;	// 48 = 0x30
    double _topOffsetForTextView;	// 56 = 0x38
    double _heightOffsetForTextView;	// 64 = 0x40
    _Bool _editable;	// 72 = 0x48
    _Bool _didCorrect;	// 73 = 0x49
    id <SREditableTextViewDelegate> _delegate;	// 80 = 0x50
    long long _textAlignment;	// 88 = 0x58
}

+ (double)insertionAnimatedZPosition;	// IMP=0x000000010002a93c
- (void).cxx_destruct;	// IMP=0x000000010002b464
@property(nonatomic) _Bool didCorrect; // @synthesize didCorrect=_didCorrect;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) __weak id <SREditableTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)utteranceTextDidReceiveReturnKey:(id)arg1;	// IMP=0x000000010002b318
- (void)utteranceTextDidResignFirstResponder:(id)arg1;	// IMP=0x000000010002b2c0
- (void)utteranceTextDidBecomeFirstResponder:(id)arg1;	// IMP=0x000000010002b2b4
- (double)_indentWidth;	// IMP=0x000000010002b280
- (void)textViewDidChange:(id)arg1;	// IMP=0x000000010002b1e4
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x000000010002b1bc
- (_Bool)textViewShouldBeginEditing:(id)arg1;	// IMP=0x000000010002b118
- (void)setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;	// IMP=0x000000010002b0a0
- (void)_adjustLineSpacing;	// IMP=0x000000010002af88
- (void)endEditingAndCorrect:(_Bool)arg1;	// IMP=0x000000010002aec0
- (void)beginEditing;	// IMP=0x000000010002aeb4
- (void)_requestKeyboardFocusAndBecomeFirstResponder;	// IMP=0x000000010002ad8c
- (void)_handleTap:(id)arg1;	// IMP=0x000000010002ad40
- (_Bool)isFirstResponder;	// IMP=0x000000010002ad28
- (_Bool)resignFirstResponder;	// IMP=0x000000010002acd0
- (_Bool)canResignFirstResponder;	// IMP=0x000000010002acb8
- (void)layoutSubviews;	// IMP=0x000000010002ab7c
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000010002ab48
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010002aae0
@property(copy, nonatomic) NSString *text;
- (double)baselineOffsetFromBottom;	// IMP=0x000000010002a9a4
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x000000010002a948
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010002a4b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
