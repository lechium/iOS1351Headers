//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DAIDSMessageSender-Protocol.h"
#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSMutableDictionary, NSString;
@protocol DAIDSMessageReceiver, OS_dispatch_queue;

@interface DDIDSService : NSObject <IDSServiceDelegate, DAIDSMessageSender>
{
    id <DAIDSMessageReceiver> _receiver;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    IDSService *_service;	// 24 = 0x18
    NSMutableDictionary *_messageStorage;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100013344
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *messageStorage; // @synthesize messageStorage=_messageStorage;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <DAIDSMessageReceiver> receiver; // @synthesize receiver=_receiver;
@property(readonly, copy) NSString *description;
- (id)_selfTokenFromID:(id)arg1;	// IMP=0x0000000100013170
- (id)_destinationFromID:(id)arg1;	// IMP=0x0000000100012f8c
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100012720
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000001000123d0
- (_Bool)_sendIDSMessage:(id)arg1;	// IMP=0x0000000100011e6c
- (_Bool)hasDestination:(id)arg1;	// IMP=0x0000000100011ca0
- (void)availableDestinationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100011aac
- (void)sendMessage:(id)arg1 data:(id)arg2 toDestination:(id)arg3 forceLocalDelivery:(_Bool)arg4 expectsResponse:(_Bool)arg5 response:(CDUnknownBlockType)arg6;	// IMP=0x00000001000119c4
- (id)initWithServiceType:(long long)arg1;	// IMP=0x00000001000118dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
