//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRDDiagnosticCollecting-Protocol.h"
#import "MRDXPCMessageHandling-Protocol.h"
#import "MRTransactionDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MRDTransactionServer : NSObject <MRTransactionDelegate, MRDXPCMessageHandling, MRDDiagnosticCollecting>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _usedMemory;	// 16 = 0x10
    unsigned long long _allowedMemory;	// 24 = 0x18
    double _transactionWaitDuration;	// 32 = 0x20
    NSMutableArray *_transactions;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100037fb0
@property(readonly, nonatomic) NSMutableArray *transactions; // @synthesize transactions=_transactions;
- (void)_sendContentItemTransaction:(id)arg1 request:(id)arg2 playerPath:(id)arg3;	// IMP=0x0000000100037bfc
- (void)sendContentItemTransaction:(id)arg1 request:(id)arg2 playerPath:(id)arg3;	// IMP=0x0000000100037ae4
- (void)sendContentItemTransactionWithPlaybackQueue:(id)arg1 request:(id)arg2 playerPath:(id)arg3;	// IMP=0x0000000100037a34
- (void)handleContentItemTransaction:(id)arg1 packets:(id)arg2 group:(id)arg3;	// IMP=0x0000000100036ed4
- (void)handlePlaybackQueueRequestTransaction:(id)arg1 packets:(id)arg2 group:(id)arg3;	// IMP=0x0000000100036908
- (void)adjustMemory:(long long)arg1;	// IMP=0x0000000100036884
- (void)transaction:(id)arg1 didReceivePackets:(id)arg2 receivedSize:(unsigned long long)arg3 requestedSize:(unsigned long long)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001000365f0
- (unsigned long long)transactionRequestingMemorySize:(id)arg1;	// IMP=0x00000001000364a8
- (void)transactionDidEnd:(id)arg1 bytesRemaining:(unsigned long long)arg2;	// IMP=0x00000001000363d4
- (void)collectDiagnostic:(id)arg1;	// IMP=0x00000001000362e8
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100036134
- (id)init;	// IMP=0x0000000100036060

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

