/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SCNNode, SCNMaterial, NSString;

@interface AVTMorpherDrivenMaterialDescriptor : NSObject {

	BOOL _isTrigger;
	float _lastWeight;
	float _threshold;
	float _accel;
	float _decel;
	SCNNode* _readMorpherNode;
	long long _morphTargetIndex;
	SCNMaterial* _material;
	NSString* _propertyName;

}

@property (nonatomic,retain) SCNNode * readMorpherNode;               //@synthesize readMorpherNode=_readMorpherNode - In the implementation block
@property (assign,nonatomic) long long morphTargetIndex;              //@synthesize morphTargetIndex=_morphTargetIndex - In the implementation block
@property (nonatomic,retain) SCNMaterial * material;                  //@synthesize material=_material - In the implementation block
@property (nonatomic,copy) NSString * propertyName;                   //@synthesize propertyName=_propertyName - In the implementation block
@property (assign,nonatomic) float lastWeight;                        //@synthesize lastWeight=_lastWeight - In the implementation block
@property (assign,nonatomic) BOOL isTrigger;                          //@synthesize isTrigger=_isTrigger - In the implementation block
@property (assign,nonatomic) float threshold;                         //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) float accel;                             //@synthesize accel=_accel - In the implementation block
@property (assign,nonatomic) float decel;                             //@synthesize decel=_decel - In the implementation block
-(float)threshold;
-(void)setThreshold:(float)arg1 ;
-(NSString *)propertyName;
-(void)setPropertyName:(NSString *)arg1 ;
-(SCNMaterial *)material;
-(float)accel;
-(void)setMaterial:(SCNMaterial *)arg1 ;
-(SCNNode *)readMorpherNode;
-(void)setReadMorpherNode:(SCNNode *)arg1 ;
-(long long)morphTargetIndex;
-(void)setMorphTargetIndex:(long long)arg1 ;
-(float)lastWeight;
-(void)setLastWeight:(float)arg1 ;
-(BOOL)isTrigger;
-(void)setIsTrigger:(BOOL)arg1 ;
-(void)setAccel:(float)arg1 ;
-(float)decel;
-(void)setDecel:(float)arg1 ;
@end

