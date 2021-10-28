/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmergencyAlerts.framework/EmergencyAlerts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UNUserNotificationCenter;

@interface EAEmergencyAlertCenter : NSObject {

	UNUserNotificationCenter* _userNotificationCenter;

}
-(id)init;
-(void)addNotificationRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)currentCallCount;
-(id)initWithUserNotificationCenter:(id)arg1 ;
-(void)addAlertRequestForCellBroadcastMessage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end
