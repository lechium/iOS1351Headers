/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:32 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPaymentAuthorizationServiceProtocol <NSObject>
@optional
-(void)handleHostApplicationDidCancel;
-(void)handleDismissWithCompletion:(/*^block*/id)arg1;
-(void)prepareWithPaymentRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
-(void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
-(void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
-(void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1;

@required
-(void)handleHostApplicationWillResignActive:(BOOL)arg1;
-(void)handleHostApplicationDidBecomeActive;
-(void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
-(void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg1;
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
-(void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
-(void)authorizationDidAuthorizeDisbursementWithResult:(id)arg1;
-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;
-(void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2;
-(void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
-(void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
-(void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;

@end
