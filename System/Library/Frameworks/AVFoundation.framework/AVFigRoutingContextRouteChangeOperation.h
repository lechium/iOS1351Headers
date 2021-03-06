/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOperation.h>
#import <AVFoundation/AVDestinationChangeResultSource.h>

@protocol OS_dispatch_queue;
@class AVOutputContextDestinationChange, AVWeakReference, NSObject, NSString;

@interface AVFigRoutingContextRouteChangeOperation : AVOperation <AVDestinationChangeResultSource> {

	AVWeakReference* _weakObserver;
	OpaqueFigRoutingContextRef _routingContext;
	CFStringRef _successNotification;
	/*^block*/id _routeChangeBlock;
	NSObject*<OS_dispatch_queue> _notificationManagementQueue;
	BOOL _actOnRouteChangeNotifications;
	CFNumberRef _routeChangeID;
	AVOutputContextDestinationChange* _result;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AVOutputContextDestinationChange * result; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)start;
-(BOOL)isAsynchronous;
-(AVOutputContextDestinationChange *)result;
-(id)initWithRoutingContext:(OpaqueFigRoutingContextRef)arg1 successNotification:(CFStringRef)arg2 routeChangeBlock:(/*^block*/id)arg3 ;
-(void)_setResultIfNotAlreadySet:(id)arg1 ;
-(void)_routeChangeStartedWithID:(CFNumberRef)arg1 ;
-(void)_routeChangeWithID:(CFNumberRef)arg1 endedWithReason:(CFStringRef)arg2 ;
-(void)_routeChangeComplete;
@end

