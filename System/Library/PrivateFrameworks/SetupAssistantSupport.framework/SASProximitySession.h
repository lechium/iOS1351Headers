/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SASProximitySessionDelegate, OS_dispatch_queue;
@class NSObject, SASProximitySessionTransport, CUMessageSession;

@interface SASProximitySession : NSObject {

	BOOL _connected;
	id<SASProximitySessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _actionQueue;
	SASProximitySessionTransport* _transport;

}

@property (retain) NSObject*<OS_dispatch_queue> actionQueue;              //@synthesize actionQueue=_actionQueue - In the implementation block
@property (retain) SASProximitySessionTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (assign) id<SASProximitySessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) CUMessageSession * sharingMessageSession; 
@property (getter=isConnected) BOOL connected;                            //@synthesize connected=_connected - In the implementation block
-(id)init;
-(void)invalidate;
-(id<SASProximitySessionDelegate>)delegate;
-(void)setDelegate:(id<SASProximitySessionDelegate>)arg1 ;
-(SASProximitySessionTransport *)transport;
-(void)setTransport:(SASProximitySessionTransport *)arg1 ;
-(void)activate;
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)actionQueue;
-(void)setActionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)sendAction:(id)arg1 ;
-(void)handleAction:(id)arg1 ;
-(void)receivedAction:(id)arg1 response:(/*^block*/id)arg2 ;
-(id)actionFromData:(id)arg1 ;
-(void)setSharingMessageSession:(CUMessageSession *)arg1 ;
-(CUMessageSession *)sharingMessageSession;
@end

