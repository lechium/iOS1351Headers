//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LADaemonXPC-Protocol.h"

@class NSMutableDictionary;

@interface Daemon : NSObject <LADaemonXPC>
{
    NSMutableDictionary *_contextMaps;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100009ed4
- (void).cxx_destruct;	// IMP=0x000000010000b68c
- (void)notifyEvent:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000b410
- (void)prearmTouchIdWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b220
- (id)_proxyWithContext:(id)arg1 callback:(id)arg2 request:(id)arg3;	// IMP=0x000000010000aee0
- (void)connectToContextWithUUID:(id)arg1 callback:(id)arg2 token:(id)arg3 senderAuditTokenData:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000ab78
- (void)connectToExistingContext:(id)arg1 userId:(unsigned int)arg2 connection:(id)arg3 checkEntitlementBlock:(CDUnknownBlockType)arg4 callback:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000010000a8d4
- (void)connectToExistingContext:(id)arg1 callback:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000a72c
- (void)connectToExistingContext:(id)arg1 callback:(id)arg2 processId:(int)arg3 userId:(unsigned int)arg4 auditSessionId:(int)arg5 auditToken:(CDStruct_4c969caf)arg6 cApiOrigin:(_Bool)arg7 checkEntitlementBlock:(CDUnknownBlockType)arg8 invalidationBlock:(CDUnknownBlockType)arg9 connectionHash:(unsigned long long)arg10 reply:(CDUnknownBlockType)arg11;	// IMP=0x0000000100009fa4
- (id)init;	// IMP=0x0000000100009f40

@end

