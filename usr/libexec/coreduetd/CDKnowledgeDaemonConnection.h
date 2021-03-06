//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DKDaemonInterface-Protocol.h"

@class CDKnowledgeDaemon, NSSet;

@interface CDKnowledgeDaemonConnection : NSObject <_DKDaemonInterface>
{
    NSSet *_authorizedEventStreamsToRead;	// 8 = 0x8
    CDKnowledgeDaemon *_daemon;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100021e74
@property(retain, nonatomic) CDKnowledgeDaemon *daemon; // @synthesize daemon=_daemon;
@property(retain, nonatomic) NSSet *authorizedEventStreamsToRead; // @synthesize authorizedEventStreamsToRead=_authorizedEventStreamsToRead;
- (void)confirmDatabaseConnectionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100021de0
- (void)deviceUUIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100021d1c
- (void)sourceDeviceIdentityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100021c58
- (void)deleteRemoteState:(CDUnknownBlockType)arg1;	// IMP=0x0000000100021b94
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021aa4
- (void)synchronizeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000219e0
- (void)deleteAllEventsMatchingPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021900
- (void)deleteAllEventsInEventStreamNamed:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021820
- (void)executeQuery:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021614
- (void)deleteObjects:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021534
- (void)saveObjects:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021454
- (id)unauthorizedClientError;	// IMP=0x0000000100021374

@end

