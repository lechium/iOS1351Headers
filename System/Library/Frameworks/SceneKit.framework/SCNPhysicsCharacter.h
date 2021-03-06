/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsWorld;

@interface SCNPhysicsCharacter : SCNPhysicsBehavior {

	SCD_Struct_SC41 _definition;
	btCharacterControllerInterface* _characterController;
	btPairCachingGhostObject* _ghostObject;
	btOverlapFilterCallback* _filterCallback;
	btCapsuleShape* _capsuleShape;
	SCNPhysicsWorld* _world;

}

@property (assign,nonatomic) double velocity; 
@property (assign,nonatomic) double jumpSpeed; 
-(void)dealloc;
-(void)_update;
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(void)setWalkingDirection:(SCNVector3)arg1 ;
-(void)_addToPhysicsWorld:(id)arg1 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg1 ;
-(void)_handleCreateIfNeeded:(BOOL)arg1 ;
-(id)initWithCharacter:(id)arg1 ;
-(BOOL)canJump;
-(void)jump;
-(void)setJumpSpeed:(double)arg1 ;
-(double)jumpSpeed;
@end

