/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNClassicGuidanceManager.h>

@interface MNDriveGuidanceManager : MNClassicGuidanceManager {

	int _currentContinuePhase;

}
-(int)transportType;
-(void)_resetStepState;
-(id)_nameInfoForContinueSign;
-(void)_updatePrepareForNextStep;
-(BOOL)_updateConsiderContinueAnnouncement:(id)arg1 location:(id)arg2 ;
-(BOOL)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2 ;
-(BOOL)_updateConsiderPrepareAnnouncement:(id)arg1 withMatch:(id)arg2 ;
-(double)_distanceForSign;
-(int)_continuePhase;
-(const SCD_Struct_MN22*)_announceSettings;
@end
