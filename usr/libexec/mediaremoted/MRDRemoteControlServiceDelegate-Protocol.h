//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRDRemoteControlService, NSInputStream, NSOutputStream;

@protocol MRDRemoteControlServiceDelegate <NSObject>
- (void)remoteControlService:(MRDRemoteControlService *)arg1 didAcceptConnectionWithInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;
@end

