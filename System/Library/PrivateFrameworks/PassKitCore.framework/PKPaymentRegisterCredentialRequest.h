/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, NSDictionary, PKAppletSubcredential;

@interface PKPaymentRegisterCredentialRequest : PKPaymentWebServiceRequest {

	NSString* _credentialIdentifier;
	NSDictionary* _metadata;
	NSDictionary* _registrationData;
	PKAppletSubcredential* _credential;

}

@property (nonatomic,retain) PKAppletSubcredential * credential;              //@synthesize credential=_credential - In the implementation block
+(id)requestMetadataFromCarKeyRegistrationMetadata:(id)arg1 withPartnerIdentifier:(id)arg2 ;
+(id)requestMetadataFromRegistrationMetadata:(id)arg1 withPartnerIdentifier:(id)arg2 ;
+(id)requestRegistrationDataFromRegistrationData:(id)arg1 ;
-(PKAppletSubcredential *)credential;
-(void)setCredential:(PKAppletSubcredential *)arg1 ;
-(id)initWithCredential:(id)arg1 registrationData:(id)arg2 metadata:(id)arg3 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)requestBody;
@end

