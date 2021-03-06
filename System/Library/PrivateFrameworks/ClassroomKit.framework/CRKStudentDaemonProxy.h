/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CATTaskClientDelegate.h>
#import <libobjc.A.dylib/CRKRequestPerformingProtocol.h>

@class CATTaskClient, CATOperationQueue, NSHashTable, NSString;

@interface CRKStudentDaemonProxy : NSObject <CATTaskClientDelegate, CRKRequestPerformingProtocol> {

	CATTaskClient* mTaskClient;
	CATOperationQueue* mOperationQueue;
	NSHashTable* mObservers;
	long long mConnectionAttempt;
	BOOL mConnecting;
	BOOL _connected;
	BOOL _userExpectsReconnect;
	long long _maxConnectionAttempts;

}

@property (assign,getter=isConnected,nonatomic) BOOL connected;              //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) BOOL userExpectsReconnect;                      //@synthesize userExpectsReconnect=_userExpectsReconnect - In the implementation block
@property (assign,nonatomic) long long maxConnectionAttempts;                //@synthesize maxConnectionAttempts=_maxConnectionAttempts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setActiveStudentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)studentDidAuthenticate:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)fetchResourceFromURL:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)studentDaemonConnection;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)disconnect;
-(void)connect;
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(void)enqueueOperation:(id)arg1 ;
-(void)clientDidDisconnect:(id)arg1 ;
-(void)client:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)clientDidConnect:(id)arg1 ;
-(void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(id)operationForRequest:(id)arg1 ;
-(id)enqueuedOperationForRequest:(id)arg1 ;
-(void)setUserExpectsReconnect:(BOOL)arg1 ;
-(BOOL)userExpectsReconnect;
-(long long)maxConnectionAttempts;
-(void)setMaxConnectionAttempts:(long long)arg1 ;
@end

