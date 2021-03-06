/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACCPlatformIOKitPowerPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(BOOL)isExternalChargerConnected;
-(int)getBatteryChargingState;
-(unsigned char)getBatteryChargeLevel;
-(id)createBatteryNotificationClient;
-(void)destroyBatteryNotificationsForClient:(id)arg1;
-(id)createSleepNotificationClient;
-(void)destroySleepNotificationsForClient:(id)arg1;
-(void)clientHandledSleepNotification:(id)arg1;
-(int)getBatteryChargingType;
-(int)getExternalBatteryChargingType;
-(BOOL)getBatteryChargingTypeIsInductive;
-(BOOL)getExternalBatteryChargingTypeIsInductive;

@end

