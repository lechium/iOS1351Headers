//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "Action-Protocol.h"

@class FMDRequest, FMDServerInteractionController, NSString;

@interface FMDNetworkAction : NSObject <Action>
{
    FMDServerInteractionController *_serverInteractionController;	// 8 = 0x8
    FMDRequest *_request;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100003c28
@property(retain, nonatomic) FMDRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) FMDServerInteractionController *serverInteractionController; // @synthesize serverInteractionController=_serverInteractionController;
@property(readonly, copy) NSString *description;
- (_Bool)shouldWaitForAction:(id)arg1;	// IMP=0x0000000100003b68
- (_Bool)shouldCancelAction:(id)arg1;	// IMP=0x0000000100003b60
- (void)willCancelAction;	// IMP=0x0000000100003a24
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100003460
- (id)actionType;	// IMP=0x0000000100003444
- (id)initWithRequest:(id)arg1 andServerInteractionController:(id)arg2;	// IMP=0x00000001000033a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

