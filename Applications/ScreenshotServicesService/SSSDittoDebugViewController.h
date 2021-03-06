//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SSSDittoDebugViewDelegate-Protocol.h"
#import "SSSDittoRootViewControllerDelegate-Protocol.h"
#import "SSSDittoViewController-Protocol.h"

@class NSString, SSSDittoRootViewController, SSSViewControllerManager, UIVisualEffectView;

@interface SSSDittoDebugViewController : UIViewController <SSSDittoRootViewControllerDelegate, SSSDittoDebugViewDelegate, SSSDittoViewController>
{
    SSSDittoRootViewController *_rootViewController;	// 8 = 0x8
    UIVisualEffectView *_backgroundView;	// 16 = 0x10
    SSSViewControllerManager *viewControllerManager;	// 24 = 0x18
}

+ (void)prepareForDebugging;	// IMP=0x0000000100013c68
- (void).cxx_destruct;	// IMP=0x00000001000149c4
@property(nonatomic) __weak SSSViewControllerManager *viewControllerManager; // @synthesize viewControllerManager;
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100014904
- (void)viewDidLoad;	// IMP=0x00000001000147dc
- (id)debugView;	// IMP=0x00000001000147d0
- (void)loadView;	// IMP=0x0000000100014758
- (void)_addScreenshots;	// IMP=0x000000010001448c
- (void)dittoDebugView:(id)arg1 requestsPresentationOfViewController:(id)arg2;	// IMP=0x0000000100014474
- (void)_addScreenshotWithPDF:(id)arg1 visibleRect:(struct CGRect)arg2;	// IMP=0x0000000100014038
- (void)removeDittoRootViewController;	// IMP=0x0000000100013f9c
- (void)createDittoRootViewControllerIfNecessary;	// IMP=0x0000000100013e10
@property(readonly, nonatomic) SSSDittoRootViewController *rootViewController;
- (void)cleanupRootViewController;	// IMP=0x0000000100013dfc
- (void)stopBeingParentOfDittoRootViewController:(id)arg1;	// IMP=0x0000000100013df8
- (void)becomeParentOfDittoRootViewController:(id)arg1;	// IMP=0x0000000100013df4
- (void)dittoRootViewControllerDidDismiss:(id)arg1;	// IMP=0x0000000100013de8
- (void)dittoRootViewController:(id)arg1 wantsBackground:(_Bool)arg2 duration:(double)arg3;	// IMP=0x0000000100013cfc
- (void)dittoRootViewControllerFinishedShowingSharingUI:(id)arg1;	// IMP=0x0000000100013cf8
- (void)dittoRootViewController:(id)arg1 willShowTestFlightUIWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100013cec
- (void)dittoRootViewController:(id)arg1 willShowShowSharingUIWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100013ce0
- (void)dittoRootViewController:(id)arg1 didTransitionToState:(unsigned long long)arg2;	// IMP=0x0000000100013cdc
- (void)dittoRootViewController:(id)arg1 willTransitionToState:(unsigned long long)arg2 changeBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100013cd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

