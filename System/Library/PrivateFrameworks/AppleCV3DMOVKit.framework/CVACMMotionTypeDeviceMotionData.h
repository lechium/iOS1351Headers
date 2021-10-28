/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CVACLMotionTypeDoubleVector4, CVACLMotionTypeVector3;

@interface CVACMMotionTypeDeviceMotionData : NSObject {

	BOOL _doingYawCorrection;
	BOOL _doingBiasEstimation;
	BOOL _isInitialized;
	int _magneticFieldCalibrationLevel;
	CVACLMotionTypeDoubleVector4* _quaternion;
	CVACLMotionTypeVector3* _userAcceleration;
	CVACLMotionTypeVector3* _gravity;
	CVACLMotionTypeVector3* _rotationRate;
	CVACLMotionTypeVector3* _magneticField;

}

@property (nonatomic,retain) CVACLMotionTypeDoubleVector4 * quaternion;              //@synthesize quaternion=_quaternion - In the implementation block
@property (nonatomic,retain) CVACLMotionTypeVector3 * userAcceleration;              //@synthesize userAcceleration=_userAcceleration - In the implementation block
@property (nonatomic,retain) CVACLMotionTypeVector3 * gravity;                       //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,retain) CVACLMotionTypeVector3 * rotationRate;                  //@synthesize rotationRate=_rotationRate - In the implementation block
@property (nonatomic,retain) CVACLMotionTypeVector3 * magneticField;                 //@synthesize magneticField=_magneticField - In the implementation block
@property (assign) int magneticFieldCalibrationLevel;                                //@synthesize magneticFieldCalibrationLevel=_magneticFieldCalibrationLevel - In the implementation block
@property (assign) BOOL doingYawCorrection;                                          //@synthesize doingYawCorrection=_doingYawCorrection - In the implementation block
@property (assign) BOOL doingBiasEstimation;                                         //@synthesize doingBiasEstimation=_doingBiasEstimation - In the implementation block
@property (assign) BOOL isInitialized;                                               //@synthesize isInitialized=_isInitialized - In the implementation block
-(id)init;
-(CVACLMotionTypeVector3 *)gravity;
-(CVACLMotionTypeVector3 *)magneticField;
-(void)setGravity:(CVACLMotionTypeVector3 *)arg1 ;
-(CVACLMotionTypeDoubleVector4 *)quaternion;
-(BOOL)isInitialized;
-(CVACLMotionTypeVector3 *)userAcceleration;
-(CVACLMotionTypeVector3 *)rotationRate;
-(void)setQuaternion:(CVACLMotionTypeDoubleVector4 *)arg1 ;
-(int)magneticFieldCalibrationLevel;
-(BOOL)doingYawCorrection;
-(BOOL)doingBiasEstimation;
-(void)setRotationRate:(CVACLMotionTypeVector3 *)arg1 ;
-(void)setMagneticField:(CVACLMotionTypeVector3 *)arg1 ;
-(void)setUserAcceleration:(CVACLMotionTypeVector3 *)arg1 ;
-(void)setIsInitialized:(BOOL)arg1 ;
-(void)setMagneticFieldCalibrationLevel:(int)arg1 ;
-(void)setDoingYawCorrection:(BOOL)arg1 ;
-(void)setDoingBiasEstimation:(BOOL)arg1 ;
@end
