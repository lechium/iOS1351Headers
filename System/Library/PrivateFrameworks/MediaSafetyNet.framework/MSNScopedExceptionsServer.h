/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaSafetyNet.framework/MediaSafetyNet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/MSNScopedExceptionsProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSMutableArray, NSObject, NSString;

@interface MSNScopedExceptionsServer : NSObject <NSXPCListenerDelegate, MSNScopedExceptionsProtocol> {

	NSXPCListener* _listener;
	NSMutableArray* _activeExceptions;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedProxy;
+(id)validExceptions;
+(id)validEntitlements;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(void)beginException:(id)arg1 ;
-(void)endException:(id)arg1 ;
-(BOOL)isExceptionInEffect:(id)arg1 ;
-(BOOL)isConnectionAllowedToAssertException:(id)arg1 ;
@end

