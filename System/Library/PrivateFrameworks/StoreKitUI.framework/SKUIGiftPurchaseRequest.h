/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SKUIURLConnectionRequest;

@interface SKUIGiftPurchaseRequest : NSObject {

	SKUIURLConnectionRequest* _request;

}
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)purchaseWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithDonation:(id)arg1 configuration:(id)arg2 ;
-(id)_requestWithURL:(id)arg1 bodyDictionary:(id)arg2 ;
@end
