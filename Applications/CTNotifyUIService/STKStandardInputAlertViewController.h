//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "STKBaseInputAlertViewController.h"

@class STKTextInputSessionAction;

@interface STKStandardInputAlertViewController : STKBaseInputAlertViewController
{
}

- (void)sendButtonPressed;	// IMP=0x0000000100005b9c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000059a8
- (void)rightNavigationButtonPressed;	// IMP=0x0000000100005950
- (void)leftNavigationButtonPressed;	// IMP=0x00000001000058f8
- (_Bool)validateAction:(id)arg1;	// IMP=0x00000001000058a8

// Remaining properties
@property(readonly, nonatomic) STKTextInputSessionAction *sessionAction; // @dynamic sessionAction;

@end
