//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface AppleTVSetupStartViewController : SVSBaseViewController <UIGestureRecognizerDelegate>
{
    UIButton *_dismissButton;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    UIView *_progressView;	// 48 = 0x30
    UILabel *_progressLabel;	// 56 = 0x38
    UIActivityIndicatorView *_progressSpinner;	// 64 = 0x40
    UIButton *_startButton;	// 72 = 0x48
    _Bool _started;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010001e8a0
- (void)handleTapOutsideView:(id)arg1;	// IMP=0x000000010001e808
- (void)handleStartButton:(id)arg1;	// IMP=0x000000010001df40
- (void)handleDismissButton:(id)arg1;	// IMP=0x000000010001dea8
- (void)handleDeviceSetupNotification:(id)arg1;	// IMP=0x000000010001dc40
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000010001dba0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010001dac4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001d8c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
