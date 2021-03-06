/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Email/Email-Structs.h>
@class NSMapTable, EMRemoteConnection;

@interface EMActivityRegistry : NSObject {

	NSMapTable* _observerWrappersByObserver;
	os_unfair_lock_s _lock;
	EMRemoteConnection* _connection;

}

@property (retain) EMRemoteConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)remoteInterface;
+(id)observerInterface;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(id)initWithRemoteConnection:(id)arg1 ;
-(id)registerActivityObserver:(id)arg1 ;
@end

