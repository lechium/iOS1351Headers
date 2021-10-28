//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, XDCServiceDelegate;

@interface XDCService : NSObject <IDSServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    IDSService *_service;	// 16 = 0x10
    NSMutableDictionary *_queuedMessages;	// 24 = 0x18
    NSMutableDictionary *_messageHandlers;	// 32 = 0x20
    id <XDCServiceDelegate> _delegate;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000001000b9f64
- (void).cxx_destruct;	// IMP=0x00000001000bb930
@property __weak id <XDCServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleRequestWithIdentifier:(id)arg1 protobuf:(id)arg2 fromID:(id)arg3;	// IMP=0x00000001000bb544
- (void)_handleReplyForIdentifier:(id)arg1 protobuf:(id)arg2 fromID:(id)arg3;	// IMP=0x00000001000bb250
- (void)_handleErrorForIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x00000001000bb0f8
- (void)_sendMessage:(id)arg1 toDevice:(id)arg2 expectsReply:(_Bool)arg3 withReplyHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000ba9d8
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00000001000ba7fc
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000ba6ac
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000001000ba5e8
- (void)sendReply:(id)arg1 toDevice:(id)arg2;	// IMP=0x00000001000ba590
- (void)sendProtobuf:(id)arg1 ofType:(long long)arg2 toDevice:(id)arg3 withReplyHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000ba4d4
- (void)sendProtobof:(id)arg1 ofType:(long long)arg2 toDevice:(id)arg3;	// IMP=0x00000001000ba434
- (void)sendMessage:(id)arg1 toDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ba3c4
- (void)sendMessage:(id)arg1 toDevice:(id)arg2;	// IMP=0x00000001000ba36c
- (void)addHandler:(id)arg1 selector:(SEL)arg2 forMessage:(long long)arg3;	// IMP=0x00000001000ba22c
- (id)init;	// IMP=0x00000001000b9fd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
