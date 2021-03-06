//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBSetupAssistantHollowController.h>

#import "BFFFlowItem-Protocol.h"

@class CBClient, NSString;
@protocol BFFFlowItemDelegate;

@interface BuddyHarmonyController : OBSetupAssistantHollowController <BFFFlowItem>
{
    CBClient *_brightnessClient;	// 8 = 0x8
    id <BFFFlowItemDelegate> _delegate;	// 16 = 0x10
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000677fc
+ (_Bool)controllerNeedsToRun;	// IMP=0x0000000100067730
- (void).cxx_destruct;	// IMP=0x0000000100068010
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)continuePressed;	// IMP=0x0000000100067f18
- (void)buttonPressLifted;	// IMP=0x0000000100067f08
- (void)buttonPressedDown;	// IMP=0x0000000100067ef8
- (void)_toggleSelection:(_Bool)arg1;	// IMP=0x0000000100067ea0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100067e4c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100067da0
- (void)loadView;	// IMP=0x0000000100067b60
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000679d4
- (id)init;	// IMP=0x000000010006780c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

