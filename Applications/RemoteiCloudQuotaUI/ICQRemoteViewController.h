//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "ICQUpgradeFlowManagerDelegate-Protocol.h"

@class ICQUpgradeFlowManager, NSObject, NSString;
@protocol OS_xpc_object, SBUIRemoteAlertHostInterface;

@interface ICQRemoteViewController : SBUIRemoteAlertServiceViewController <ICQUpgradeFlowManagerDelegate>
{
    ICQUpgradeFlowManager *_flowManager;	// 8 = 0x8
    id <SBUIRemoteAlertHostInterface> _remoteVCProxy;	// 16 = 0x10
    NSObject<OS_xpc_object> *_xpcEndpoint;	// 24 = 0x18
    _Bool _isDismissing;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100005ca0
- (void)upgradeFlowManagerDidComplete:(id)arg1;	// IMP=0x0000000100005b18
- (void)upgradeFlowManagerDidCancel:(id)arg1;	// IMP=0x00000001000059b0
- (void)handleButtonActions:(id)arg1;	// IMP=0x00000001000057cc
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005520
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000001000054c0
- (void)_main_dismissAndExit;	// IMP=0x00000001000053e8
- (void)_dismissAndExit;	// IMP=0x0000000100005300
- (void)_dismissFlowWithSuccess:(_Bool)arg1;	// IMP=0x0000000100005060
- (void)_presentFreshmintWithOffer:(id)arg1 flowOptions:(id)arg2;	// IMP=0x0000000100004d88
- (void)_setupRemoteProxy;	// IMP=0x0000000100004cf0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100004c8c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100004c2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

