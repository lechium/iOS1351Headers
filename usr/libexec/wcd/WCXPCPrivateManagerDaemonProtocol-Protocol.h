//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, NSURL;

@protocol WCXPCPrivateManagerDaemonProtocol <NSObject>
- (void)reconnect;
- (void)fakeIncomingPayloadOnSubService:(NSString *)arg1 ofType:(NSString *)arg2 clientData:(NSData *)arg3 resource:(NSURL *)arg4 resourceSandboxToken:(NSData *)arg5 completionHandler:(void (^)(NSError *))arg6;
@end
