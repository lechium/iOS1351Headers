//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "ServiceAlertProxyDelegate-Protocol.h"

@class NSString, ServiceAlertProxy, ServiceTouchIDAlertHeaderView, UIAlertController;

@interface ServiceTouchIDAlertViewController : SBUIRemoteAlertServiceViewController <ServiceAlertProxyDelegate>
{
    UIAlertController *_alertController;	// 8 = 0x8
    ServiceTouchIDAlertHeaderView *_headerView;	// 16 = 0x10
    ServiceAlertProxy *_remoteAlertProxy;	// 24 = 0x18
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x000000010000e474
- (void).cxx_destruct;	// IMP=0x000000010000f114
- (void)_showAlertForAlertProxy:(id)arg1;	// IMP=0x000000010000eb30
- (id)_remoteViewControllerProxy;	// IMP=0x000000010000eafc
- (void)_finishWithButtonIndex:(long long)arg1;	// IMP=0x000000010000ea80
- (void)_dismissAlertController;	// IMP=0x000000010000e9b4
- (void)alertProxyDidCancel:(id)arg1;	// IMP=0x000000010000e9a8
- (void)alertProxy:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x000000010000e840
- (void)handleHomeButtonPressed;	// IMP=0x000000010000e83c
- (void)_willAppearInRemoteViewController:(id)arg1;	// IMP=0x000000010000e7a0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000e714
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000e47c
- (void)dealloc;	// IMP=0x000000010000e418

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

