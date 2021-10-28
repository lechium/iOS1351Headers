/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNSliderConstraint : SCNConstraint {

	unsigned long long _categoryBitMask;
	SCNVector3 _offset;
	float _radius;

}

@property (assign,nonatomic) unsigned long long collisionCategoryBitMask; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) SCNVector3 offset; 
+(BOOL)supportsSecureCoding;
+(id)sliderConstraint;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOffset:(SCNVector3)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(SCNVector3)offset;
-(unsigned long long)collisionCategoryBitMask;
-(void)setCollisionCategoryBitMask:(unsigned long long)arg1 ;
@end
