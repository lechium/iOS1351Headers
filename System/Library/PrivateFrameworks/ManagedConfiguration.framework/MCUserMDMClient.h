/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface MCUserMDMClient : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionSyncQueue;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                    //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> xpcConnectionSyncQueue;              //@synthesize xpcConnectionSyncQueue=_xpcConnectionSyncQueue - In the implementation block
+(id)sharedClient;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcConnectionSyncQueue;
-(void)_queue_createAndStartMDMXPCConnection;
-(void)getAssertionDescriptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)processUserRequest:(id)arg1 encodeResponse:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_destroyXPCConnectionAndInvalidate:(BOOL)arg1 ;
-(BOOL)supportsPerUserMDM;
-(void)scheduleTokenUpdate;
-(void)simulatePush;
-(id)pushToken;
@end
