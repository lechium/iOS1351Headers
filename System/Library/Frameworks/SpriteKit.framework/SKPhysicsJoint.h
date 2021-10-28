/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SKPhysicsBody;

@interface SKPhysicsJoint : NSObject <NSSecureCoding> {

	BOOL __implicit;
	SKPhysicsBody* bodyA;
	SKPhysicsBody* bodyB;
	double reactionTorque;
	CGVector reactionForce;

}

@property (assign,nonatomic) BOOL _implicit;                        //@synthesize _implicit=__implicit - In the implementation block
@property (nonatomic,retain) SKPhysicsBody * bodyA; 
@property (nonatomic,retain) SKPhysicsBody * bodyB; 
@property (nonatomic,readonly) CGVector reactionForce; 
@property (nonatomic,readonly) double reactionTorque; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_implicit;
-(SKPhysicsBody *)bodyA;
-(SKPhysicsBody *)bodyB;
-(void)set_implicit:(BOOL)arg1 ;
-(void)setBodyA:(SKPhysicsBody *)arg1 ;
-(void)setBodyB:(SKPhysicsBody *)arg1 ;
-(CGVector)reactionForce;
-(double)reactionTorque;
@end
