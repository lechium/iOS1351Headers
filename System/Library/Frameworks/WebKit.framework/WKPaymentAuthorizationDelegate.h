/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebKit/WebKit-Structs.h>
@interface WKPaymentAuthorizationDelegate : NSObject {

	RetainPtr<PKPaymentRequest>* _request;
	BOOL _didReachFinalState;
	RetainPtr<NSArray<PKPaymentSummaryItem *> >* _summaryItems;
	RetainPtr<NSArray<PKShippingMethod *> >* _shippingMethods;
	RetainPtr<NSError>* _sessionError;
	WeakPtr<WebKit::PaymentAuthorizationPresenter>* _presenter;
	BlockPtr<void (PKPaymentAuthorizationResult *)> _didAuthorizePaymentCompletion;
	BlockPtr<void (PKPaymentMerchantSession *, NSError *)> _didRequestMerchantSessionCompletion;
	BlockPtr<void (PKPaymentRequestPaymentMethodUpdate *)> _didSelectPaymentMethodCompletion;
	BlockPtr<void (PKPaymentRequestShippingContactUpdate *)> _didSelectShippingContactCompletion;
	BlockPtr<void (PKPaymentRequestShippingMethodUpdate *)> _didSelectShippingMethodCompletion;

}
-(void)invalidate;
-(void)_didFinish;
-(void)completeMerchantValidation:(id)arg1 error:(id)arg2 ;
-(void)completePaymentMethodSelection:(id)arg1 ;
-(void)completePaymentSession:(long long)arg1 errors:(id)arg2 didReachFinalState:(BOOL)arg3 ;
-(void)completeShippingContactSelection:(id)arg1 ;
-(void)completeShippingMethodSelection:(id)arg1 ;
-(id)_initWithRequest:(id)arg1 presenter:(PaymentAuthorizationPresenter*)arg2 ;
-(void)_didAuthorizePayment:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didSelectShippingMethod:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didSelectShippingContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didSelectPaymentMethod:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_willFinishWithError:(id)arg1 ;
-(void)_didRequestMerchantSession:(/*^block*/id)arg1 ;
-(void)_getPaymentServicesMerchantURL:(/*^block*/id)arg1 ;
-(id)shippingMethods;
-(id)summaryItems;
@end
