/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class CMMotionManager, NSOperationQueue, CMAttitude;

@interface JTMotionData : NSObject {

	BOOL _started;
	CMMotionManager* _motionManager;
	NSOperationQueue* _motionQueue;
	CMAttitude* _refAttitude;
	double _yawRadians;
	double _rollRadians;
	double _pitchRadians;
	SCD_Struct_JT18 _currentAttitude;

}

@property (nonatomic,retain) CMMotionManager * motionManager;              //@synthesize motionManager=_motionManager - In the implementation block
@property (nonatomic,retain) NSOperationQueue * motionQueue;               //@synthesize motionQueue=_motionQueue - In the implementation block
@property (nonatomic,retain) CMAttitude * refAttitude;                     //@synthesize refAttitude=_refAttitude - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT18 currentAttitude;              //@synthesize currentAttitude=_currentAttitude - In the implementation block
@property (assign,nonatomic) double yawRadians;                            //@synthesize yawRadians=_yawRadians - In the implementation block
@property (assign,nonatomic) double rollRadians;                           //@synthesize rollRadians=_rollRadians - In the implementation block
@property (assign,nonatomic) double pitchRadians;                          //@synthesize pitchRadians=_pitchRadians - In the implementation block
@property (assign) BOOL started;                                           //@synthesize started=_started - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)started;
-(void)setStarted:(BOOL)arg1 ;
-(SCD_Struct_JT18)currentOrientation;
-(CMMotionManager *)motionManager;
-(void)setMotionManager:(CMMotionManager *)arg1 ;
-(double)yawRadians;
-(double)rollRadians;
-(double)pitchRadians;
-(void)setYawRadians:(double)arg1 ;
-(void)setPitchRadians:(double)arg1 ;
-(void)setRollRadians:(double)arg1 ;
-(void)startMotion;
-(void)stopMotion;
-(void)setMotionQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)motionQueue;
-(SCD_Struct_JT18)getOrientation:(SCD_Struct_JT18)arg1 ;
-(void)setCurrentAttitude:(SCD_Struct_JT18)arg1 ;
-(SCD_Struct_JT18)syntheticOrientation;
-(CMAttitude *)refAttitude;
-(void)setRefAttitude:(CMAttitude *)arg1 ;
-(SCD_Struct_JT18)currentAttitude;
@end

