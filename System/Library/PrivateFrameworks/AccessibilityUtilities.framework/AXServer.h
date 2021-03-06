/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class AXIPCServer, AXIPCClient, NSString, NSMutableArray, AXDispatchTimer, NSObject;

@interface AXServer : NSObject {

	BOOL _shouldRegisterClientCallbackSourceOnMainRunloop;
	AXIPCServer* _server;
	AXIPCClient* _client;
	NSString* _serverIdentifier;
	NSMutableArray* _assertionWorkBacklog;
	AXDispatchTimer* _assertionRetryTimer;
	NSObject*<OS_dispatch_queue> _assertionWorkQueue;

}

@property (nonatomic,copy) NSString * serverIdentifier;                                         //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * assertionWorkBacklog;                             //@synthesize assertionWorkBacklog=_assertionWorkBacklog - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * assertionRetryTimer;                             //@synthesize assertionRetryTimer=_assertionRetryTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assertionWorkQueue;                   //@synthesize assertionWorkQueue=_assertionWorkQueue - In the implementation block
@property (nonatomic,retain) AXIPCClient * client;                                              //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) AXIPCServer * server;                                              //@synthesize server=_server - In the implementation block
@property (assign,nonatomic) BOOL shouldRegisterClientCallbackSourceOnMainRunloop;              //@synthesize shouldRegisterClientCallbackSourceOnMainRunloop=_shouldRegisterClientCallbackSourceOnMainRunloop - In the implementation block
-(id)init;
-(void)dealloc;
-(AXIPCClient *)client;
-(void)setClient:(AXIPCClient *)arg1 ;
-(id)_serviceName;
-(id)sendMessage:(id)arg1 ;
-(void)setServer:(AXIPCServer *)arg1 ;
-(AXIPCServer *)server;
-(BOOL)_connectIfNecessary;
-(void)sendSimpleMessage:(id)arg1 ;
-(void)setShouldRegisterClientCallbackSourceOnMainRunloop:(BOOL)arg1 ;
-(void)_didConnectToServer;
-(void)_willClearServer;
-(void)_wasDisconnectedFromClient;
-(void)_didConnectToClient;
-(BOOL)sendSimpleMessageWithResult:(id)arg1 ;
-(id)sendSimpleMessageWithObjectResult:(id)arg1 ;
-(void)_connectServerIfNecessary;
-(void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 boolResultHandler:(/*^block*/id)arg3 ;
-(void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 objectResultHandler:(/*^block*/id)arg3 ;
-(void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2 ;
-(void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2 ;
-(void)setAssertionWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)sendSimpleMessage:(id)arg1 enqueueError:(id*)arg2 ;
-(NSMutableArray *)assertionWorkBacklog;
-(AXDispatchTimer *)assertionRetryTimer;
-(void)_processAssertionBacklog;
-(void)setAssertionWorkBacklog:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)assertionWorkQueue;
-(void)setAssertionRetryTimer:(AXDispatchTimer *)arg1 ;
-(void)_initializeAssertionBookkeeping;
-(BOOL)shouldRegisterClientCallbackSourceOnMainRunloop;
-(NSString *)serverIdentifier;
-(void)setServerIdentifier:(NSString *)arg1 ;
@end

