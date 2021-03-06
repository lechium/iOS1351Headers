//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class ASToastPresentationWindow, NSString, UIImage, UIImageView, UILabel, UIVisualEffectView;

@interface ASToastViewController : UIViewController
{
    NSString *_message;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    ASToastPresentationWindow *_presentationWindow;	// 24 = 0x18
    UILabel *_primaryLabel;	// 32 = 0x20
    UILabel *_secondaryLabel;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    UIVisualEffectView *_toastView;	// 56 = 0x38
}

+ (id)_fontWithSize:(double)arg1 textStyleAttribute:(struct __CFString *)arg2;	// IMP=0x00000001000079ec
+ (id)_secondaryLabelFont;	// IMP=0x000000010000798c
+ (id)_primaryLabelFont;	// IMP=0x000000010000792c
- (void).cxx_destruct;	// IMP=0x0000000100007c1c
@property(retain, nonatomic) UIVisualEffectView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) ASToastPresentationWindow *presentationWindow; // @synthesize presentationWindow=_presentationWindow;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)_dismissAfterDelay:(double)arg1;	// IMP=0x00000001000076a8
- (void)present;	// IMP=0x0000000100007620
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100006df0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100006c50
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100006bdc
- (void)viewDidLoad;	// IMP=0x000000010000647c
- (id)initWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3;	// IMP=0x0000000100006208

// Remaining properties
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

