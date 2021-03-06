/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CRKKeychain;
@class CRKAnnotatedCredentialStore, NSDictionary, CRKASMCredentialManifest;

@interface CRKASMCredentialStore : NSObject {

	id<CRKKeychain> _keychain;
	CRKAnnotatedCredentialStore* _certificateAnnotatedStore;
	CRKAnnotatedCredentialStore* _identityAnnotatedStore;

}

@property (nonatomic,readonly) id<CRKKeychain> keychain;                                             //@synthesize keychain=_keychain - In the implementation block
@property (nonatomic,readonly) CRKAnnotatedCredentialStore * certificateAnnotatedStore;              //@synthesize certificateAnnotatedStore=_certificateAnnotatedStore - In the implementation block
@property (nonatomic,readonly) CRKAnnotatedCredentialStore * identityAnnotatedStore;                 //@synthesize identityAnnotatedStore=_identityAnnotatedStore - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * debugInfo; 
@property (nonatomic,copy,readonly) CRKASMCredentialManifest * certificateManifest; 
@property (nonatomic,copy,readonly) CRKASMCredentialManifest * identityManifest; 
-(id<CRKKeychain>)keychain;
-(NSDictionary *)debugInfo;
-(id)certificateWithPersistentID:(id)arg1 ;
-(id)identityWithPersistentID:(id)arg1 ;
-(CRKAnnotatedCredentialStore *)certificateAnnotatedStore;
-(CRKAnnotatedCredentialStore *)identityAnnotatedStore;
-(id)makeIdentityWithCommonNamePrefix:(id)arg1 userIdentifier:(id)arg2 ;
-(id)addCertificates:(id)arg1 forUserIdentifier:(id)arg2 ;
-(id)makeEntryWithCertificate:(id)arg1 userIdentifier:(id)arg2 ;
-(id)addEntriesByCertificate:(id)arg1 ;
-(id)addIdentity:(id)arg1 entry:(id)arg2 ;
-(id)initWithKeychain:(id)arg1 accessGroup:(id)arg2 certificateManifestStorageKey:(id)arg3 identityManifestStorageKey:(id)arg4 ;
-(CRKASMCredentialManifest *)certificateManifest;
-(void)removeCertificatesWithPersistentIDs:(id)arg1 ;
-(void)forgetCertificatesWithPersistentIDs:(id)arg1 ;
-(id)makeCertificateWithCommonNamePrefix:(id)arg1 userIdentifier:(id)arg2 ;
-(id)addCertificate:(id)arg1 forUserIdentifier:(id)arg2 ;
-(id)addCertificate:(id)arg1 entry:(id)arg2 ;
-(CRKASMCredentialManifest *)identityManifest;
-(void)removeIdentitiesWithPersistentIDs:(id)arg1 ;
-(void)forgetIdentitiesWithPersistentIDs:(id)arg1 ;
-(id)addIdentity:(id)arg1 forUserIdentifier:(id)arg2 ;
@end

