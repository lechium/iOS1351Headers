//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData, NSString;

@protocol SEKeyXPCInterface
- (oneway void)createCertificateForKeyData:(NSData *)arg1 withKeyData:(NSData *)arg2 subjectIdentifier:(NSString *)arg3 authorityIdentifier:(NSString *)arg4 laExternalizedContext:(NSData *)arg5 nonce:(NSData *)arg6 OIDs:(NSArray *)arg7 reply:(void (^)(NSData *, NSError *))arg8;
- (oneway void)createSEABAASCertificate:(NSData *)arg1 subjectIdentifier:(NSString *)arg2 nonce:(NSData *)arg3 OIDs:(NSArray *)arg4 reply:(void (^)(NSData *, NSError *))arg5;
- (oneway void)rewrapWithSEKey:(NSData *)arg1 cipherText:(NSData *)arg2 publicKey:(NSData *)arg3 decryptAlgorithm:(NSString *)arg4 decryptSharedInfo:(NSData *)arg5 encryptAlgorithm:(NSString *)arg6 encryptSharedInfo:(NSData *)arg7 certificate:(NSData *)arg8 laExternalizedContext:(NSData *)arg9 decryptAuthenticationData:(NSData *)arg10 decryptAuthenticationTag:(NSData *)arg11 encryptAuthenticationData:(NSData *)arg12 reply:(void (^)(NSData *, NSData *, NSError *))arg13;
- (oneway void)decryptWithSEKey:(NSData *)arg1 cipherText:(NSData *)arg2 publicKey:(NSData *)arg3 algorithm:(NSString *)arg4 laExternalizedContext:(NSData *)arg5 sharedInfo:(NSData *)arg6 authenticationData:(NSData *)arg7 authenticationTag:(NSData *)arg8 reply:(void (^)(NSData *, NSError *))arg9;
- (oneway void)encryptWithSEKey:(NSData *)arg1 plainText:(NSData *)arg2 publicKey:(NSData *)arg3 algorithm:(NSString *)arg4 laExternalizedContext:(NSData *)arg5 sharedInfo:(NSData *)arg6 authenticationData:(NSData *)arg7 reply:(void (^)(NSData *, NSData *, NSError *))arg8;
- (oneway void)sharedSecretWithSEKey:(NSData *)arg1 publicKey:(NSData *)arg2 algorithm:(NSString *)arg3 laExternalizedContext:(NSData *)arg4 reply:(void (^)(NSData *, NSError *))arg5;
- (oneway void)signWithSEKey:(NSData *)arg1 data:(NSData *)arg2 algorithm:(NSString *)arg3 laExternalizedContext:(NSData *)arg4 reply:(void (^)(NSData *, NSError *))arg5;
- (oneway void)deleteSEKey:(NSData *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)createSEKey:(NSData *)arg1 reply:(void (^)(NSData *, NSError *))arg2;
@end

