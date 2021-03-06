/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLTileRenderPipelineDescriptor.h>

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {

	MTLTileRenderPipelineDescriptorPrivate _private;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(void)setLabel:(id)arg1 ;
-(id)label;
-(id)colorAttachments;
-(void)setTileFunction:(id)arg1 ;
-(void)setThreadgroupSizeMatchesTileSize:(BOOL)arg1 ;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(BOOL)threadgroupSizeMatchesTileSize;
-(void)setRasterSampleCount:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLTileRenderPipelineDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)rasterSampleCount;
-(unsigned long long)colorSampleCount;
-(void)setColorSampleCount:(unsigned long long)arg1 ;
-(id)tileBuffers;
-(id)tileFunction;
-(void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1 ;
-(void)validateWithDevice:(id)arg1 ;
@end

