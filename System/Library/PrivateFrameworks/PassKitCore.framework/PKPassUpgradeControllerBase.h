/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PassKitCore/PassKitCore-Structs.h>
@class NSMutableDictionary, PKPaymentWebService;

@interface PKPassUpgradeControllerBase : NSObject {

	/*^block*/id _addPaymentPassToLibrary;
	os_unfair_lock_s _pass_upgrade_lock;
	NSMutableDictionary* _pendingPassUpgrades;
	PKPaymentWebService* _paymentWebService;

}

@property (nonatomic,retain) PKPaymentWebService * paymentWebService;              //@synthesize paymentWebService=_paymentWebService - In the implementation block
-(void)requestPassUpgrade:(id)arg1 pass:(id)arg2 diagnosticReason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(PKPaymentWebService *)paymentWebService;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
-(id)initWithWebService:(id)arg1 addPaymentPassToLibrary:(/*^block*/id)arg2 ;
-(void)appletsDidUpdate;
-(void)downloadUpgradedPassForPassUniqueID:(id)arg1 atURL:(id)arg2 ;
-(void)completePassUpgradeForPassUniqueID:(id)arg1 withError:(id)arg2 ;
@end
