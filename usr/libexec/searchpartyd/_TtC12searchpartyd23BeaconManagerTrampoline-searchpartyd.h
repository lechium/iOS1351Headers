//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC12searchpartyd23BeaconManagerTrampoline.h"

#import "SPOwnerSessionXPCProtocol-Protocol.h"

@interface _TtC12searchpartyd23BeaconManagerTrampoline (searchpartyd) <SPOwnerSessionXPCProtocol>
- (void)executeCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d96a8
- (void)removeBeacon:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d969c
- (void)forceUpdateKeyMapsForUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d956c
- (void)forceDistributeKeysWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d94f8
- (void)rawSearchResultsForIdentifier:(id)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d929c
- (void)latestLocationsForIdentifiers:(id)arg1 fetchLimit:(id)arg2 sources:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000d90d4
@end

