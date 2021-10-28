/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface FCPurchaseLookupFetchOperationResult : NSObject {

	NSDictionary* _channelIDsByPurchaseID;
	NSDictionary* _bundleChannelIDsByPurchaseID;

}

@property (nonatomic,copy) NSDictionary * channelIDsByPurchaseID;                    //@synthesize channelIDsByPurchaseID=_channelIDsByPurchaseID - In the implementation block
@property (nonatomic,copy) NSDictionary * bundleChannelIDsByPurchaseID;              //@synthesize bundleChannelIDsByPurchaseID=_bundleChannelIDsByPurchaseID - In the implementation block
-(id)initWithChannelIDsByPurchaseID:(id)arg1 bundleChannelIDsByPurchaseID:(id)arg2 ;
-(NSDictionary *)channelIDsByPurchaseID;
-(void)setChannelIDsByPurchaseID:(NSDictionary *)arg1 ;
-(NSDictionary *)bundleChannelIDsByPurchaseID;
-(void)setBundleChannelIDsByPurchaseID:(NSDictionary *)arg1 ;
@end
