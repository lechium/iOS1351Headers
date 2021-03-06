//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BuddyMigrationBaseErrorController.h"

#import "BFFFlowItem-Protocol.h"

@class NSString;

@interface BuddyMigrationSourceErrorController : BuddyMigrationBaseErrorController <BFFFlowItem>
{
    _Bool _allowInteraction;	// 8 = 0x8
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000a108c
@property(nonatomic) _Bool allowInteraction; // @synthesize allowInteraction=_allowInteraction;
- (_Bool)shouldAllowStartOver;	// IMP=0x00000001000a109c
- (_Bool)controllerAllowsNavigatingBack;	// IMP=0x00000001000a1094
- (void)didSelectChoice:(id)arg1;	// IMP=0x00000001000a0fd0
- (void)loadView;	// IMP=0x00000001000a0d88
- (id)initForInsufficientSpace;	// IMP=0x00000001000a0d40
- (id)initWithError:(id)arg1;	// IMP=0x00000001000a0cf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

