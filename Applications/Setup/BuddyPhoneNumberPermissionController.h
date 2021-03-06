//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BuddyChoiceController.h"

@class BuddyChoice;

@interface BuddyPhoneNumberPermissionController : BuddyChoiceController
{
    BuddyChoice *_enableChoice;	// 8 = 0x8
    BuddyChoice *_disableChoice;	// 16 = 0x10
}

+ (void)registerPhoneNumberPermissionEnabled:(_Bool)arg1;	// IMP=0x00000001000dbaf8
+ (void)skippedByCloudConfig;	// IMP=0x00000001000db710
+ (id)cloudConfigSkipKey;	// IMP=0x00000001000db700
+ (_Bool)performCustomNeedsToRun;	// IMP=0x00000001000db480
+ (_Bool)controllerNeedsToRun;	// IMP=0x00000001000db2b4
+ (_Bool)controllerAffectedByTapFreeSetup;	// IMP=0x00000001000db2ac
- (void).cxx_destruct;	// IMP=0x00000001000dc020
@property(retain) BuddyChoice *disableChoice; // @synthesize disableChoice=_disableChoice;
@property(retain) BuddyChoice *enableChoice; // @synthesize enableChoice=_enableChoice;
- (void)didSelectChoice:(id)arg1;	// IMP=0x00000001000dbf40
- (id)init;	// IMP=0x00000001000db720
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000db540

@end

