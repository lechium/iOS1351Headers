/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CoreTelephonyShimDelegate <NSObject>
@optional
-(void)operatorNameChangedForSubscription:(id)arg1;
-(void)signalStrengthChangedForSubscription:(id)arg1;
-(void)infoLinkStateChangedForSubscription:(id)arg1;
-(void)infoLinkQualityFingeprintChangedForSubscription:(id)arg1;
-(void)infoTrafficClassChangedForSubscription:(id)arg1;
-(void)infoDataTransferTimeChangedForSubscription:(id)arg1;
-(void)infoDataTransferTimeEnabledChangedForSubscription:(id)arg1;
-(void)infoLinkPowerCostChangedForSubscription:(id)arg1;
-(void)infoDataStallChangedForSubscription:(id)arg1;
-(void)cellInfoChangedForSubscription:(id)arg1;
-(void)ctServerConnectionNotification:(CFStringRef)arg1 notificationInfo:(CFDictionaryRef)arg2;
-(void)currentDataSIMIdentifier:(id)arg1;
-(void)rnfSettingChangedToFeatureEnabled:(BOOL)arg1 userEnabled:(BOOL)arg2;
-(void)signalStrengthChanged:(id)arg1;

@end

