/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSServiceDispatchingQueue.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _BSServiceDispatchingQueueImpl : NSObject <BSServiceDispatchingQueue> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(void)performAsync:(/*^block*/id)arg1 ;
-(void)assertOnQueue;
-(id)backingQueueIfExists;
-(void)performAsync:(/*^block*/id)arg1 withHandoff:(id)arg2 ;
@end

