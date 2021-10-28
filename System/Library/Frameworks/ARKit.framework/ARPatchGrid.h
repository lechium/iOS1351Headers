/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ARKit/ARKit-Structs.h>
@interface ARPatchGrid : NSObject {

	vector<ARPatch, std::__1::allocator<ARPatch> >* _patchesVector;
	float _angle;

}

@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) const compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* patches; 
@property (nonatomic,readonly) float pivot; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)size;
-(float)pivot;
-(id)initWithPatchesVector:(vector<ARPatch, std::__1::allocator<ARPatch> >*)arg1 pivotAngle:(float)arg2 ;
-(const compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >*)patches;
@end
