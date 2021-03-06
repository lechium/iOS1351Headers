/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUVideoFrameSourceNode.h>

@protocol OS_dispatch_queue;
@class NSObject, NUVideoSourceNode;

@interface NUKeyFrameSourceNode : NUVideoFrameSourceNode {

	NSObject*<OS_dispatch_queue> _queue;
	NUVideoSourceNode* _videoSourceNode;
	SCD_Struct_NU6 _frameTime;
	CVBufferRef _pixelBuffer;

}
-(void)dealloc;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(SCD_Struct_NU7)pixelSizeWithSourceOptions:(id)arg1 ;
-(id)initWithVideoSource:(id)arg1 time:(SCD_Struct_NU6)arg2 settings:(id)arg3 orientation:(long long)arg4 ;
-(id)initWithSettings:(id)arg1 orientation:(long long)arg2 ;
-(CVBufferRef)_pixelBuffer:(out id*)arg1 ;
@end

