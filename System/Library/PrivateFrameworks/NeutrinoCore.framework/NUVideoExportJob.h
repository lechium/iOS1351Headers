/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUExportJob.h>

@interface NUVideoExportJob : NUExportJob {

	SCD_Struct_NU6 _livePhotoKeyFrameTime;

}
-(BOOL)render:(out id*)arg1 ;
-(BOOL)prepare:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(BOOL)wantsOutputGeometry;
-(id)scalePolicy;
-(id)initWithVideoExportRequest:(id)arg1 ;
-(id)initWithExportRequest:(id)arg1 ;
-(id)videoExportRequest;
-(BOOL)wantsOutputVideo;
-(id)generateVideoComposition:(out id*)arg1 ;
-(BOOL)writeVideoFrom:(id)arg1 toWriter:(id)arg2 stillImageTime:(SCD_Struct_NU6)arg3 createCustomMetadata:(BOOL)arg4 geometryTransform:(id)arg5 inputSize:(CGSize)arg6 outputSize:(CGSize)arg7 error:(out id*)arg8 ;
-(BOOL)renderVideoFrames:(id)arg1 intoPixelBuffer:(CVBufferRef)arg2 time:(SCD_Struct_NU6)arg3 colorSpace:(id)arg4 error:(out id*)arg5 ;
@end

