//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDASMPayloadOperation.h"

@class CLSClass, NSArray, NSMutableDictionary;

@interface PDClassPublish : PDASMPayloadOperation
{
    int _action;	// 32 = 0x20
    CLSClass *_clsClass;	// 40 = 0x28
    NSArray *_membersToInsert;	// 48 = 0x30
    NSArray *_membersToDelete;	// 56 = 0x38
    NSMutableDictionary *_classMemberIDsByError;	// 64 = 0x40
    NSMutableDictionary *_erroredIDs;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010007d030
@property(retain, nonatomic) NSMutableDictionary *erroredIDs; // @synthesize erroredIDs=_erroredIDs;
@property(readonly, nonatomic) int action; // @synthesize action=_action;
@property(readonly, nonatomic) NSMutableDictionary *classMemberIDsByError; // @synthesize classMemberIDsByError=_classMemberIDsByError;
@property(readonly, nonatomic) NSArray *membersToDelete; // @synthesize membersToDelete=_membersToDelete;
@property(readonly, nonatomic) NSArray *membersToInsert; // @synthesize membersToInsert=_membersToInsert;
@property(readonly, nonatomic) CLSClass *clsClass; // @synthesize clsClass=_clsClass;
- (_Bool)processPayloadFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007cb20
- (id)deleteActionPDDPEEPayloadFromCLSObject:(id)arg1;	// IMP=0x000000010007ca14
- (id)updateActionPDDPEEPayloadFromCLSObject:(id)arg1;	// IMP=0x000000010007c908
- (id)createActionPDDPEEPayloadFromCLSObject:(id)arg1;	// IMP=0x000000010007c570
- (id)payloadForCLSObject:(id)arg1;	// IMP=0x000000010007c3dc
- (id)requestData;	// IMP=0x000000010007bb18
- (Class)expectedResponseClass;	// IMP=0x000000010007bb0c
- (id)acceptContentType;	// IMP=0x000000010007bafc
- (id)requestContentType;	// IMP=0x000000010007baec
- (id)endpointIdentifier;	// IMP=0x000000010007bae0
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x000000010007bac0
- (id)logSubsystem;	// IMP=0x000000010007bab0
- (id)initWithDatabase:(id)arg1 clsClass:(id)arg2 insertMembers:(id)arg3 deleteMembers:(id)arg4 actionType:(int)arg5;	// IMP=0x000000010007b8a0

@end

