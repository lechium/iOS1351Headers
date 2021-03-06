//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "iOSSetupBaseViewController.h"

@class NSDateComponentsFormatter, UILabel, UIProgressView;

@interface iOSSetupBackupSyncViewController : iOSSetupBaseViewController
{
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_infoLabel;	// 40 = 0x28
    UIProgressView *_progressBar;	// 48 = 0x30
    UILabel *_progressLabel;	// 56 = 0x38
    unsigned int _lastProgressEvent;	// 64 = 0x40
    int _testStage;	// 68 = 0x44
    NSDateComponentsFormatter *_timeRemainingFormatter;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100043c90
- (void)_handleTestTimerFired;	// IMP=0x000000010004395c
- (void)handleProgressEvent:(unsigned int)arg1 info:(id)arg2;	// IMP=0x00000001000434d8
- (void)handleHideButton:(id)arg1;	// IMP=0x0000000100043440
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000433a8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000431c8
- (_Bool)_canShowWhileLocked;	// IMP=0x00000001000431c0

@end

