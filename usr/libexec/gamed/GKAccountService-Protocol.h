//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol GKAccountService <NSObject>
- (oneway void)getLastPersonalizationVersionDisplayedForSignedInPlayerWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)setLastPersonalizationVersionDisplayedForSignedInPlayer:(NSString *)arg1;
- (oneway void)getLastPrivacyNoticeVersionDisplayedForSignedInPlayerWithHandler:(void (^)(unsigned long long, NSError *))arg1;
- (oneway void)setLastPrivacyNoticeVersionDisplayedForSignedInPlayer:(unsigned long long)arg1;
- (oneway void)resetCredentialsWithHandler:(void (^)(NSError *))arg1;
- (oneway void)signOutPlayerWithHandler:(void (^)(NSError *))arg1;
- (oneway void)authenticationWasCancelled;
- (oneway void)fetchItemsForIdentityVerificationSignature:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)generateIdentityVerificationSignatureWithHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(void (^)(GKAuthenticateResponse *, NSError *))arg1;
@end

