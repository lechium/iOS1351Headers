//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCAssistiveTouchServerRemote, NSString, NSXPCConnection;
@protocol ACCAssistiveTouchXPCClientProtocol;

@interface _ACCAssistiveTouchProviderInfo : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <ACCAssistiveTouchXPCClientProtocol> _remoteObject;	// 16 = 0x10
    ACCAssistiveTouchServerRemote *_serverRemote;	// 24 = 0x18
    NSString *_providerUID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000c8e74
@property(retain, nonatomic) NSString *providerUID; // @synthesize providerUID=_providerUID;
@property(retain, nonatomic) ACCAssistiveTouchServerRemote *serverRemote; // @synthesize serverRemote=_serverRemote;
@property(retain, nonatomic) id <ACCAssistiveTouchXPCClientProtocol> remoteObject; // @synthesize remoteObject=_remoteObject;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)description;	// IMP=0x00000001000c8ddc
- (void)dealloc;	// IMP=0x00000001000c8d6c
- (id)init;	// IMP=0x00000001000c8cf4

@end

