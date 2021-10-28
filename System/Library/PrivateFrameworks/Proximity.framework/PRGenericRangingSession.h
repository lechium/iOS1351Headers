/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Proximity/PRRangingDevice.h>
#import <libobjc.A.dylib/PRRangingClientProtocol.h>

@protocol OS_dispatch_queue, OS_os_log, PRGenericRangingSessionDelegate;
@class NSXPCConnection, NSObject, NSString;

@interface PRGenericRangingSession : PRRangingDevice <PRRangingClientProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSObject*<OS_os_log> _logger;
	id<PRGenericRangingSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PRGenericRangingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id<PRGenericRangingSessionDelegate>)delegate;
-(void)setDelegate:(id<PRGenericRangingSessionDelegate>)arg1 ;
-(void)handleInvalidation;
-(id)synchronousRemoteObject;
-(id)remoteObject;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)connectToDaemon;
-(void)didFailWithError:(id)arg1 ;
-(void)handleInterruption;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 ;
-(void)didReceiveNewSolutions:(id)arg1 ;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1 ;
-(void)remoteDevice:(id)arg1 didChangeState:(long long)arg2 ;
-(void)configureForP2PRanging:(id)arg1 options:(id)arg2 ;
-(BOOL)startP2PRanging:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopP2PRanging:(id)arg1 error:(id*)arg2 ;
@end
