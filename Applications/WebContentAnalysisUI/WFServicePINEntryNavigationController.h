//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WFServicePINEntryControllerProtocol-Protocol.h"

@class NSString, NSURL, UINavigationController, WFServicePINEntryViewController;
@protocol WFPINEntryViewControllerProtocol;

@interface WFServicePINEntryNavigationController : UIViewController <WFServicePINEntryControllerProtocol>
{
    id <WFPINEntryViewControllerProtocol> _remoteViewControllerProxy;	// 8 = 0x8
    UINavigationController *_navController;	// 16 = 0x10
    WFServicePINEntryViewController *_PINEntryViewController;	// 24 = 0x18
    NSURL *_URL;	// 32 = 0x20
    NSString *_pageTitle;	// 40 = 0x28
}

+ (id)_remoteViewControllerInterface;	// IMP=0x00000001000031f0
+ (id)_exportedInterface;	// IMP=0x00000001000031d4
- (void).cxx_destruct;	// IMP=0x00000001000035a8
- (void)didCancelEnteringPIN;	// IMP=0x0000000100003590
- (void)didAcceptEnteredPIN;	// IMP=0x0000000100003548
- (void)cancel;	// IMP=0x000000010000352c
- (void)permitURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000345c
- (void)getIsPINPresentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000033fc
- (void)setPageTitle:(id)arg1;	// IMP=0x0000000100003388
- (void)setURL:(id)arg1;	// IMP=0x0000000100003220
- (void)_willAppearInRemoteViewController:(id)arg1;	// IMP=0x000000010000320c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000100003174
- (void)viewDidLoad;	// IMP=0x0000000100002fd0

@end
