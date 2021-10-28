//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSDIDSGroupSession, NSArray, NSDictionary, NSError, NSSet;

@protocol CSDIDSGroupSessionDelegate <NSObject>
- (void)session:(CSDIDSGroupSession *)arg1 didReceiveReport:(NSArray *)arg2;
- (void)session:(CSDIDSGroupSession *)arg1 endedWithError:(NSError *)arg2 reason:(unsigned int)arg3;
- (void)sessionDidTerminate:(CSDIDSGroupSession *)arg1;
- (void)session:(CSDIDSGroupSession *)arg1 didLeaveGroupWithError:(NSError *)arg2;
- (void)session:(CSDIDSGroupSession *)arg1 didJoinGroup:(_Bool)arg2 participantIdentifiers:(NSSet *)arg3 error:(NSError *)arg4;
- (void)session:(CSDIDSGroupSession *)arg1 receivedActiveParticipantDestinationsByIdentifier:(NSDictionary *)arg2;
@end
