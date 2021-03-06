/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTSettings.h>

@class SBAppSwitcherOrbGestureAnimationSettings;

@interface SBAppSwitcherOrbGestureSettings : PTSettings {

	BOOL _useOrbGesture;
	BOOL _canPop;
	BOOL _forceDrivesInitialProgress;
	BOOL _canPlayInitialHaptic;
	BOOL _canPlayCommitHaptic;
	double _orbGestureRegionMax;
	double _maxIconScrollProgressAllowed;
	double _appToAppCurveMinimum;
	double _homeToAppCurveMinimum;
	double _minPanTranslation;
	double _maxPopPanTranslation;
	double _additionalThrowDisplacement;
	double _commitToPreviousAppTranslation;
	double _commitToNextAppTranslation;
	double _dimmingValue;
	double _forcePeekAdjustApex;
	double _forceAdjustMax;
	double _maxAverageBreathingVelocity;
	double _maxBreathingVelocityInterval;
	SBAppSwitcherOrbGestureAnimationSettings* _animationSettings;

}

@property (assign) BOOL useOrbGesture;                                                        //@synthesize useOrbGesture=_useOrbGesture - In the implementation block
@property (assign) double orbGestureRegionMax;                                                //@synthesize orbGestureRegionMax=_orbGestureRegionMax - In the implementation block
@property (assign) double maxIconScrollProgressAllowed;                                       //@synthesize maxIconScrollProgressAllowed=_maxIconScrollProgressAllowed - In the implementation block
@property (assign) double appToAppCurveMinimum;                                               //@synthesize appToAppCurveMinimum=_appToAppCurveMinimum - In the implementation block
@property (assign) double homeToAppCurveMinimum;                                              //@synthesize homeToAppCurveMinimum=_homeToAppCurveMinimum - In the implementation block
@property (assign) double minPanTranslation;                                                  //@synthesize minPanTranslation=_minPanTranslation - In the implementation block
@property (assign) double maxPopPanTranslation;                                               //@synthesize maxPopPanTranslation=_maxPopPanTranslation - In the implementation block
@property (assign) double additionalThrowDisplacement;                                        //@synthesize additionalThrowDisplacement=_additionalThrowDisplacement - In the implementation block
@property (assign) double commitToPreviousAppTranslation;                                     //@synthesize commitToPreviousAppTranslation=_commitToPreviousAppTranslation - In the implementation block
@property (assign) double commitToNextAppTranslation;                                         //@synthesize commitToNextAppTranslation=_commitToNextAppTranslation - In the implementation block
@property (assign) double dimmingValue;                                                       //@synthesize dimmingValue=_dimmingValue - In the implementation block
@property (assign) double forcePeekAdjustApex;                                                //@synthesize forcePeekAdjustApex=_forcePeekAdjustApex - In the implementation block
@property (assign) double forceAdjustMax;                                                     //@synthesize forceAdjustMax=_forceAdjustMax - In the implementation block
@property (assign) double maxAverageBreathingVelocity;                                        //@synthesize maxAverageBreathingVelocity=_maxAverageBreathingVelocity - In the implementation block
@property (assign) double maxBreathingVelocityInterval;                                       //@synthesize maxBreathingVelocityInterval=_maxBreathingVelocityInterval - In the implementation block
@property (assign) BOOL canPop;                                                               //@synthesize canPop=_canPop - In the implementation block
@property (assign) BOOL forceDrivesInitialProgress;                                           //@synthesize forceDrivesInitialProgress=_forceDrivesInitialProgress - In the implementation block
@property (assign) BOOL canPlayInitialHaptic;                                                 //@synthesize canPlayInitialHaptic=_canPlayInitialHaptic - In the implementation block
@property (assign) BOOL canPlayCommitHaptic;                                                  //@synthesize canPlayCommitHaptic=_canPlayCommitHaptic - In the implementation block
@property (retain) SBAppSwitcherOrbGestureAnimationSettings * animationSettings;              //@synthesize animationSettings=_animationSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBAppSwitcherOrbGestureAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(SBAppSwitcherOrbGestureAnimationSettings *)arg1 ;
-(double)commitToNextAppTranslation;
-(double)dimmingValue;
-(double)appToAppCurveMinimum;
-(double)homeToAppCurveMinimum;
-(double)valueAlongDefaultForcePressCurveWithMinY:(double)arg1 progress:(double)arg2 fromHomeScreen:(BOOL)arg3 ;
-(double)maxPopPanTranslation;
-(BOOL)forceDrivesInitialProgress;
-(double)forcePeekAdjustApex;
-(double)forceAdjustMax;
-(double)maxAverageBreathingVelocity;
-(void)setUseOrbGesture:(BOOL)arg1 ;
-(void)setOrbGestureRegionMax:(double)arg1 ;
-(void)setMaxIconScrollProgressAllowed:(double)arg1 ;
-(void)setAppToAppCurveMinimum:(double)arg1 ;
-(void)setHomeToAppCurveMinimum:(double)arg1 ;
-(void)setMinPanTranslation:(double)arg1 ;
-(void)setMaxPopPanTranslation:(double)arg1 ;
-(void)setAdditionalThrowDisplacement:(double)arg1 ;
-(void)setCommitToPreviousAppTranslation:(double)arg1 ;
-(void)setCommitToNextAppTranslation:(double)arg1 ;
-(void)setDimmingValue:(double)arg1 ;
-(void)setForceAdjustMax:(double)arg1 ;
-(void)setForcePeekAdjustApex:(double)arg1 ;
-(void)setMaxAverageBreathingVelocity:(double)arg1 ;
-(void)setMaxBreathingVelocityInterval:(double)arg1 ;
-(void)setCanPop:(BOOL)arg1 ;
-(void)setForceDrivesInitialProgress:(BOOL)arg1 ;
-(void)setCanPlayInitialHaptic:(BOOL)arg1 ;
-(void)setCanPlayCommitHaptic:(BOOL)arg1 ;
-(BOOL)useOrbGesture;
-(double)orbGestureRegionMax;
-(double)maxIconScrollProgressAllowed;
-(double)minPanTranslation;
-(double)additionalThrowDisplacement;
-(double)commitToPreviousAppTranslation;
-(double)maxBreathingVelocityInterval;
-(BOOL)canPop;
-(BOOL)canPlayInitialHaptic;
-(BOOL)canPlayCommitHaptic;
@end

