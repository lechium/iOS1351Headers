/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDevice, MTLCommandQueue;
#import <ARKit/ARKit-Structs.h>
@class MPSUnaryImageKernel;

@interface ARMPSImageFilter : NSObject {

	CVPixelBufferPoolRef _pixelBufferPool;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	MPSUnaryImageKernel* _kernel;

}
-(void)dealloc;
-(id)initWithImageKernel:(id)arg1 device:(id)arg2 ;
-(CVBufferRef)processPixelBuffer:(CVBufferRef)arg1 format:(unsigned long long)arg2 ;
@end

