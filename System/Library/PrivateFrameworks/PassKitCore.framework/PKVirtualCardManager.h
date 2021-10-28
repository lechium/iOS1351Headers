/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PKInAppPaymentService, PKAccountService;

@interface PKVirtualCardManager : NSObject {

	PKInAppPaymentService* _inAppPaymentService;
	PKAccountService* _accountService;

}
-(id)init;
-(void)queryKeychainForVirtualCard:(/*^block*/id)arg1 ;
-(void)activeVirtualCardsWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)credentialsForVirtualCard:(id)arg1 authorization:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)urlToPassDetailsForVirtualCard:(id)arg1 ;
-(void)promptDetailsForVirtualCard:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissDetailsForVirtualCard:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
