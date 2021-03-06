//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSDRelayCall, NSError, TUAnswerRequest, TUCall;

@protocol CSDRelayCallDelegate <NSObject>
- (void)relayCallConferenceDidStop:(CSDRelayCall *)arg1 cleanly:(_Bool)arg2 error:(NSError *)arg3;
- (void)relayCallConferenceFailedToStart:(CSDRelayCall *)arg1;
- (void)relayCallConferenceDidStartSuccessfullyForPulledCall:(CSDRelayCall *)arg1;
- (void)relayCallConferenceDidStartSuccessfullyForOutgoingDialedCall:(CSDRelayCall *)arg1;
- (void)relayCallConferenceDidStartSuccessfullyForIncomingAnsweredCall:(CSDRelayCall *)arg1;
- (void)relayCallDidSendHardPauseDigits:(CSDRelayCall *)arg1;
- (void)relayCall:(CSDRelayCall *)arg1 didPlayLocalDTMFToneForKey:(unsigned char)arg2;
- (void)relayCallDidBecomeEndpointForPull:(CSDRelayCall *)arg1;
- (void)relayCallDidUngroup:(CSDRelayCall *)arg1;
- (void)relayCall:(CSDRelayCall *)arg1 didGroupWithOtherCall:(TUCall *)arg2;
- (void)relayCallDidUnhold:(CSDRelayCall *)arg1;
- (void)relayCallDidHold:(CSDRelayCall *)arg1;
- (void)relayCallDidDisconnect:(CSDRelayCall *)arg1;
- (void)relayCall:(CSDRelayCall *)arg1 didAnswerWithRequest:(TUAnswerRequest *)arg2;
- (void)relayCallDidDial:(CSDRelayCall *)arg1;
@end

