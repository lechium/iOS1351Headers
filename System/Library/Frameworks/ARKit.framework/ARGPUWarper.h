/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDevice, MTLCommandQueue, MTLRenderPipelineState;
#import <ARKit/ARKit-Structs.h>
@interface ARGPUWarper : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLRenderPipelineState> _homographyPipelineState;

}
-(id)init;
-(id)description;
-(void)warpCameraImage:(CVBufferRef)arg1 withExposureOffset:(float)arg2 withCameraIntrinsics:(SCD_Struct_AR24)arg3 withCameraTransform:(SCD_Struct_AR1)arg4 toPlane:(ARTexturedPlane*)arg5 withLoadAction:(unsigned long long)arg6 synchronous:(BOOL)arg7 ;
-(void)warpPlane:(ARTexturedPlane*)arg1 toPlane:(ARTexturedPlane*)arg2 withLoadAction:(unsigned long long)arg3 synchronous:(BOOL)arg4 ;
@end

