/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, ARBufferPopulationMonitorDelegate;
#import <ARKit/ARKit-Structs.h>
@class ARBufferPopulationRegistry, NSObject;

@interface ARBufferPopulationMonitor : NSObject {

	ARBufferPopulationRegistry* _bufferPopulationRegistry;
	os_unfair_lock_s _bufferPopulationRegistryLock;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	IOSurfaceNotifierRef _surfaceNotifier;
	NSObject*<OS_dispatch_queue> _surfaceNotifierCallbackQueue;
	void* _weakReferenceForSurfaceNotifierCallback;
	id<ARBufferPopulationMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic,__weak) id<ARBufferPopulationMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(id<ARBufferPopulationMonitorDelegate>)delegate;
-(void)setDelegate:(id<ARBufferPopulationMonitorDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)trackDataBuffer:(CVBufferRef)arg1 withLabel:(id)arg2 ;
-(void)trackPixelBuffer:(CVBufferRef)arg1 withLabel:(id)arg2 ;
-(unsigned long long)countWithLabel:(id)arg1 ;
-(void)updateBufferPopulationRegistryWithReleasedSurfaceID:(unsigned)arg1 ;
-(void)trackSurface:(IOSurfaceRef)arg1 withLabel:(id)arg2 ;
-(void)trackDataBuffer:(CVBufferRef)arg1 ;
-(void)trackPixelBuffer:(CVBufferRef)arg1 ;
-(void)trackSurface:(IOSurfaceRef)arg1 ;
@end
