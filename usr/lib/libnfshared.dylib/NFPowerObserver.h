/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libnfshared.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
@class NFWeakReference, NSObject;

@interface NFPowerObserver : NSObject {

	NFWeakReference* _delegate;
	unsigned _powerNotificationConnection;
	IONotificationPortRef _powerNotificationPort;
	unsigned _powerNotificationNotifier;
	NSObject*<OS_dispatch_queue> _workQueue;
	void* _sleepMessageArgument;
	BOOL _willSleep;

}

@property (readonly) BOOL willSleep;              //@synthesize willSleep=_willSleep - In the implementation block
-(void)dealloc;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)unregisterForEvents;
-(BOOL)registerForEvents;
-(void)_powerNotificationMessage:(unsigned)arg1 argument:(void*)arg2 ;
-(void)allowSleep;
-(BOOL)willSleep;
@end

