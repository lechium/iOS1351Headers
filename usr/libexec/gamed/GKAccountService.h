//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKAccountService-Protocol.h"

@class NSString;

@interface GKAccountService : GKService <GKAccountService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0000000100158c48
+ (Class)interfaceClass;	// IMP=0x0000000100158c3c
- (oneway void)getLastPersonalizationVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010015a4e4
- (oneway void)setLastPersonalizationVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x000000010015a2dc
- (oneway void)getLastPrivacyNoticeVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100159f8c
- (oneway void)setLastPrivacyNoticeVersionDisplayedForSignedInPlayer:(unsigned long long)arg1;	// IMP=0x0000000100159d4c
- (oneway void)signOutPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100158fac
- (oneway void)resetCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100158f6c
- (oneway void)authenticationWasCancelled;	// IMP=0x0000000100158f20
- (oneway void)fetchItemsForIdentityVerificationSignature:(CDUnknownBlockType)arg1;	// IMP=0x0000000100158ddc
- (oneway void)generateIdentityVerificationSignatureWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100158c98
- (oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100158c50
- (void)dealloc;	// IMP=0x0000000100158c08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
