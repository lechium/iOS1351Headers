/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, OS_dispatch_queue;
#import <MediaRemote/MediaRemote-Structs.h>
@class MRXPCConnection, NSObject;

@interface MRMediaRemoteService : NSObject {

	const SCD_Struct_MR9* clientModule;
	const SCD_Struct_MR10* browsableContentEndpoint;
	const SCD_Struct_MR11* voiceRecordingEndpoint;
	const SCD_Struct_MR12* televisionEndpoint;
	const SCD_Struct_MR13* agentEndpoint;
	BOOL _isRunning;
	MRXPCConnection* _mrXPCConnection;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _clientCallbackQueue;
	NSObject*<OS_dispatch_queue> _clientCallbackPriorityQueue;
	NSObject*<OS_dispatch_queue> _browsableContentQueue;
	NSObject*<OS_dispatch_queue> _voiceInputQueue;
	NSObject*<OS_dispatch_queue> _televisionQueue;
	NSObject*<OS_dispatch_queue> _agentQueue;

}

@property (nonatomic,retain) MRXPCConnection * mrXPCConnection;                                     //@synthesize mrXPCConnection=_mrXPCConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;                                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                          //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientCallbackQueue;                      //@synthesize clientCallbackQueue=_clientCallbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientCallbackPriorityQueue;              //@synthesize clientCallbackPriorityQueue=_clientCallbackPriorityQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> browsableContentQueue;                    //@synthesize browsableContentQueue=_browsableContentQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> voiceInputQueue;                          //@synthesize voiceInputQueue=_voiceInputQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> televisionQueue;                          //@synthesize televisionQueue=_televisionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> agentQueue;                               //@synthesize agentQueue=_agentQueue - In the implementation block
@property (assign,nonatomic) BOOL isRunning;                                                        //@synthesize isRunning=_isRunning - In the implementation block
-(BOOL)isRunning;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(NSObject*<OS_dispatch_queue>)clientCallbackQueue;
-(void)setIsRunning:(BOOL)arg1 ;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(MRXPCConnection *)mrXPCConnection;
-(void)setMrXPCConnection:(MRXPCConnection *)arg1 ;
-(void)setClientCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientCallbackPriorityQueue;
-(void)setClientCallbackPriorityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)browsableContentQueue;
-(void)setBrowsableContentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)voiceInputQueue;
-(void)setVoiceInputQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)televisionQueue;
-(void)setTelevisionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)agentQueue;
-(void)setAgentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

