//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "B238SetupBaseViewController.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface B238SetupShareSettingsViewController : B238SetupBaseViewController
{
    UIActivityIndicatorView *_activityIndicator;	// 32 = 0x20
    UIButton *_agreeButton;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UIImageView *_icon1ImageView;	// 56 = 0x38
    UIImageView *_siriIcon;	// 64 = 0x40
    UIImageView *_musicIcon;	// 72 = 0x48
    UIImageView *_icon4ImageView;	// 80 = 0x50
    UILabel *_infoLabel;	// 88 = 0x58
    UILabel *_appleIDLabel;	// 96 = 0x60
    UILabel *_appleIDAccount;	// 104 = 0x68
    UILabel *_iTunesLabel;	// 112 = 0x70
    UILabel *_iTunesAccount;	// 120 = 0x78
    NSString *_iCloudUserID;	// 128 = 0x80
    NSString *_iTunesUserID;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000010002fb68
@property(copy, nonatomic) NSString *iTunesUserID; // @synthesize iTunesUserID=_iTunesUserID;
@property(copy, nonatomic) NSString *iCloudUserID; // @synthesize iCloudUserID=_iCloudUserID;
- (void)handleDismissButton:(id)arg1;	// IMP=0x000000010002faa0
- (void)handleAgreeButton:(id)arg1;	// IMP=0x000000010002f958
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010002f570

@end

