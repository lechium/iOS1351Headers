/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBApplicationLaunchNotifyAlertItem.h>

@interface SBApplicationLaunchNotifyAirplaneModeAlertItem : SBApplicationLaunchNotifyAlertItem {

	BOOL _usesCellNetwork;

}
-(id)initWithApplication:(id)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)_configureForAirplaneModeDataAlertOnCellular:(BOOL)arg1 ;
-(void)_configureForAirplaneModeDataAlertOffCellular:(BOOL)arg1 ;
-(void)_turnOffAirplaneMode;
-(void)_sendUserToSettings;
@end
