/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEONavdServerProxy.h>
#import <libobjc.A.dylib/GEONavdProxyObserver.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableArray, NSMutableDictionary, NSObject;

@interface GEONavdRemoteProxy : GEONavdServerProxy <GEONavdProxyObserver> {

	NSXPCConnection* _connection;
	NSMutableArray* _observers;
	NSMutableDictionary* _handlers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id<GEONavdXPCInterface> remoteObjectProxyThreadUnsafe; 
-(id)init;
-(void)dealloc;
-(void)open;
-(void)close;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)statusWithCallback:(/*^block*/id)arg1 ;
-(void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg1 ;
-(void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2 ;
-(void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2 ;
-(void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 ;
-(void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3 ;
-(void)forceCacheRefresh;
-(void)_connectToDaemonIfNeededThreadUnsafe;
-(void)navdProxyReceivedData:(id)arg1 ofType:(id)arg2 ;
-(void)navdProxyReceivedHypothesis:(id)arg1 forClient:(id)arg2 ;
-(id<GEONavdXPCInterface>)remoteObjectProxyThreadUnsafe;
@end

