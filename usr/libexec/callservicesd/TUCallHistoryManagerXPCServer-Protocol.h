//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSUUID;
@protocol TUCallHistoryManagerXPCClient;

@protocol TUCallHistoryManagerXPCServer <NSObject>
- (void)unregisterClient:(id <TUCallHistoryManagerXPCClient>)arg1;
- (void)registerClient:(id <TUCallHistoryManagerXPCClient>)arg1;
- (oneway void)updateOutgoingLocalParticipantUUID:(NSUUID *)arg1 forCallsWithOutgoingLocalParticipantUUID:(NSUUID *)arg2;
@end
