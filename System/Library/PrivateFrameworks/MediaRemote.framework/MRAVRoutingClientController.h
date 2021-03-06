/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:02 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class MRMediaRemoteService, NSObject, NSMutableDictionary;

@interface MRAVRoutingClientController : NSObject {

	MRMediaRemoteService* _mediaRemoteService;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _pendingCompletionHandlersForCategories;
	NSMutableDictionary* _cachedRoutesForCategories;

}

@property (nonatomic,readonly) MRMediaRemoteService * mediaRemoteService;              //@synthesize mediaRemoteService=_mediaRemoteService - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(id)initWithMediaRemoteService:(id)arg1 ;
-(void)fetchPickableRoutesForCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cacheFetchedPickableRoutes:(id)arg1 forCategory:(id)arg2 ;
-(void)_flushPendingCompletionHandlersWithPickableRoutes:(id)arg1 forCategory:(id)arg2 ;
-(MRMediaRemoteService *)mediaRemoteService;
@end

