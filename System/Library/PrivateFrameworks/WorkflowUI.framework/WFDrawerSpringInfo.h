/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WFDrawerSpringInfo : NSObject {

	double _mass;
	double _stiffness;
	double _damping;
	double _initialVelocity;
	double _undershootTime;
	double _overshootTime;
	double _settlingTime;

}

@property (readonly) double mass;                         //@synthesize mass=_mass - In the implementation block
@property (readonly) double stiffness;                    //@synthesize stiffness=_stiffness - In the implementation block
@property (readonly) double damping;                      //@synthesize damping=_damping - In the implementation block
@property (readonly) double initialVelocity;              //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (readonly) double undershootTime;               //@synthesize undershootTime=_undershootTime - In the implementation block
@property (readonly) double overshootTime;                //@synthesize overshootTime=_overshootTime - In the implementation block
@property (readonly) double settlingTime;                 //@synthesize settlingTime=_settlingTime - In the implementation block
-(id)description;
-(double)mass;
-(double)stiffness;
-(double)damping;
-(double)initialVelocity;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4 ;
-(double)valueAtTime:(double)arg1 ;
-(double)undershootTime;
-(double)overshootTime;
-(double)settlingTime;
@end

