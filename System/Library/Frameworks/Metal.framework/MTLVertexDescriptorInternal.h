/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLVertexDescriptor.h>

@class MTLVertexBufferLayoutDescriptorArrayInternal, MTLVertexAttributeDescriptorArrayInternal;

@interface MTLVertexDescriptorInternal : MTLVertexDescriptor {

	MTLVertexBufferLayoutDescriptorArrayInternal* _vertexBufferArray;
	MTLVertexAttributeDescriptorArrayInternal* _attributeArray;

}
+(id)vertexDescriptor;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributes;
-(void)reset;
-(id)layouts;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)newSerializedDescriptor;
-(BOOL)validateWithVertexFunction:(id)arg1 error:(id*)arg2 ;
@end
