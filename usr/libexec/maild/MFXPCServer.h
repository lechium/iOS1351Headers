//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailServices/MSXPCService.h>

@class MFXPCClient;

@interface MFXPCServer : MSXPCService
{
    MFXPCClient *_client;	// 8 = 0x8
}

+ (id)endpointInfo;	// IMP=0x00000001000ce168
+ (id)exportedInterface;	// IMP=0x00000001000ce15c
- (void).cxx_destruct;	// IMP=0x00000001000ce410
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ce40c
- (id)newConnectionForInterface:(id)arg1;	// IMP=0x00000001000ce404
- (id)initWithClient:(id)arg1;	// IMP=0x00000001000ce368
- (id)initWithRemoteObjectInterface:(id)arg1;	// IMP=0x00000001000ce2ec
- (id)init;	// IMP=0x00000001000ce290

@end

