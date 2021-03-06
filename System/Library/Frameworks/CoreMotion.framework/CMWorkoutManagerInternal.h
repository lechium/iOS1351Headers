/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, CMWorkoutManagerDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMWorkoutManager, CMWorkout;

@interface CMWorkoutManagerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	id<CMWorkoutManagerDelegate> fDelegate;
	CMWorkoutManager* fSender;
	CMWorkout* fWorkout;
	BOOL fResumeWorkoutOnInterrupt;

}
-(id)init;
-(void)dealloc;
-(void)_teardown;
-(void)_handleDaemonEvent:(id)arg1 ;
-(void)_startWorkout:(id)arg1 ;
-(void)_unregisterForWorkoutEvents;
-(void)_handleDaemonResponse:(id)arg1 ;
-(BOOL)_shouldAllowMotionCalibrationPromptsForWorkoutType:(long long)arg1 ;
-(void)_stopWorkout:(id)arg1 ;
-(void)_setSuggestedStopTimeout:(double)arg1 ;
-(void)_userDismissedWorkoutAlert;
-(void)_registerForWorkoutEvents;
-(void)_getPromptsNeededForWorkoutType:(long long)arg1 handler:(/*^block*/id)arg2 ;
@end

