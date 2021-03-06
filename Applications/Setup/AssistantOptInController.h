//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BFFFlowItem-Protocol.h"
#import "VTUIEnrollTrainingViewControllerDelegate-Protocol.h"

@class NSString, VTUIEnrollTrainingViewController;
@protocol BFFFlowItemDelegate;

@interface AssistantOptInController : NSObject <VTUIEnrollTrainingViewControllerDelegate, BFFFlowItem>
{
    _Bool _didOfferVoiceTrigger;	// 8 = 0x8
    id <BFFFlowItemDelegate> _delegate;	// 16 = 0x10
    VTUIEnrollTrainingViewController *_enrollmentController;	// 24 = 0x18
}

+ (void)_enableAssistantLocation;	// IMP=0x00000001000601b0
+ (void)setAssistantEnabled:(_Bool)arg1;	// IMP=0x0000000100060104
+ (void)skippedByCloudConfig;	// IMP=0x000000010005f434
+ (id)cloudConfigSkipKey;	// IMP=0x000000010005f424
- (void).cxx_destruct;	// IMP=0x0000000100060994
@property(nonatomic) _Bool didOfferVoiceTrigger; // @synthesize didOfferVoiceTrigger=_didOfferVoiceTrigger;
@property(retain, nonatomic) VTUIEnrollTrainingViewController *enrollmentController; // @synthesize enrollmentController=_enrollmentController;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showLearnMore;	// IMP=0x00000001000608e0
- (void)skipSetup;	// IMP=0x00000001000605ec
- (void)continueSetup;	// IMP=0x0000000100060214
- (void)_removeSiriPanesFromNavHierarchy;	// IMP=0x000000010005ff38
- (_Bool)controllerAllowsNavigatingBack;	// IMP=0x000000010005ff30
- (id)viewController;	// IMP=0x000000010005fe68
- (void)controllerWasPopped;	// IMP=0x000000010005fe14
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005f4c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

