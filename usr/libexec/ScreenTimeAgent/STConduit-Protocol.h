//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, STUnifiedTransportPayload;
@protocol STConduitDelegate;

@protocol STConduit <NSObject>
@property(readonly, copy, nonatomic) NSString *organizationIdentifier;
@property(nonatomic) __weak id <STConduitDelegate> delegate;
- (void)enqueueTransportPayload:(STUnifiedTransportPayload *)arg1;
- (void)invalidate;
- (void)resume;
@end
