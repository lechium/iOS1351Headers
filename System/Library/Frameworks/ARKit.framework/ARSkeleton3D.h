/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARSkeleton.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ARCoreRESkeletonResult;

@interface ARSkeleton3D : ARSkeleton <NSSecureCoding> {

	ARCoreRESkeletonResult* _skeleton;

}

@property (nonatomic,readonly) ARCoreRESkeletonResult * coreRESkeleton; 
@property (nonatomic,readonly) const SCD_Struct_AR1* jointModelTransforms; 
@property (nonatomic,readonly) const SCD_Struct_AR1* jointLocalTransforms; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)definition;
-(unsigned long long)jointCount;
-(BOOL)isJointTracked:(long long)arg1 ;
-(const SCD_Struct_AR1*)jointModelTransforms;
-(ARCoreRESkeletonResult *)coreRESkeleton;
-(const SCD_Struct_AR1*)jointLocalTransforms;
-(id)initWithCoreRESkeletonResult:(id)arg1 ;
-(SCD_Struct_AR1)modelTransformForJointName:(id)arg1 ;
-(SCD_Struct_AR1)localTransformForJointName:(id)arg1 ;
@end

