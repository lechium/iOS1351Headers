//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "KmlSessionCallbacks-Protocol.h"

@class DAKeyEncryptedRequest, DAKeyInformation, NSError;

@protocol KmlOwnerPairingCallbacks <KmlSessionCallbacks>
- (void)handlePairingDidStart;
- (void)handleProbingCompletionResult:(_Bool)arg1;
- (void)handlePreWarmCompletionResult:(NSError *)arg1;
- (void)handleFirstTransactionCompletionResult:(NSError *)arg1;
- (void)handleKeyPairingCompletionResult:(NSError *)arg1 keyInformation:(DAKeyInformation *)arg2 trackingRequest:(DAKeyEncryptedRequest *)arg3;
@end
