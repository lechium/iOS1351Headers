//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFOnBoardingSplashController.h>

#import "BFFFlowItem-Protocol.h"

@class NSString;
@protocol BFFFlowItemDelegate;

@interface BuddySiriOnBoardingSplashController : BFFOnBoardingSplashController <BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000a17f8
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;	// IMP=0x00000001000a1690
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a15ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
