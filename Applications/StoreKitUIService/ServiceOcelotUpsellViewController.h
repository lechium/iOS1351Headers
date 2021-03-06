//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "SKArcadeSubscribeViewControllerDelegate-Protocol.h"

@class NSNumber, NSString, SKArcadeSubscribeViewController;

@interface ServiceOcelotUpsellViewController : SBUIRemoteAlertServiceViewController <SKArcadeSubscribeViewControllerDelegate>
{
    SKArcadeSubscribeViewController *_childViewController;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSNumber *_itemID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100005fa4
@property(retain, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) SKArcadeSubscribeViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void)didFinishWithError:(id)arg1;	// IMP=0x0000000100005da4
- (void)_dismissViewService;	// IMP=0x0000000100005d04
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005cf0
- (void)handleHomeButtonPressed;	// IMP=0x0000000100005ce4
- (void)handleButtonActions:(id)arg1;	// IMP=0x0000000100005bb0
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000057c0
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000100005760

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

