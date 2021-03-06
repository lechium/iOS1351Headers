//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "B238SetupBaseViewController.h"

#import "FMFSessionDelegate-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface B238SetupPersonalRequestsViewController : B238SetupBaseViewController <FMFSessionDelegate>
{
    UIImageView *_icon1ImagView;	// 32 = 0x20
    UIImageView *_icon2ImagView;	// 40 = 0x28
    UIImageView *_icon3ImagView;	// 48 = 0x30
    UIImageView *_calendarImagView;	// 56 = 0x38
    UILabel *_infoLabel;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010002e0c4
- (void)_siriCheck;	// IMP=0x000000010002dd9c
- (void)_showMeDeviceSwitchAlertWithDevice:(id)arg1 session:(id)arg2;	// IMP=0x000000010002da40
- (void)handleSkipButton:(id)arg1;	// IMP=0x000000010002d958
- (void)handleDismissButton:(id)arg1;	// IMP=0x000000010002d8c8
- (void)handleAgreeButton:(id)arg1;	// IMP=0x000000010002d6cc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010002d2d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

