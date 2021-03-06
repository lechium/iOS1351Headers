//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BFFFlowItem-Protocol.h"
#import "TSSIMSetupDelegate-Protocol.h"

@class NSString, TSTransferFlow, UIViewController;
@protocol BFFFlowItemDelegate;

@interface BuddySIMTransferController : NSObject <TSSIMSetupDelegate, BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;	// 8 = 0x8
    TSTransferFlow *_setupFlow;	// 16 = 0x10
    UIViewController *_firstViewController;	// 24 = 0x18
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000c0578
+ (_Bool)controllerNeedsToRun;	// IMP=0x00000001000c0034
- (void).cxx_destruct;	// IMP=0x00000001000c0628
@property(retain) UIViewController *firstViewController; // @synthesize firstViewController=_firstViewController;
@property(retain) TSTransferFlow *setupFlow; // @synthesize setupFlow=_setupFlow;
@property(retain, nonatomic) id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)simSetupFlowCompleted;	// IMP=0x00000001000c0594
- (id)viewController;	// IMP=0x00000001000c0588
- (void)_endProximityIfApplicable;	// IMP=0x00000001000c041c
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c0104

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

