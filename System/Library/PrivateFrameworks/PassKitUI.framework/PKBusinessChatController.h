/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccountStore, AKAnisetteProvisioningController;

@interface PKBusinessChatController : NSObject {

	ACAccountStore* _accountStore;
	AKAnisetteProvisioningController* _provisioningController;

}
-(id)init;
-(void)openBusinessChatWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_generateAuthBagWithCompletion:(/*^block*/id)arg1 ;
@end

