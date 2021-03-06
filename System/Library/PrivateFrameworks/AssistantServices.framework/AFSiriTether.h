/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSMutableArray;

@interface AFSiriTether : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	BOOL _isAttached;
	/*^block*/id _attachmentStatusChangedHandler;
	NSMutableArray* _pendingEvents;
	int _notifyToken;

}
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)attach:(/*^block*/id)arg1 ;
-(void)_logEvent:(id)arg1 ;
-(void)_attach:(/*^block*/id)arg1 ;
-(void)_connectionInterrupted:(id)arg1 ;
-(void)_connectionInvalid:(id)arg1 ;
-(void)_attachmentStatusUpdate:(BOOL)arg1 ;
-(void)_listenForLaunchNotification;
-(void)waitForAttachment:(double)arg1 ;
-(void)setAttachmentStatusChangedHandler:(/*^block*/id)arg1 ;
@end

