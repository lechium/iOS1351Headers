/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iAdDeveloper/iAdDeveloper-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class HTSHTTPServer, NSObject, NSMutableArray, NSString, NSTimer;

@interface HTSHTTPServerConnection : NSObject <NSStreamDelegate> {

	HTSHTTPServer* _server;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_source> _readSource;
	BOOL _readActive;
	NSObject*<OS_dispatch_source> _writeSource;
	BOOL _writeActive;
	int _socket;
	int _socketRefCount;
	CFHTTPMessageRef _incomingMessage;
	NSMutableArray* _incomingQueue;
	NSMutableArray* _outputQueue;
	BOOL _outputStalled;
	BOOL _closeOnEmptyQueue;
	NSString* _identifier;
	double _lastActivity;
	NSTimer* _idleTimer;

}

@property (assign,nonatomic) double lastActivity;                   //@synthesize lastActivity=_lastActivity - In the implementation block
@property (nonatomic,retain) NSTimer * idleTimer;                   //@synthesize idleTimer=_idleTimer - In the implementation block
@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)identifier;
-(double)lastActivity;
-(NSTimer *)idleTimer;
-(void)setIdleTimer:(NSTimer *)arg1 ;
-(id)initWithServer:(id)arg1 socket:(int)arg2 ;
-(void)_closeInputStream;
-(void)_closeOutputStream;
-(void)_processIncomingBytes:(const char*)arg1 length:(long long)arg2 ;
-(void)sendResponse:(id)arg1 withLatency:(double)arg2 closeAfterSending:(BOOL)arg3 ;
-(void)setLastActivity:(double)arg1 ;
-(void)_processStreamInput;
-(void)_processStreamOutput;
-(void)_shutdownIdleConnection:(id)arg1 ;
-(void)printData:(id)arg1 withMessage:(id)arg2 ;
@end

