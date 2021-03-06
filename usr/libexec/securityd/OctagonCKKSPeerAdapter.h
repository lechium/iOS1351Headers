//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKKSPeerProvider-Protocol.h"

@class CKKSListenerCollection, NSString, OTOperationDependencies;

__attribute__((visibility("hidden")))
@interface OctagonCKKSPeerAdapter : NSObject <CKKSPeerProvider>
{
    _Bool _essential;	// 8 = 0x8
    NSString *_providerID;	// 16 = 0x10
    NSString *_peerID;	// 24 = 0x18
    OTOperationDependencies *_deps;	// 32 = 0x20
    CKKSListenerCollection *_peerChangeListeners;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010004317c
@property(retain) CKKSListenerCollection *peerChangeListeners; // @synthesize peerChangeListeners=_peerChangeListeners;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) NSString *peerID; // @synthesize peerID=_peerID;
@property(readonly) NSString *providerID; // @synthesize providerID=_providerID;
@property _Bool essential; // @synthesize essential=_essential;
- (id)currentState;	// IMP=0x0000000100043108
- (void)sendTrustedPeerSetChangedUpdate;	// IMP=0x0000000100043084
- (void)sendSelfPeerChangedUpdate;	// IMP=0x0000000100043000
- (void)registerForPeerChangeUpdates:(id)arg1;	// IMP=0x0000000100042f94
- (id)fetchTrustedPeers:(id *)arg1;	// IMP=0x0000000100042d24
- (id)fetchSelfPeers:(id *)arg1;	// IMP=0x00000001000429d8
- (id)fetchIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004280c
@property(readonly, copy) NSString *description;
- (id)initWithPeerID:(id)arg1 operationDependencies:(id)arg2;	// IMP=0x0000000100042668

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

