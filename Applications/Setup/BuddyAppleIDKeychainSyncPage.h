//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BuddyChoiceController.h"

@class BuddyChoice;

@interface BuddyAppleIDKeychainSyncPage : BuddyChoiceController
{
    _Bool _circleExists;	// 8 = 0x8
    BuddyChoice *_enableChoice;	// 16 = 0x10
    BuddyChoice *_disableChoice;	// 24 = 0x18
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000e9590
+ (_Bool)shouldShowKeychainSync;	// IMP=0x00000001000e90d8
- (void).cxx_destruct;	// IMP=0x00000001000eac60
@property(retain, nonatomic) BuddyChoice *disableChoice; // @synthesize disableChoice=_disableChoice;
@property(retain, nonatomic) BuddyChoice *enableChoice; // @synthesize enableChoice=_enableChoice;
- (void)didSelectChoice:(id)arg1;	// IMP=0x00000001000eaab4
- (void)_startEnableFlow;	// IMP=0x00000001000ea7ec
- (void)_showPeerApprovalAcknowledgement;	// IMP=0x00000001000ea580
- (void)_controllerDoneWasSkipped:(_Bool)arg1;	// IMP=0x00000001000ea310
- (void)setDelegate:(id)arg1;	// IMP=0x00000001000ea2dc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000ea210
- (void)reloadOptions;	// IMP=0x00000001000ea154
- (_Bool)loadOptions;	// IMP=0x00000001000e9814
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e9620
- (id)init;	// IMP=0x00000001000e95a8
- (void)logLoadFailed;	// IMP=0x00000001000e9598

@end
