//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "iOSSetupBaseViewController.h"

@class NSError, UIButton, UILabel;

@interface iOSSetupDoneViewController : iOSSetupBaseViewController
{
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_infoLabel;	// 40 = 0x28
    UIButton *_reportBugButton;	// 48 = 0x30
    UIButton *_doneButton;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100044560
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void)handleReportBugButton:(id)arg1;	// IMP=0x0000000100044194
- (void)handleDismissButton:(id)arg1;	// IMP=0x00000001000440fc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100044064
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100043d44
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100043d3c

@end
