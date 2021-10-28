/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSRayIntersector/MPSPolygonAccelerationStructure.h>

@interface MPSQuadrilateralAccelerationStructure : MPSPolygonAccelerationStructure

@property (assign,nonatomic) unsigned long long quadrilateralCount; 
-(id)initWithDevice:(id)arg1 ;
-(id)initWithGroup:(id)arg1 ;
-(id)vertexBuffer;
-(void)setPolygonType:(unsigned long long)arg1 ;
-(unsigned long long)quadrilateralCount;
-(void)setQuadrilateralCount:(unsigned long long)arg1 ;
@end
