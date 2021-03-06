/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKConstraint.h>

@class SKRange;

@interface SKRotationConstraint : SKConstraint {

	SKRange* _zRotationRange;

}

@property (copy) SKRange * zRotationRange;              //@synthesize zRotationRange=_zRotationRange - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)constraintWithZRotationRange:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SKRange *)zRotationRange;
-(BOOL)isEqualToRotationConstraint:(id)arg1 ;
-(void)setZRotationRange:(SKRange *)arg1 ;
-(id)initWithZRotationRange:(id)arg1 ;
@end

