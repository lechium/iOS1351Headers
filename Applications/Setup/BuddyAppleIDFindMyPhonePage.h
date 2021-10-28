//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SetupChoiceController.h"

@class BuddyAppleIDController, SetupChoice;

@interface BuddyAppleIDFindMyPhonePage : SetupChoiceController
{
    BuddyAppleIDController *_appleIDController;	// 8 = 0x8
    SetupChoice *_enableChoice;	// 16 = 0x10
    SetupChoice *_disableChoice;	// 24 = 0x18
}

+ (void)setDeviceLocatorEnabled:(_Bool)arg1 viewControllerForAlertIfAccountChange:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100093f80
+ (id)secondaryAccountWithFMiPForAccountStore:(id)arg1;	// IMP=0x0000000100093df4
+ (id)cloudConfigSkipKey;	// IMP=0x0000000100093730
+ (_Bool)controllerNeedsToRun;	// IMP=0x00000001000936a0
- (void).cxx_destruct;	// IMP=0x00000001000948c8
@property(retain, nonatomic) SetupChoice *disableChoice; // @synthesize disableChoice=_disableChoice;
@property(retain, nonatomic) SetupChoice *enableChoice; // @synthesize enableChoice=_enableChoice;
@property(nonatomic) __weak BuddyAppleIDController *appleIDController; // @synthesize appleIDController=_appleIDController;
- (_Bool)controllerAllowsNavigatingBack;	// IMP=0x0000000100093dec
- (void)controllerDone;	// IMP=0x0000000100093cf4
- (void)whatIsPressed;	// IMP=0x0000000100093c48
- (void)learnMoreButtonTapped:(id)arg1;	// IMP=0x0000000100093c3c
- (id)learnMoreButtonText;	// IMP=0x0000000100093bc8
- (id)footerDetailText;	// IMP=0x0000000100093b54
- (id)footerTitleText;	// IMP=0x0000000100093ae0
- (id)footerIconName;	// IMP=0x0000000100093ad8
- (_Bool)wantsNextButton;	// IMP=0x0000000100093ad0
- (id)titleText;	// IMP=0x0000000100093a5c
- (id)init;	// IMP=0x0000000100093738

@end
