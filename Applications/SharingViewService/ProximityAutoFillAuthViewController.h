//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ProximityAutoFillBaseViewController.h"

@class PINEntryView, UIActivityIndicatorView, UILabel, UIView;

@interface ProximityAutoFillAuthViewController : ProximityAutoFillBaseViewController
{
    UIActivityIndicatorView *_activityIndicatorView;	// 32 = 0x20
    UILabel *_infoLabel;	// 40 = 0x28
    PINEntryView *_pinEntryView;	// 48 = 0x30
    UILabel *_pinLabel1;	// 56 = 0x38
    UILabel *_pinLabel2;	// 64 = 0x40
    UILabel *_pinLabel3;	// 72 = 0x48
    UILabel *_pinLabel4;	// 80 = 0x50
    UIView *_pinWell1;	// 88 = 0x58
    UIView *_pinWell2;	// 96 = 0x60
    UIView *_pinWell3;	// 104 = 0x68
    UIView *_pinWell4;	// 112 = 0x70
    _Bool _viewBottomConstantValid;	// 120 = 0x78
    double _viewBottomConstant;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000001000619f0
- (void)showWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;	// IMP=0x00000001000617fc
- (void)_handlePINEntered:(id)arg1;	// IMP=0x00000001000616bc
- (void)_handleKeyboardWillShow:(id)arg1;	// IMP=0x0000000100061350
- (void)handleDismissButton:(id)arg1;	// IMP=0x0000000100061298
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000611b8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100060f1c

@end
