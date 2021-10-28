//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSDRelayIDSMessengerDelegate-Protocol.h"

@class CSDMessagingRelayMessage, IDSDestination, NSArray;

@protocol CSDRelayIDSSessionMessengerDelegate <CSDRelayIDSMessengerDelegate>
- (NSArray *)identifiersForSessionInvitationWithMessage:(CSDMessagingRelayMessage *)arg1;
- (long long)timeoutForInvitationWithMessage:(CSDMessagingRelayMessage *)arg1;
- (_Bool)shouldIgnoreSessionInviteWithMessage:(CSDMessagingRelayMessage *)arg1 fromDestination:(IDSDestination *)arg2;
- (_Bool)shouldDeclineSessionInviteWithMessageWhenRelayIsDisabled:(CSDMessagingRelayMessage *)arg1;
- (_Bool)shouldDeclineSecondSessionInviteWithMessage:(CSDMessagingRelayMessage *)arg1;
@end
