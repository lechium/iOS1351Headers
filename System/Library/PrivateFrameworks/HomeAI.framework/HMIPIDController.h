/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class HMFTimer, NSString;

@interface HMIPIDController : HMFObject <HMFTimerDelegate> {

	float _kp;
	float _ki;
	float _ts;
	float _target;
	float _integrator;
	float _integratorMin;
	float _integratorMax;
	float _engageDelta;
	int _controlEffortMin;
	int _controlEffortMax;
	long long _controlEffort;
	HMFTimer* _tick;

}

@property (readonly) HMFTimer * tick;                               //@synthesize tick=_tick - In the implementation block
@property (readonly) long long controlEffort;                       //@synthesize controlEffort=_controlEffort - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)initWithConfiguration:(id)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(HMFTimer *)tick;
-(void)setControlEffort:(long long)arg1 ;
-(void)resumeMonitoring;
-(void)updateControlEffortFromValue:(float)arg1 ;
-(void)suspendMonitoring;
-(long long)controlEffort;
@end

