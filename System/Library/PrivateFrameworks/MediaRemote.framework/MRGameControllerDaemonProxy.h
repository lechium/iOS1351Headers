/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:02 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GameControllerDaemonListener.h>

@protocol GameControllerDaemon;
@class NSXPCConnection, MRGameControllerDelayedEvents, NSString;

@interface MRGameControllerDaemonProxy : NSObject <GameControllerDaemonListener> {

	NSXPCConnection* _connection;
	id<GameControllerDaemon> _remote;
	MRGameControllerDelayedEvents* _delayedEvents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultGameControllerDaemonProxy;
-(void)_openConnection;
-(void)addController:(id)arg1 ;
-(void)removeController:(id)arg1 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setData:(id)arg2 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 ;
-(void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(BOOL)arg4 ;
-(void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(BOOL)arg5 ;
-(void)replyConnectedHosts:(id)arg1 ;
-(BOOL)_delayEvent:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 withUpDelay:(double)arg4 ;
-(void)controllerID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 ;
-(id)addEmulatedControllerWithProperties:(id)arg1 ;
-(void)removeEmulatedController:(id)arg1 ;
-(void)controllerID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 withUpDelay:(double)arg4 ;
-(void)controllerID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(BOOL)arg5 ;
-(void)controllerID:(unsigned long long)arg1 setArrayValueX:(float)arg2 y:(float)arg3 z:(float)arg4 w:(float)arg5 forElement:(int)arg6 ;
@end

