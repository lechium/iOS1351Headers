/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
@class NSMutableArray;

@interface ICClientManager : NSObject {

	BOOL _clientAdded;
	NSMutableArray* _clients;
	os_unfair_lock_s _clientsLock;
	id _delegate;

}

@property (nonatomic,retain) NSMutableArray * clients;              //@synthesize clients=_clients - In the implementation block
@property (assign,nonatomic) id delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSMutableArray *)clients;
-(id)findClientWithPID:(id)arg1 ;
-(unsigned long long)removeClientWithPID:(id)arg1 ;
-(unsigned long long)currentClientCount;
-(id)copyClientsArray;
-(void)sendMessage:(id)arg1 withConnection:(id)arg2 ;
-(void)addClientWithConnection:(id)arg1 ;
-(void)sendMessage:(id)arg1 forClientWithPID:(id)arg2 ;
-(void)addNotifications:(id)arg1 toClientWithPID:(id)arg2 ;
-(void)remNotifications:(id)arg1 toClientWithPID:(id)arg2 ;
-(int)clientUsingDevice;
-(void)setClientWithPID:(id)arg1 usingDevice:(BOOL)arg2 ;
-(void)setClientWithPID:(id)arg1 usingObjectHandle:(id)arg2 ;
-(id)clientConnectionsMonitoringNotification:(id)arg1 ;
-(id)clientConnectionsMonitoringObjectID:(id)arg1 ;
-(id)allClientConnections;
-(void)setClients:(NSMutableArray *)arg1 ;
@end
