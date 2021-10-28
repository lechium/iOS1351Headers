/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class CUXPCAgent, NSObject, NSXPCConnection;

@interface CUXPCAgentConnection : NSObject {

	CUXPCAgent* _agent;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCConnection* _xpcCnx;

}
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(void)connectionInvalidated;
@end
