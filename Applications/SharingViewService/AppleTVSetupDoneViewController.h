//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

@class NSError, UIButton, UIImageView, UILabel;

@interface AppleTVSetupDoneViewController : SVSBaseViewController
{
    UIButton *_doneButton;	// 32 = 0x20
    UIImageView *_iCloudIcon;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    UILabel *_infoLabel;	// 56 = 0x38
    UIButton *_reportBugButton;	// 64 = 0x40
    UILabel *_titleLabel;	// 72 = 0x48
    NSError *_error;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100021c10
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void)handleReportBugButton:(id)arg1;	// IMP=0x000000010002185c
- (void)handleDismissButton:(id)arg1;	// IMP=0x00000001000217c4
- (void)handleActionButton:(id)arg1;	// IMP=0x000000010002160c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100021574
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100020f30

@end
