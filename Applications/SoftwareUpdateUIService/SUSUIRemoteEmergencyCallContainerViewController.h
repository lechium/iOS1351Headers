//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "SUSUIRemoteEmergencyCallViewControllerDelegate-Protocol.h"

@class NSString, SUSUIRemoteEmergencyCallAlertAction, SUSUIRemoteEmergencyCallViewController;

@interface SUSUIRemoteEmergencyCallContainerViewController : SBUIRemoteAlertServiceViewController <SUSUIRemoteEmergencyCallViewControllerDelegate>
{
    SUSUIRemoteEmergencyCallViewController *_emergencyVC;	// 8 = 0x8
    SUSUIRemoteEmergencyCallAlertAction *_action;	// 16 = 0x10
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0000000100006664
- (void).cxx_destruct;	// IMP=0x00000001000073d4
- (void)_setRootViewController:(id)arg1;	// IMP=0x0000000100007290
- (void)_fireActionWithResponseIfNecessary:(_Bool)arg1;	// IMP=0x0000000100007244
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000001000071e4
- (void)emergencyCallViewController:(id)arg1 didExitWithError:(id)arg2;	// IMP=0x00000001000070f0
- (void)dismissEmergencyCallViewController:(id)arg1;	// IMP=0x0000000100006f34
- (void)handleLockButtonPressed;	// IMP=0x0000000100006e80
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006c70
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100006c3c
- (void)viewDidLoad;	// IMP=0x0000000100006c08
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100006af4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100006a04
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100006914
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100006824
- (void)loadView;	// IMP=0x000000010000666c
- (id)init;	// IMP=0x0000000100006598

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

