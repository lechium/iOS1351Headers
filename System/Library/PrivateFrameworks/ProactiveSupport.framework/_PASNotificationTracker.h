/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@class NSMutableDictionary;

@interface _PASNotificationTracker : NSObject {

	opaque_pthread_mutex_t _lock;
	unsigned long long _nextNotificationToken;
	NSMutableDictionary* _observers;

}
-(id)init;
-(void)dealloc;
-(id)registerWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_deregisterHandlerWithToken:(id)arg1 waitOnPending:(BOOL)arg2 ;
-(BOOL)deregisterHandlerWithToken:(id)arg1 ;
-(BOOL)deregisterHandlerAsyncWithToken:(id)arg1 ;
-(void)issueNotificationAsyncWithContext:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)issueNotificationAsyncWithContext:(id)arg1 ;
@end
