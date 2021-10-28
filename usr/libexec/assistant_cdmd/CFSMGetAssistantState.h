//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import "CDMLocalAceHandling-Protocol.h"

@class NSNumber, NSString;

@interface CFSMGetAssistantState : SABaseClientBoundCommand <CDMLocalAceHandling>
{
}

+ (id)getAssistantStateWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000001000474b4
+ (id)getAssistantState;	// IMP=0x00000001000474b0
- (_Bool)requiresResponse;	// IMP=0x0000000100047528
@property(copy, nonatomic) NSNumber *queryTimeOut;
@property(copy, nonatomic) NSString *assistantStateQueryType;
- (id)encodedClassName;	// IMP=0x00000001000474a4
- (id)groupIdentifier;	// IMP=0x0000000100047494
- (void)handleWithDelegate:(id)arg1 clientId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100031494

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
