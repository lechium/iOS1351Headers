/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNGuidanceManagerDelegate <NSObject>
@required
-(void)guidanceManager:(id)arg1 didArriveWithAnnouncement:(id)arg2;
-(void)guidanceManager:(id)arg1 didStartWithAnnouncement:(id)arg2;
-(void)guidanceManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
-(void)guidanceManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
-(void)guidanceManagerDidUpdateProgress:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
-(void)guidanceManagerHideSecondaryStep:(id)arg1;
-(void)guidanceManagerProceedingToRoute:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
-(void)guidanceManager:(id)arg1 announce:(id)arg2 shortPromptType:(unsigned long long)arg3 ignorePromptStyle:(BOOL)arg4 stage:(unsigned long long)arg5 hasSecondaryManeuver:(BOOL)arg6 completionBlock:(/*^block*/id)arg7;
-(void)guidanceManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8;
-(void)guidanceManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
-(void)guidanceManagerBeginGuidanceUpdate:(id)arg1;
-(void)guidanceManager:(id)arg1 updateSignsWithInfo:(id)arg2;
-(void)guidanceManager:(id)arg1 showLaneDirections:(id)arg2;
-(void)guidanceManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;
-(void)guidanceManagerEndGuidanceUpdate:(id)arg1;
-(void)guidanceManager:(id)arg1 triggerHaptics:(int)arg2;
-(void)guidanceManager:(id)arg1 usePersistentDisplay:(BOOL)arg2;
-(void)guidanceManager:(id)arg1 hideJunctionViewForId:(id)arg2;
-(void)guidanceManager:(id)arg1 showJunctionView:(id)arg2;
-(void)guidanceManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;
-(void)guidanceManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;

@end

