/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCPaidAccessCheckerType
@property (nonatomic,readonly) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider; 
@property (nonatomic,readonly) id<FCPurchaseProviderType> purchaseProvider; 
@required
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1;
-(id<FCBundleSubscriptionProviderType>)bundleSubscriptionProvider;
-(id<FCPurchaseProviderType>)purchaseProvider;
-(BOOL)canGetAccessToItemPaid:(BOOL)arg1 bundlePaid:(BOOL)arg2 channel:(id)arg3;
-(BOOL)canGetSubscriptionToChannel:(id)arg1;
-(BOOL)canGetBundleSubscriptionToChannel:(id)arg1;
-(BOOL)isPreparedForUse;

@end
