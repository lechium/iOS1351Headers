//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, SBUIAppleLogoView, UILabel;

@interface PBADataRecoveryProgressViewController : UIViewController
{
    SBUIAppleLogoView *_appleLogoView;	// 8 = 0x8
    UILabel *_statusLabel;	// 16 = 0x10
    NSString *_statusText;	// 24 = 0x18
    double _progress;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000056b0
@property(copy, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)didReceiveMemoryWarning;	// IMP=0x00000001000055d8
- (_Bool)_canShowWhileLocked;	// IMP=0x00000001000055d0
- (void)viewDidLoad;	// IMP=0x0000000100005544
- (void)loadView;	// IMP=0x0000000100004c84

@end

