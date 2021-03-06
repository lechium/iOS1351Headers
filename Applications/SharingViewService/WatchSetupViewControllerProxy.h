//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseMainController.h"

@class SVSCommonNavController, UIStoryboard, WatchSetupViewController;

@interface WatchSetupViewControllerProxy : SVSBaseMainController
{
    _Bool _dismissed;	// 24 = 0x18
    SVSCommonNavController *_navController;	// 32 = 0x20
    WatchSetupViewController *_setupViewController;	// 40 = 0x28
    UIStoryboard *_storyboard;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100090278
- (void)handleButtonActions:(id)arg1;	// IMP=0x00000001000900ec
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008ffdc
- (void)dismiss:(int)arg1;	// IMP=0x000000010008ffc4
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010008fe64
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010008fc28
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000010008fb60
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008fa70

@end

