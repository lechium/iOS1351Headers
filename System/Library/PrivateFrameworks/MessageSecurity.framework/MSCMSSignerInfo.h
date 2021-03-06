/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MessageSecurity/MessageSecurity-Structs.h>
@class MSAlgorithmIdentifier, MSCMSMutableAttributeArray, NSData, NSNumber, MSCMSSignedData;

@interface MSCMSSignerInfo : NSObject {

	MSAlgorithmIdentifier* _signatureAlgorithm;
	SecCertificateRef _signerCertificate;
	MSCMSMutableAttributeArray* _protectedAttributes;
	NSData* _signature;
	MSCMSMutableAttributeArray* _unprotectedAttributes;
	NSData* _LAContext;
	_SecKey* _signerPrivKey;
	SignerInfo* _encodedSignerInfo;
	NSData* _signerSerialNumber;
	NSData* _signerIssuerSequence;
	NSNumber* _version;
	MSCMSSignedData* _containingSignedData;
	MSAlgorithmIdentifier* _digestAlgorithm;
	SignerInfo_signedAttrs* _signedAttrsStruct;
	SignerInfo_unsignedAttrs* _unsignedAttrsStruct;

}

@property (assign) _SecKey* signerPrivKey;                                          //@synthesize signerPrivKey=_signerPrivKey - In the implementation block
@property (assign) SignerInfo* encodedSignerInfo;                                   //@synthesize encodedSignerInfo=_encodedSignerInfo - In the implementation block
@property (retain) NSData * signature;                                              //@synthesize signature=_signature - In the implementation block
@property (assign) SecCertificateRef signerCertificate;                             //@synthesize signerCertificate=_signerCertificate - In the implementation block
@property (retain) MSAlgorithmIdentifier * signatureAlgorithm;                      //@synthesize signatureAlgorithm=_signatureAlgorithm - In the implementation block
@property (retain) NSData * signerSerialNumber;                                     //@synthesize signerSerialNumber=_signerSerialNumber - In the implementation block
@property (retain) NSData * signerIssuerSequence;                                   //@synthesize signerIssuerSequence=_signerIssuerSequence - In the implementation block
@property (assign) SignerInfo_signedAttrs* signedAttrsStruct;                       //@synthesize signedAttrsStruct=_signedAttrsStruct - In the implementation block
@property (assign) SignerInfo_unsignedAttrs* unsignedAttrsStruct;                   //@synthesize unsignedAttrsStruct=_unsignedAttrsStruct - In the implementation block
@property (retain) NSNumber * version;                                              //@synthesize version=_version - In the implementation block
@property (__weak) MSCMSSignedData * containingSignedData;                          //@synthesize containingSignedData=_containingSignedData - In the implementation block
@property (retain) MSAlgorithmIdentifier * digestAlgorithm;                         //@synthesize digestAlgorithm=_digestAlgorithm - In the implementation block
@property (retain) MSCMSMutableAttributeArray * protectedAttributes;                //@synthesize protectedAttributes=_protectedAttributes - In the implementation block
@property (retain) MSCMSMutableAttributeArray * unprotectedAttributes;              //@synthesize unprotectedAttributes=_unprotectedAttributes - In the implementation block
@property (retain) NSData * LAContext;                                              //@synthesize LAContext=_LAContext - In the implementation block
+(id)decodeSignerInfo:(SignerInfo*)arg1 certificates:(id)arg2 LAContext:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSData *)LAContext;
-(NSData *)signature;
-(SecCertificateRef)signerCertificate;
-(void)setSignature:(NSData *)arg1 ;
-(MSAlgorithmIdentifier *)signatureAlgorithm;
-(void)setContainingSignedData:(MSCMSSignedData *)arg1 ;
-(MSAlgorithmIdentifier *)digestAlgorithm;
-(BOOL)verifySignature:(id*)arg1 ;
-(BOOL)verifyCountersignatures:(id*)arg1 ;
-(BOOL)verifyTimestamps:(id*)arg1 ;
-(BOOL)verifySignatureAndSignerWithPolicies:(id)arg1 verifyTime:(id)arg2 error:(id*)arg3 ;
-(BOOL)verifyCountersignaturesAndCountersignersWithPolicies:(id)arg1 verifyTime:(id)arg2 error:(id*)arg3 ;
-(MSCMSMutableAttributeArray *)protectedAttributes;
-(BOOL)encodeSignerInfo:(SignerInfo*)arg1 error:(id*)arg2 ;
-(void)setLAContext:(NSData *)arg1 ;
-(id)getAttributesWithType:(id)arg1 ;
-(SecTrustRef)createTrustObjectWithPolicies:(id)arg1 error:(id*)arg2 ;
-(id)verifyTime:(id)arg1 ;
-(void)setDigestAlgorithm:(MSAlgorithmIdentifier *)arg1 ;
-(id)calculateSignedAttributesDigest:(id*)arg1 ;
-(id)initWithCertificate:(SecCertificateRef)arg1 signatureAlgorithm:(id)arg2 error:(id*)arg3 ;
-(id)initWithIdentity:(SecIdentityRef)arg1 signatureAlgorithm:(id)arg2 error:(id*)arg3 ;
-(id)initWithEmail:(id)arg1 signatureAlgorithm:(id)arg2 LAContext:(id)arg3 error:(id*)arg4 ;
-(id)initWithIdentity:(SecIdentityRef)arg1 recipientsAlgorithmCapabilities:(id)arg2 error:(id*)arg3 ;
-(MSCMSSignedData *)containingSignedData;
-(BOOL)verifyContentTypeAttribute:(id*)arg1 ;
-(BOOL)verifyMessageDigestAttribute:(id)arg1 error:(id*)arg2 ;
-(id)calculateSignerInfoDigest:(id*)arg1 ;
-(MSCMSMutableAttributeArray *)unprotectedAttributes;
-(BOOL)sign:(id*)arg1 ;
-(void)setSignerCertificate:(SecCertificateRef)arg1 ;
-(void)setProtectedAttributes:(MSCMSMutableAttributeArray *)arg1 ;
-(void)setSignatureAlgorithm:(MSAlgorithmIdentifier *)arg1 ;
-(void)setUnprotectedAttributes:(MSCMSMutableAttributeArray *)arg1 ;
-(void)setEncodedSignerInfo:(SignerInfo*)arg1 ;
-(id)initWithCertificate:(SecCertificateRef)arg1 error:(id*)arg2 ;
-(id)initWithIdentity:(SecIdentityRef)arg1 error:(id*)arg2 ;
-(id)initWithEmail:(id)arg1 LAContext:(id)arg2 error:(id*)arg3 ;
-(id)initWithCertificate:(SecCertificateRef)arg1 recipientsAlgorithmCapabilities:(id)arg2 error:(id*)arg3 ;
-(id)initWithEmail:(id)arg1 recipientsAlgorithmCapabilities:(id)arg2 LAContext:(id)arg3 error:(id*)arg4 ;
-(_SecKey*)signerPrivKey;
-(void)setSignerPrivKey:(_SecKey*)arg1 ;
-(SignerInfo*)encodedSignerInfo;
-(NSData *)signerSerialNumber;
-(void)setSignerSerialNumber:(NSData *)arg1 ;
-(NSData *)signerIssuerSequence;
-(void)setSignerIssuerSequence:(NSData *)arg1 ;
-(SignerInfo_signedAttrs*)signedAttrsStruct;
-(void)setSignedAttrsStruct:(SignerInfo_signedAttrs*)arg1 ;
-(SignerInfo_unsignedAttrs*)unsignedAttrsStruct;
-(void)setUnsignedAttrsStruct:(SignerInfo_unsignedAttrs*)arg1 ;
@end

