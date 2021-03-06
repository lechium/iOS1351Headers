/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PKSecureElementCertificateSet, NSString;

@interface PKAccountAttestationRequest : NSObject {

	PKSecureElementCertificateSet* _casdCertificate;
	NSString* _anonymizationSalt;

}

@property (nonatomic,retain) PKSecureElementCertificateSet * casdCertificate;              //@synthesize casdCertificate=_casdCertificate - In the implementation block
@property (nonatomic,copy) NSString * anonymizationSalt;                                   //@synthesize anonymizationSalt=_anonymizationSalt - In the implementation block
+(id)createAnonymizationSalt;
+(id)_keychainItemWrapper;
+(id)keychainDataWithError:(id*)arg1 ;
+(id)defaultAnonymizationSaltWithError:(id*)arg1 ;
+(id)setDefaultAnonymizationSalt:(id)arg1 ;
+(void)removeAccountAttesationData;
+(void)removeLocalAccountAttesationData;
-(void)setAnonymizationSalt:(NSString *)arg1 ;
-(NSString *)anonymizationSalt;
-(PKSecureElementCertificateSet *)casdCertificate;
-(void)setCasdCertificate:(PKSecureElementCertificateSet *)arg1 ;
@end

