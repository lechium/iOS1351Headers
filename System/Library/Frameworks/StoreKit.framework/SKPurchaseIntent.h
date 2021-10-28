/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, SKXPCConnection;

@interface SKPurchaseIntent : NSObject {

	NSString* _bundleId;
	NSString* _productIdentifer;
	NSString* _appName;
	NSString* _productName;
	SKXPCConnection* _connection;
	/*^block*/id __completion;

}

@property (nonatomic,copy) id _completion;              //@synthesize _completion=__completion - In the implementation block
-(id)_completion;
-(void)send:(/*^block*/id)arg1 ;
-(void)set_completion:(id)arg1 ;
-(void)_send;
-(id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2 appName:(id)arg3 productName:(id)arg4 ;
-(id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2 ;
@end
