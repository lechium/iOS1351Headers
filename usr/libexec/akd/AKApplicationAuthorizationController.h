//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAuthorizationStoreManager;

@interface AKApplicationAuthorizationController : NSObject
{
    AKAuthorizationStoreManager *_storeManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000585f8
- (void)_credentialStateDidChange:(long long)arg1 forApplicationWithClientID:(id)arg2;	// IMP=0x0000000100058398
- (void)_processCredentialStateChanges:(id)arg1;	// IMP=0x0000000100058264
- (_Bool)revokeAuthorizationForAllApplications:(id *)arg1;	// IMP=0x00000001000580ec
- (void)revokeAuthorizationForApplicationWithClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100057fa4
- (void)storeAuthorization:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000100057ef4
- (void)updateAuthorizationListWithMetadataInfo:(id)arg1;	// IMP=0x0000000100057e54
- (id)initWithStoreManager:(id)arg1;	// IMP=0x0000000100057da0
- (id)init;	// IMP=0x0000000100057d90

@end

