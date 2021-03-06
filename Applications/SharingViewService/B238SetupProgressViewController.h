//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "B238SetupBaseViewController.h"

@class NSObject, NSString, UIActivityIndicatorView, UIImageView, UILabel, UIView, _TtC18SharingViewService20SVSAdjustedImageView;
@protocol OS_dispatch_source;

@interface B238SetupProgressViewController : B238SetupBaseViewController
{
    _TtC18SharingViewService20SVSAdjustedImageView *_imageView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UIView *_progressView;	// 48 = 0x30
    UIActivityIndicatorView *_progressSpinner;	// 56 = 0x38
    UILabel *_progressLabel;	// 64 = 0x40
    NSString *_progressTextPending;	// 72 = 0x48
    UIImageView *_progressDoneImage;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_progressTextTimer;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010003182c
- (void)_updateProgressText:(id)arg1 afterDelay:(double)arg2;	// IMP=0x00000001000316ec
- (void)handleProgressEvent:(unsigned int)arg1;	// IMP=0x0000000100031290
- (void)handleDismissButton:(id)arg1;	// IMP=0x0000000100031200
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100031140
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100030e20

@end

