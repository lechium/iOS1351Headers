/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SKPaymentQueueDelegate;
@class NSString, SKPaymentQueueClient, NSMutableDictionary, NSMutableArray, SKXPCConnection;

@interface SKPaymentQueueInternal : NSObject {

	BOOL _checkedIn;
	BOOL _isRefreshing;
	BOOL _restoreFinishedDuringRefresh;
	BOOL _restoringCompletedTransactions;
	NSString* _identifier;
	SKPaymentQueueClient* _client;
	NSMutableDictionary* _downloads;
	NSMutableArray* _localTransactions;
	NSMutableArray* _transactions;
	NSMutableArray* _weakObservers;
	SKXPCConnection* _requestConnection;
	SKXPCConnection* _responseConnection;
	id<SKPaymentQueueDelegate> _delegate;

}
-(id)init;
-(void)dealloc;
@end
