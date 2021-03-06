//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_os_transaction, PCSIDSMessagingDelegate, PCSIDSMessagingDeviceManager;

@interface PCSIDSTransport : NSObject <IDSServiceDelegate>
{
    _Bool _serviceDelegateSet;	// 8 = 0x8
    id <PCSIDSMessagingDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_pendingReplies;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    IDSService *_service;	// 40 = 0x28
    NSObject<OS_os_transaction> *_transaction;	// 48 = 0x30
    id <PCSIDSMessagingDeviceManager> _deviceManager;	// 56 = 0x38
}

+ (id)transportWithIDSServiceName:(id)arg1;	// IMP=0x000000010000d284
- (void).cxx_destruct;	// IMP=0x000000010000f34c
@property(nonatomic) __weak id <PCSIDSMessagingDeviceManager> deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property _Bool serviceDelegateSet; // @synthesize serviceDelegateSet=_serviceDelegateSet;
@property(readonly) IDSService *service; // @synthesize service=_service;
@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly) NSMutableDictionary *pendingReplies; // @synthesize pendingReplies=_pendingReplies;
@property(nonatomic) __weak id <PCSIDSMessagingDelegate> delegate; // @synthesize delegate=_delegate;
- (id)copyLocalPairedDevices;	// IMP=0x000000010000f0a4
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x000000010000efe0
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000010000ef1c
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000010000edb8
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000010000e9a8
- (void)sendResponse:(id)arg1 toMessage:(id)arg2 withPriority:(long long)arg3 timeout:(double)arg4 logDescription:(id)arg5;	// IMP=0x000000010000e368
- (void)sendMessage:(id)arg1 toDevice:(id)arg2 withPriority:(long long)arg3 timeout:(double)arg4 logDescription:(id)arg5 handleReply:(CDUnknownBlockType)arg6;	// IMP=0x000000010000dbdc
- (id)initWithServiceName:(id)arg1;	// IMP=0x000000010000d53c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

