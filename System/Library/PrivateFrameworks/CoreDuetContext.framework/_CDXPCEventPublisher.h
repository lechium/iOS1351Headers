/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_event_publisher, _CDXPCEventPublisherDelegate, OS_dispatch_queue, OS_os_log;
@class NSObject, NSString, NSMutableArray;

@interface _CDXPCEventPublisher : NSObject {

	NSObject*<OS_xpc_event_publisher> _publisher;
	NSString* _streamName;
	id<_CDXPCEventPublisherDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_os_log> _log;
	NSMutableArray* _pendingSendEvents;

}

@property (nonatomic,retain) NSObject*<OS_xpc_event_publisher> publisher;              //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,retain) NSString * streamName;                                    //@synthesize streamName=_streamName - In the implementation block
@property (nonatomic,retain) id<_CDXPCEventPublisherDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                 //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingSendEvents;                       //@synthesize pendingSendEvents=_pendingSendEvents - In the implementation block
+(id)eventPublisherWithStreamName:(const char*)arg1 delegate:(id)arg2 queue:(id)arg3 log:(id)arg4 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<_CDXPCEventPublisherDelegate>)delegate;
-(void)setDelegate:(id<_CDXPCEventPublisherDelegate>)arg1 ;
-(NSObject*<OS_os_log>)log;
-(NSString *)streamName;
-(void)setStreamName:(NSString *)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(NSObject*<OS_xpc_event_publisher>)publisher;
-(void)setPublisher:(NSObject*<OS_xpc_event_publisher>)arg1 ;
-(id)initWithStreamName:(id)arg1 delegate:(id)arg2 queue:(id)arg3 log:(id)arg4 ;
-(void)activatePublisherWithStreamName:(const char*)arg1 ;
-(void)handleEventWithAction:(unsigned)arg1 token:(unsigned long long)arg2 descriptor:(id)arg3 ;
-(void)addToken:(unsigned long long)arg1 descriptor:(id)arg2 userID:(unsigned)arg3 ;
-(void)removeToken:(unsigned long long)arg1 ;
-(void)sendEvent:(id)arg1 toSubscriber:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)sendEvent:(id)arg1 toSubscriber:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(NSMutableArray *)pendingSendEvents;
-(void)setPendingSendEvents:(NSMutableArray *)arg1 ;
@end

