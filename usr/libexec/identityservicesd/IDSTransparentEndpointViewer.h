//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSTransparentEndpointViewer : NSObject
{
}

- (void)internal_nukeTransparencyState:(CDUnknownBlockType)arg1;	// IMP=0x00000001005fc3e4
- (void)internal_nukeCloudKitTransparencyStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001005fc280
- (void)internal_fetchCloudKitTransparencyStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001005fbdd4
- (void)internal_fetchVerifierAccountKeyPublicDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001005fbbf4
- (void)internal_fetchVerifierAccountKeyTrustedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001005fb840
- (void)internal_fetchVerifierCloudKitTrustedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001005fb48c
- (void)internal_fetchVerifierTrustedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001005fb0d8
- (void)internal_kickVerificationForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001005faca8
- (void)internal_fetchTransparentEndpointsForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 verifyAgainstTrustCircle:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001005fa4fc
- (void)internal_fetchEndpointCacheStateForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001005fa2a0
- (id)_keyTransparencyEntriesForEndpoints:(id)arg1;	// IMP=0x00000001005fa084
- (void)performOutstandingKeyTransparencyVerificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001005f94a4
- (void)schedulePeriodicKeyTransparencyVerificationActivity;	// IMP=0x00000001005f8aac
- (id)_peerIDManager;	// IMP=0x00000001005f8a6c
- (id)_registrationKeyManager;	// IMP=0x00000001005f8a2c
- (id)_cloudKitContainer;	// IMP=0x00000001005f89c8
- (id)_verifier;	// IMP=0x00000001005f8988

@end

