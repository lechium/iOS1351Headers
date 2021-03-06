/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HDFitnessMachineStateTimersDelegate <NSObject>
@optional
-(void)stateTimersFieldDetectTimeout:(id)arg1;
-(void)stateTimersTagReadTimeout:(id)arg1;
-(void)stateTimersMachineIdentityVerificationTimeout:(id)arg1;
-(void)stateTimersUserAcceptanceTimeout:(id)arg1;
-(void)stateTimersWaitForMachineStartTimeout:(id)arg1;
-(void)stateTimersPauseTimeout:(id)arg1;
-(void)stateTimersDisconnectTimeout:(id)arg1;
-(void)stateTimersRetryConnectionTimeout:(id)arg1;
-(void)stateTimersMfaTimeout:(id)arg1;

@end

