//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "OTSOSAdapter-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OTSOSMissingAdapter : NSObject <OTSOSAdapter>
{
    _Bool sosEnabled;	// 8 = 0x8
    _Bool _essential;	// 9 = 0x9
    NSString *_providerID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100077c48
@property _Bool essential; // @synthesize essential=_essential;
@property(readonly) NSString *providerID; // @synthesize providerID=_providerID;
@property _Bool sosEnabled; // @synthesize sosEnabled;
- (id)currentState;	// IMP=0x0000000100077b3c
- (void)sendTrustedPeerSetChangedUpdate;	// IMP=0x0000000100077b38
- (void)sendSelfPeerChangedUpdate;	// IMP=0x0000000100077b34
- (void)registerForPeerChangeUpdates:(id)arg1;	// IMP=0x0000000100077b30
- (id)fetchSelfPeers:(id *)arg1;	// IMP=0x0000000100077ad0
- (void)updateOctagonKeySetWithAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100077a74
- (id)fetchTrustedPeers:(id *)arg1;	// IMP=0x0000000100077a14
- (id)currentSOSSelf:(id *)arg1;	// IMP=0x00000001000779b4
- (int)circleStatus:(id *)arg1;	// IMP=0x00000001000779ac
- (id)init;	// IMP=0x0000000100077938

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

