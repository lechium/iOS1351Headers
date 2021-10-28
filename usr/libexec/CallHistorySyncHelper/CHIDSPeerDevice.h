//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

#import "IDSServiceDelegate-Protocol.h"

@class CHPairedSyncCoordinator, IDSDevice, NSArray, NSString, TransactionLog, XPCTransaction;

@interface CHIDSPeerDevice : CHSynchronizedLoggable <IDSServiceDelegate>
{
    int _status;	// 8 = 0x8
    int _configuration;	// 12 = 0xc
    IDSDevice *_device;	// 16 = 0x10
    TransactionLog *_txLog;	// 24 = 0x18
    NSString *_sendIdentifier;	// 32 = 0x20
    NSArray *_pendingTransactions;	// 40 = 0x28
    CHPairedSyncCoordinator *_coordinator;	// 48 = 0x30
    XPCTransaction *_xpcTransaction;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010000fa38
@property(retain) XPCTransaction *xpcTransaction; // @synthesize xpcTransaction=_xpcTransaction;
@property(retain) CHPairedSyncCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) NSArray *pendingTransactions; // @synthesize pendingTransactions=_pendingTransactions;
@property(retain) NSString *sendIdentifier; // @synthesize sendIdentifier=_sendIdentifier;
@property int configuration; // @synthesize configuration=_configuration;
@property(retain) TransactionLog *txLog; // @synthesize txLog=_txLog;
@property(retain) IDSDevice *device; // @synthesize device=_device;
@property int status; // @synthesize status=_status;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000010000f35c
- (void)removeTemporaryBootstrapDataStore;	// IMP=0x000000010000f204
- (_Bool)_sendBootstrapDataStoreWithService:(id)arg1;	// IMP=0x000000010000eae0
- (void)sendBootstrapDataStoreWithService:(id)arg1;	// IMP=0x000000010000ea28
- (_Bool)downgradeDatabaseAtLocation:(id)arg1;	// IMP=0x000000010000e880
- (long long)getSchemaVersionToDowngradeTo;	// IMP=0x000000010000e630
- (void)flushTransactionsWithService:(id)arg1;	// IMP=0x000000010000e22c
- (void)sendMessage:(id)arg1 withService:(id)arg2;	// IMP=0x000000010000df48
- (void)sendTransactions:(id)arg1 withService:(id)arg2;	// IMP=0x000000010000dcc0
- (id)initWithDevice:(id)arg1 withPairedSyncCoordinator:(id)arg2 withConfiguration:(int)arg3;	// IMP=0x000000010000db5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
