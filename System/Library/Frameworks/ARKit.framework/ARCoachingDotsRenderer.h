/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLRenderPipelineState;
#import <ARKit/ARKit-Structs.h>
@interface ARCoachingDotsRenderer : NSObject {

	unsigned long long _pixelFormat;
	id<MTLRenderPipelineState> _pipelineState;

}
-(id)init:(id)arg1 pixelFormat:(unsigned long long)arg2 metalLibrary:(id)arg3 sampleCount:(int)arg4 ;
-(void)encode:(id)arg1 renderCommandEncoder:(id)arg2 mvp:(SCD_Struct_AR1)arg3 visibility:(float)arg4 renderParams:(SCD_Struct_AR132)arg5 time:(double)arg6 ;
@end
