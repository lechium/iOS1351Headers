//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDEndpointRequestOperation.h"

@class NSMutableSet;

@interface PDASMPayloadOperation : PDEndpointRequestOperation
{
    NSMutableSet *_unresolvedMissingEntityIDs;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010008cbdc
- (_Bool)_deleteEntity:(Class)arg1 identity:(id)arg2;	// IMP=0x000000010008c994
- (_Bool)deleteClassMemberWithClassID:(id)arg1 personIDs:(id)arg2;	// IMP=0x000000010008c65c
- (_Bool)forgetAboutDeletedEntity:(Class)arg1 withObjectID:(id)arg2;	// IMP=0x000000010008c458
- (_Bool)deleteClassWithObjectID:(id)arg1 deletePersons:(_Bool)arg2;	// IMP=0x000000010008c024
- (_Bool)deletePersonWithObjectID:(id)arg1;	// IMP=0x000000010008bda4
- (_Bool)_deleteWithPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000010008b894
- (_Bool)insertEntity:(id)arg1;	// IMP=0x000000010008b528
- (_Bool)handleZoneRemoved:(id)arg1;	// IMP=0x000000010008b19c
- (_Bool)processClassMember:(id)arg1;	// IMP=0x000000010008af14
- (_Bool)processClassPayload:(id)arg1;	// IMP=0x000000010008ae20
- (_Bool)processPerson:(id)arg1;	// IMP=0x000000010008ad48
- (void)_forceNoCache:(id)arg1;	// IMP=0x000000010008acf8
- (_Bool)processResponseZone:(id)arg1;	// IMP=0x000000010008acf0
- (_Bool)processStatus:(id)arg1 allowMixedResponse:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010008ab6c
- (_Bool)processPayloadFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x000000010008a198
- (_Bool)processPayloads:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100089cdc
- (_Bool)processPayloadWithinWriteTransaction:(id)arg1 error:(id *)arg2 stop:(_Bool *)arg3;	// IMP=0x000000010008984c
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100089658
- (_Bool)hasBigResponses;	// IMP=0x0000000100089650
- (int)actionForPayload:(id)arg1;	// IMP=0x0000000100089640
- (_Bool)readStreamablePayload:(id)arg1 reader:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000894b0
- (long long)streamablePayloadClassTagValue;	// IMP=0x00000001000894a8
- (Class)streamablePayloadClass;	// IMP=0x000000010008949c
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x0000000100089494
- (id)initWithDatabase:(id)arg1;	// IMP=0x0000000100089428

@end
