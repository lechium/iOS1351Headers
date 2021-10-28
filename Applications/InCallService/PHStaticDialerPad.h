//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/TPPhonePad.h>

@class _UIFocusLinearMovementSequence;

@interface PHStaticDialerPad : TPPhonePad
{
    _UIFocusLinearMovementSequence *_linearSequence;	// 112 = 0x70
    int _dialerType;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000001000f1e54
@property int dialerType; // @synthesize dialerType=_dialerType;
- (id)_linearFocusMovementSequences;	// IMP=0x00000001000f1dc4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000f1c74
- (_Bool)canBecomeFocused;	// IMP=0x00000001000f1c6c
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000001000f1bd4
- (float)_yFudge;	// IMP=0x00000001000f1bcc
- (id)_highlightedImage;	// IMP=0x00000001000f1b58
- (id)_keypadImage;	// IMP=0x00000001000f1ad4
- (id)_pressedImage;	// IMP=0x00000001000f1a50
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000f1a40
- (void)keyPressed:(id)arg1;	// IMP=0x00000001000f19c8
- (void)layoutSubviews;	// IMP=0x00000001000f16d0
- (id)initWithDialerType:(int)arg1;	// IMP=0x00000001000f1584

@end
