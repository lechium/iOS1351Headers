//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class STTransportPayloadManager, STUnifiedTransportPayload;

@protocol STTransportPayloadManagerDelegate <NSObject>
- (void)payloadManagerDidInvalidate:(STTransportPayloadManager *)arg1;
- (void)payloadManager:(STTransportPayloadManager *)arg1 didReceivePayload:(STUnifiedTransportPayload *)arg2;
- (void)payloadManager:(STTransportPayloadManager *)arg1 didDeliverPayload:(STUnifiedTransportPayload *)arg2;
@end
