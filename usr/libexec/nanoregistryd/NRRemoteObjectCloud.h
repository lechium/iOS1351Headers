//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRRemoteObject.h"

@interface NRRemoteObjectCloud : NRRemoteObject
{
}

+ (_Bool)messagesShouldHaveValidSender;	// IMP=0x00000001000dd1dc
- (void)sendSystemVersionsRequestToCompanionWithSentBlock:(CDUnknownBlockType)arg1 withResponseBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dd9f4
- (void)sendSystemVersionsResponseWithSystemVersions:(id)arg1 forRequest:(id)arg2;	// IMP=0x00000001000dd794
- (void)sendSystemVersionsToDestinations:(id)arg1 withSentBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dd440
- (void)sendTermsEventToDestinations:(id)arg1 termsEvent:(id)arg2 withSentBlock:(CDUnknownBlockType)arg3 withResponseBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000dd1e8
- (void)sendMigratedAwayToDestination:(id)arg1 advertisedName:(id)arg2 withSentBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dd1e4
- (void)idsHandleReceiveSystemVersionBroadcast:(id)arg1;	// IMP=0x00000001000dd1d8
- (void)idsHandleSystemVersionRequest:(id)arg1;	// IMP=0x00000001000dd014
- (void)idsHandleAddTermsCloudEvent:(id)arg1;	// IMP=0x00000001000dccc0
- (void)idsHandleMigratedAwayRequest:(id)arg1;	// IMP=0x00000001000dcaf0
- (void)idsHandleMigrationRequest:(id)arg1;	// IMP=0x00000001000dcaec
- (void)sendMigrationRequestToDestinations:(id)arg1 shouldCancel:(_Bool)arg2 withSentBlock:(CDUnknownBlockType)arg3 withResponseBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000dc618
- (void)registerProtobufHandlers;	// IMP=0x00000001000dc5b4
- (id)initWithDelegate:(id)arg1 andQueue:(id)arg2;	// IMP=0x00000001000dc538

@end

