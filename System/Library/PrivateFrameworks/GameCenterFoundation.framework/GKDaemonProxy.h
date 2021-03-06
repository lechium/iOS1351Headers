/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKServiceProxy.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/GKClientProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, GKDaemonProxyDataUpdateDelegate, GKDaemonProxyNetworkActivityIndicatorDelegate;
@class NSXPCConnection, NSDictionary, NSObject, NSString;

@interface GKDaemonProxy : GKServiceProxy <NSXPCConnectionDelegate, GKClientProtocol> {

	int _hostPID;
	NSXPCConnection* _connection;
	NSDictionary* _interfaceLookup;
	NSObject*<OS_dispatch_queue> _invocationQueue;
	NSObject*<OS_dispatch_semaphore> _concurrentRequestSemaphore;
	id<GKDaemonProxyDataUpdateDelegate> _dataUpdateDelegate;
	id<GKDaemonProxyNetworkActivityIndicatorDelegate> _networkActivityIndicatorDelegate;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                                                    //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int hostPID;                                                                                     //@synthesize hostPID=_hostPID - In the implementation block
@property (assign,nonatomic) id<GKDaemonProxyDataUpdateDelegate> dataUpdateDelegate;                                          //@synthesize dataUpdateDelegate=_dataUpdateDelegate - In the implementation block
@property (assign,nonatomic) id<GKDaemonProxyNetworkActivityIndicatorDelegate> networkActivityIndicatorDelegate;              //@synthesize networkActivityIndicatorDelegate=_networkActivityIndicatorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)daemonProxy;
+(id)proxyForPlayer:(id)arg1 ;
+(void)removeProxyForPlayer:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)accountName;
-(int)hostPID;
-(void)setHostPID:(int)arg1 ;
-(BOOL)hasAuthenticatedAccount;
-(id)authenticatedLocalPlayersWithStatus:(unsigned long long)arg1 ;
-(oneway void)beginNetworkActivity;
-(oneway void)endNetworkActivity;
-(oneway void)resetNetworkActivity;
-(void)setDataUpdateDelegate:(id<GKDaemonProxyDataUpdateDelegate>)arg1 ;
-(id<GKDaemonProxyDataUpdateDelegate>)dataUpdateDelegate;
-(oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2 ;
-(oneway void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(oneway void)friendRequestSelected:(id)arg1 ;
-(oneway void)session:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3 ;
-(oneway void)session:(id)arg1 player:(id)arg2 didSaveData:(id)arg3 ;
-(oneway void)session:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3 ;
-(oneway void)session:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4 ;
-(oneway void)cancelGameInvite:(id)arg1 ;
-(oneway void)relayPushNotification:(id)arg1 ;
-(id)localizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2 ;
-(id)invocationQueue;
-(void)_resetServiceLookup;
-(void)addInterface:(id)arg1 toLookup:(id)arg2 ;
-(void)resetServiceLookup;
-(void)buildInterfaceLookup;
-(oneway void)getAuthenticatedPlayerIDWithHandler:(/*^block*/id)arg1 ;
-(oneway void)getAccountNameWithHandler:(/*^block*/id)arg1 ;
-(id<GKDaemonProxyNetworkActivityIndicatorDelegate>)networkActivityIndicatorDelegate;
-(oneway void)receivedChallengeSelected:(id)arg1 ;
-(oneway void)completedChallengeSelected:(id)arg1 ;
-(void)dispatchCompletedChallenge:(id)arg1 ;
-(oneway void)challengeReceived:(id)arg1 ;
-(oneway void)challengeCompleted:(id)arg1 ;
-(oneway void)processQuickAction:(id)arg1 ;
-(void)resetLoginCancelCount;
-(id)replyQueueForRequestSelector:(SEL)arg1 ;
-(oneway void)setPreferencesValues:(id)arg1 ;
-(oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)authenticatedPlayersDidChange:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2 ;
-(oneway void)respondedToNearbyInvite:(id)arg1 ;
-(oneway void)acceptMultiplayerGameInvite;
-(oneway void)acceptInviteWithNotification:(id)arg1 ;
-(oneway void)declineInviteWithNotification:(id)arg1 ;
-(oneway void)didConnectToParticipantWithID:(id)arg1 ;
-(oneway void)didDisconnectFromParticipantWithID:(id)arg1 ;
-(oneway void)didReceiveData:(id)arg1 reliably:(BOOL)arg2 forRecipients:(id)arg3 fromSender:(id)arg4 ;
-(oneway void)localPlayerAcceptedCustomTournamentInvite;
-(oneway void)session:(id)arg1 addedPlayer:(id)arg2 ;
-(oneway void)session:(id)arg1 removedPlayer:(id)arg2 ;
-(oneway void)fetchTurnBasedData;
-(oneway void)scoreSelected:(id)arg1 ;
-(oneway void)achievementSelected:(id)arg1 ;
-(oneway void)setLogBits:(int)arg1 ;
-(id)concurrentRequestSemaphore;
-(id)interfaceLookup;
-(oneway void)setTestGame:(id)arg1 ;
-(id)authenticatedPlayerID;
-(id)authenticatedPlayerInfo;
-(void)loadRemoteImageDataForClientForURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setNetworkActivityIndicatorDelegate:(id<GKDaemonProxyNetworkActivityIndicatorDelegate>)arg1 ;
@end

