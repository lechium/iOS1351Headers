/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PKXPCService;

@interface PKInAppPaymentService : NSObject {

	PKXPCService* _remoteService;

}
-(id)init;
-(void)paymentServicesMerchantURLForAPIType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_remoteObjectProxy;
-(void)cardsAvailableForAMPWithCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cardDataForMerchantIdentifier:(id)arg1 countryCode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)secureElementStatus:(unsigned long long*)arg1 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(void)merchantStatusCheck:(id)arg1 merchantDomain:(id)arg2 sourceApplicationSecondaryIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)registerPaymentListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostIdentifier:(id)arg2 orientation:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)secureElementStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)paymentHardwareStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)enrollPaymentPassWithUniqueIdentifier:(id)arg1 merchantSession:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_remoteObjectProxyWithSemaphore:(id)arg1 ;
-(void)retrievePaymentListenerEndpointForHostIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)cardsAvailableForAMPWithCountryCode:(id)arg1 ;
@end
