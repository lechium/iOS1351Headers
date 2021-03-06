/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ARPlaneGeometry : NSObject <NSSecureCoding> {

	vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* _vertices;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _textureCoordinates;
	vector<short, std::__1::allocator<short> >* _triangleIndices;
	unsigned long long _boundaryVertexCount;
	 _center;
	 _extent;

}

@property (nonatomic,readonly)  center;                                                //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly)  extent;                                                //@synthesize extent=_extent - In the implementation block
@property (nonatomic,readonly) unsigned long long vertexCount; 
@property (nonatomic,readonly) const * vertices; 
@property (nonatomic,readonly) unsigned long long textureCoordinateCount; 
@property (nonatomic,readonly) const * textureCoordinates; 
@property (nonatomic,readonly) unsigned long long triangleCount; 
@property (nonatomic,readonly) const short* triangleIndices; 
@property (nonatomic,readonly) unsigned long long boundaryVertexCount;                 //@synthesize boundaryVertexCount=_boundaryVertexCount - In the implementation block
@property (nonatomic,readonly) const * boundaryVertices; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-()extent;
-()center;
-(const *)vertices;
-(unsigned long long)vertexCount;
-(const *)textureCoordinates;
-(unsigned long long)triangleCount;
-(const short*)triangleIndices;
-(unsigned long long)textureCoordinateCount;
-(id)initWithBoundaryVertices:(const vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >}Ref)arg1 ;
-(const *)boundaryVertices;
-(unsigned long long)boundaryVertexCount;
-(id)initWithVertices:(const vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >}Ref)arg1 triangleIndices:(const vector<short, std::__1::allocator<short> >*)arg2 boundaryVertexCount:(unsigned long long)arg3 ;
@end

