//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "STOperation.h"

@class IDSService, NSSet, STUnifiedTransportPayload;

@interface STSendPayloadWithIDSTransportOperation : STOperation
{
    IDSService *_service;	// 8 = 0x8
    STUnifiedTransportPayload *_payload;	// 16 = 0x10
    NSSet *_destinations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010004c594
@property(readonly, copy, nonatomic) NSSet *destinations; // @synthesize destinations=_destinations;
@property(retain, nonatomic) STUnifiedTransportPayload *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
- (id)_sendData:(id)arg1 toDestinations:(id)arg2 payloadUUID:(id)arg3 expectResponse:(_Bool)arg4 withError:(id *)arg5;	// IMP=0x000000010004bc18
- (void)main;	// IMP=0x000000010004b590
- (id)initWithPayload:(id)arg1 destinations:(id)arg2 service:(id)arg3;	// IMP=0x000000010004b49c

@end
