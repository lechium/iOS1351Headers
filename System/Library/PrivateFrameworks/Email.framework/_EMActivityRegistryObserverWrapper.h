/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFCancelable.h>
#import <libobjc.A.dylib/EMActivityObserver_xpc.h>

@protocol EFCancelable, EMActivityObserver;
@class NSMutableDictionary, EMRemoteConnection, EMActivityRegistry, NSArray, NSString;

@interface _EMActivityRegistryObserverWrapper : NSObject <EFCancelable, EMActivityObserver_xpc> {

	id<EFCancelable> _observerCancelable;
	NSMutableDictionary* _trackedActivities;
	os_unfair_lock_s _lock;
	EMRemoteConnection* _connection;
	EMActivityRegistry* _registry;
	id<EMActivityObserver> _observer;

}

@property (retain) EMRemoteConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (__weak) EMActivityRegistry * registry;                   //@synthesize registry=_registry - In the implementation block
@property (__weak) id<EMActivityObserver> observer;                 //@synthesize observer=_observer - In the implementation block
@property (retain) NSArray * activities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<EMActivityObserver>)observer;
-(void)cancel;
-(void)setObserver:(id<EMActivityObserver>)arg1 ;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(NSArray *)activities;
-(void)setActivities:(NSArray *)arg1 ;
-(EMActivityRegistry *)registry;
-(void)setRegistry:(EMActivityRegistry *)arg1 ;
-(void)_resetWithCancelable:(id)arg1 ;
-(void)_recover;
-(void)_startObservingIfNecessary;
-(id)activityWithObjectID:(id)arg1 ;
-(void)startedActivity:(id)arg1 ;
-(void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3 ;
-(void)activityWithID:(id)arg1 setCompletedCount:(id)arg2 totalCount:(id)arg3 ;
-(void)activityWithID:(id)arg1 finishedWithError:(id)arg2 ;
-(void)removedActivityWithID:(id)arg1 ;
-(id)initWithConnection:(id)arg1 registry:(id)arg2 observer:(id)arg3 ;
@end
