//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFSpinnerController.h>

@interface BuddyManagedConfigurationMigrationController : BFFSpinnerController
{
    _Bool _paneVisible;	// 8 = 0x8
    _Bool _waitingForMigration;	// 9 = 0x9
}

@property(nonatomic) _Bool waitingForMigration; // @synthesize waitingForMigration=_waitingForMigration;
@property(nonatomic, getter=isPaneVisible) _Bool paneVisible; // @synthesize paneVisible=_paneVisible;
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ccf04
- (void)loadView;	// IMP=0x00000001000cce90
- (id)init;	// IMP=0x00000001000ccdc0

@end

