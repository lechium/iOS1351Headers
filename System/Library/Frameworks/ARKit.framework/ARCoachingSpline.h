/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ARKit/ARKit-Structs.h>
@interface ARCoachingSpline : NSObject {

	vector<ARCoachingControlPoint, std::__1::allocator<ARCoachingControlPoint> >* _controlPoints;
	vector<ARCoachingPatchData, std::__1::allocator<ARCoachingPatchData> >* _patchData;
	vector<unsigned short, std::__1::allocator<unsigned short> >* _indices;
	float _relativeThickness;
	float _cap_error;

}

@property (nonatomic,readonly) compressed_pair<float *, std::__1::allocator<float> >* controlPoints; 
@property (nonatomic,readonly) unsigned numControlPoints; 
@property (nonatomic,readonly) compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* patchData; 
@property (nonatomic,readonly) unsigned patchDataLength; 
@property (nonatomic,readonly) unsigned short* indices; 
@property (nonatomic,readonly) unsigned numIndices; 
+(8)interpolate:(float)arg1 ;
+(8)interpolateTangent:(float)arg1 ;
-(unsigned short*)indices;
-(compressed_pair<float *, std::__1::allocator<float> >*)controlPoints;
-(unsigned)patchDataLength;
-(unsigned)numControlPoints;
-(unsigned)numIndices;
-(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >*)patchData;
-(void)genTubeIndicesWithPattern:(unsigned long long)arg1 ;
-(void)genLeftCapWithWidth:(float)arg1 ;
-(void)genRightCapWithWidth:(float)arg1 ;
-(id)initWithPoints:(1*)arg1 numPoints:(unsigned)arg2 relativeThickness:(float)arg3 pattern:(unsigned long long)arg4 mat:(SCD_Struct_AR1)arg5 ;
@end
