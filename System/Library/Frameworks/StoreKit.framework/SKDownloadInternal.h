/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSString, NSError, NSURL, SKPaymentTransaction;

@interface SKDownloadInternal : NSObject {

	NSNumber* _downloadID;
	NSString* _productID;
	long long _state;
	float _progress;
	NSError* _error;
	NSURL* _contentURL;
	double _timeRemaining;
	NSNumber* _contentLength;
	NSString* _contentVersion;
	SKPaymentTransaction* _transaction;

}
@end
