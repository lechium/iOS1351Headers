/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentProvisioningMethodMetadataRequest : PKPaymentWebServiceRequest {

	NSString* _productIdentifier;
	NSString* _provisioningMethod;

}

@property (nonatomic,copy) NSString * productIdentifier;               //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSString * provisioningMethod;              //@synthesize provisioningMethod=_provisioningMethod - In the implementation block
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(id)initWithProductIdentifier:(id)arg1 provisioningMethod:(id)arg2 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(NSString *)provisioningMethod;
-(void)setProvisioningMethod:(NSString *)arg1 ;
@end
