//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRRemoteObject.h"

@interface NRRemoteObjectClassD : NRRemoteObject
{
}

- (void)sendMigrationCompletionWithStatus:(unsigned long long)arg1 toIDSBTUUID:(id)arg2 withResponseBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100060b74
- (void)idsHandleWatchMigrationCompletionRequest:(id)arg1;	// IMP=0x0000000100060910
- (void)idsHandlePingRequest:(id)arg1;	// IMP=0x00000001000605d8
- (void)sendPingRequestType:(int)arg1 withMessagePriority:(long long)arg2 withMessageSize:(unsigned long long)arg3 withTimeout:(double)arg4 toIDSBTUUID:(id)arg5 withResponseBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000100060218
- (void)sendUnpairMessageWithAdvertisedName:(id)arg1 btUUID:(id)arg2 shouldObliterate:(id)arg3 shouldBrick:(id)arg4 shouldPreserveESim:(id)arg5 withPairingFailureCode:(id)arg6 withAbortReason:(id)arg7 withRequestIdentifier:(id)arg8 responseBlock:(CDUnknownBlockType)arg9;	// IMP=0x000000010005fde8
- (void)idsHandleWillUnpair:(id)arg1;	// IMP=0x000000010005f904
- (void)sendPairingModeRequest:(unsigned short)arg1 toIDSBTUUID:(id)arg2 withSentBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010005f678
- (void)registerProtobufHandlers;	// IMP=0x000000010005f5f8
- (id)initWithDelegate:(id)arg1 andQueue:(id)arg2;	// IMP=0x000000010005f580

@end

