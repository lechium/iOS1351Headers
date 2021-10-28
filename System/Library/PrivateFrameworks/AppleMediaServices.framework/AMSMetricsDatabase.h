/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSSQLiteConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, AMSSQLiteConnection, NSObject;

@interface AMSMetricsDatabase : NSObject <AMSSQLiteConnectionDelegate> {

	NSString* _containerId;
	AMSSQLiteConnection* _connection;
	NSObject*<OS_dispatch_queue> _internalQueue;
	long long _keepAliveCount;

}

@property (nonatomic,retain) AMSSQLiteConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) long long keepAliveCount;                                //@synthesize keepAliveCount=_keepAliveCount - In the implementation block
@property (nonatomic,retain) NSString * containerId;                                  //@synthesize containerId=_containerId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(AMSSQLiteConnection *)connection;
-(void)setConnection:(AMSSQLiteConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)containerId;
-(void)_performTransaction:(/*^block*/id)arg1 ;
-(id)_lockedById;
-(BOOL)connectionNeedsResetForCorruption:(id)arg1 ;
-(id)initWithContainerId:(id)arg1 ;
-(long long)countAllEventsWithLockKey:(id)arg1 error:(id*)arg2 ;
-(void)dropAllEventsWithLockKey:(id)arg1 error:(id*)arg2 ;
-(void)dropEvents:(id)arg1 error:(id*)arg2 ;
-(void)enumerateEventsWithTopic:(id)arg1 lockKey:(id)arg2 objectBlock:(/*^block*/id)arg3 ;
-(void)enumerateTopicsWithLockKey:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)insertEvents:(id)arg1 error:(id*)arg2 ;
-(id)lockAllEventsWithError:(id*)arg1 ;
-(void)unlockAllEventsWithKey:(id)arg1 error:(id*)arg2 ;
-(void)unlockEvents:(id)arg1 error:(id*)arg2 ;
-(void)setContainerId:(NSString *)arg1 ;
-(long long)keepAliveCount;
-(void)setKeepAliveCount:(long long)arg1 ;
@end
