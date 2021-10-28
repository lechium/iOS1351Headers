/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class EMCertificateTrustInformation, NSError;

@interface EMMessageSigner : NSObject <NSSecureCoding> {

	EMCertificateTrustInformation* _signingCertificateTrustInfo;
	EMCertificateTrustInformation* _encryptionCertificateTrustInfo;
	NSError* _error;

}

@property (nonatomic,retain) EMCertificateTrustInformation * signingCertificateTrustInfo;                 //@synthesize signingCertificateTrustInfo=_signingCertificateTrustInfo - In the implementation block
@property (nonatomic,retain) EMCertificateTrustInformation * encryptionCertificateTrustInfo;              //@synthesize encryptionCertificateTrustInfo=_encryptionCertificateTrustInfo - In the implementation block
@property (nonatomic,retain) NSError * error;                                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasSeparateSigningAndEncryptionCertificates; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(EMCertificateTrustInformation *)signingCertificateTrustInfo;
-(EMCertificateTrustInformation *)encryptionCertificateTrustInfo;
-(id)initWithSigningTrust:(id)arg1 encryptionTrust:(id)arg2 ;
-(void)reevaluateTrustWithNetworkAccessAllowed;
-(BOOL)hasSeparateSigningAndEncryptionCertificates;
-(void)evaluateTrustsWithOptions:(unsigned long long)arg1 ;
-(void)setSigningCertificateTrustInfo:(EMCertificateTrustInformation *)arg1 ;
-(void)setEncryptionCertificateTrustInfo:(EMCertificateTrustInformation *)arg1 ;
@end
