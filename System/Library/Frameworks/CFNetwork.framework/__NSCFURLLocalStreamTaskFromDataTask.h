/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFURLLocalStreamTask.h>
#import <libobjc.A.dylib/SessionConnectionDelegate.h>

@class NSMutableArray, NSString;

@interface __NSCFURLLocalStreamTaskFromDataTask : __NSCFURLLocalStreamTask <SessionConnectionDelegate> {

	CFReadStreamRef _myReadToHisWrite;
	BOOL _myReadToHisWriteEOF;
	BOOL _myReadToHisWriteSignaled;
	SCD_Struct_NS26 _myReadToHisWriteError;
	CFWriteStreamRef _myWriteToHisRead;
	BOOL _myWriteToHisReadEOF;
	BOOL _myWriteToHisReadSignaled;
	SCD_Struct_NS26 _myWriteToHisReadError;
	NSMutableArray* _myWriteToHisReadWork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(/*^block*/id)arg4 ;
-(void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didFinishCollectingMetrics:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connectionWillFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveConnectionCacheKey:(HTTPConnectionCacheKey*)arg2 ;
-(void)connection:(id)arg1 challenged:(id)arg2 authCallback:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4 ;
-(void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 waitingWithReason:(long long)arg2 ;
-(void)connection:(id)arg1 _conditionalRequirementsChanged:(BOOL)arg2 ;
-(void)connection:(id)arg1 didReceiveSocketInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)connection:(id)arg1 needConnectedSocketToHost:(id)arg2 port:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)connection:(id)arg1 didReceiveTCPConnection:(shared_ptr<TransportConnection>*)arg2 extraBytes:(id)arg3 ;
-(id)initWithTask:(id)arg1 disavow:(/*^block*/id)arg2 ;
-(void)_onqueue_ioTickFromDataTask;
-(void)_onqueue_ioTickFromDataTaskConversion:(const char*)arg1 ;
-(void)_onqueue_stFromDataTaskReadCallback:(unsigned long long)arg1 ;
-(void)_onqueue_stFromDataTaskWriteCallback:(unsigned long long)arg1 ;
-(id)initWithTask:(id)arg1 remainingInputStream:(id)arg2 remainingOutputStream:(id)arg3 disavow:(/*^block*/id)arg4 ;
-(id)initWithTask:(id)arg1 inputStream:(id)arg2 ouptutStream:(id)arg3 disavow:(/*^block*/id)arg4 ;
-(void)_onqueue_didFinishLoadingWithError:(id)arg1 ;
-(void)_unimp:(const char*)arg1 ;
@end

