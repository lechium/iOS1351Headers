/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIVideoReframer.h>

@interface PIVideoReframerV2 : PIVideoReframer {

	Session* v2Session;

}
-(long long)revision;
-(id)initWithEncodedPixelSize:(SCD_Struct_PI5)arg1 orientation:(long long)arg2 clapRect:(SCD_Struct_PI6)arg3 viewRect:(SCD_Struct_PI6)arg4 config:(const /*function pointer*/void**)arg5 ;
-(id)debugSubjectsAtTime:(SCD_Struct_PI8)arg1 ;
-(CGVector)debugCameraMotionAtTime:(SCD_Struct_PI8)arg1 ;
-(CGRect)debugRawReframedViewRectAtTime:(SCD_Struct_PI8)arg1 ;
-(CGPoint)debugCenterOfInterestAtTime:(SCD_Struct_PI8)arg1 ;
@end

