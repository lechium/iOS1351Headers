//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface LoadingIndicatorViewController : UIViewController
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_messageLabel;	// 16 = 0x10
    UIActivityIndicatorView *_spinnerView;	// 24 = 0x18
    NSString *_titleText;	// 32 = 0x20
    NSString *_messageText;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000037a4
@property(retain, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property __weak UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(nonatomic) __weak UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)dealloc;	// IMP=0x0000000100003658
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000035f0
- (void)viewDidLoad;	// IMP=0x0000000100003528
- (id)initWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x0000000100003488
- (id)init;	// IMP=0x00000001000033dc

@end

