/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface SPExtensionDaemonManager : NSObject {

	BOOL _active;
	long long _refCount;
	NSObject*<OS_dispatch_source> _transactionTimer;
	NSObject*<OS_dispatch_queue> _transactionQueue;
	NSMutableSet* _transactionObservers;
	NSMutableDictionary* _coreLocationAsserts;
	NSObject*<OS_dispatch_queue> _coreLocationAssertsQueue;

}

@property (assign,nonatomic) long long refCount;                                                 //@synthesize refCount=_refCount - In the implementation block
@property (assign,nonatomic) BOOL active;                                                        //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> transactionTimer;                     //@synthesize transactionTimer=_transactionTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> transactionQueue;                      //@synthesize transactionQueue=_transactionQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * transactionObservers;                                //@synthesize transactionObservers=_transactionObservers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coreLocationAsserts;                          //@synthesize coreLocationAsserts=_coreLocationAsserts - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> coreLocationAssertsQueue;              //@synthesize coreLocationAssertsQueue=_coreLocationAssertsQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(long long)refCount;
-(void)setActive:(BOOL)arg1 ;
-(void)beginTransaction;
-(void)endTransaction;
-(BOOL)active;
-(void)keepAlive;
-(NSObject*<OS_dispatch_queue>)transactionQueue;
-(void)setTransactionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)addTransactionObserver:(id)arg1 ;
-(void)removeTransactionObserver:(id)arg1 ;
-(void)startTransactionTimer;
-(void)transactionTimeOut;
-(void)setRefCount:(long long)arg1 ;
-(NSObject*<OS_dispatch_source>)transactionTimer;
-(void)setTransactionTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSMutableSet *)transactionObservers;
-(void)setTransactionObservers:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)coreLocationAsserts;
-(void)setCoreLocationAsserts:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)coreLocationAssertsQueue;
-(void)setCoreLocationAssertsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

