/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSSpecifier.h>

@class PSListController, PSSimStatusCache, PSUICellularPlanManagerCache, PSUICoreTelephonyDataCache, PSUICoreTelephonyCallCache, PSUIDeviceWiFiState, NSArray;

@interface PSUICellularDataSpecifier : PSSpecifier {

	PSListController* _hostController;
	PSSimStatusCache* _simStatusCache;
	PSUICellularPlanManagerCache* _planManagerCache;
	PSUICoreTelephonyDataCache* _dataCache;
	PSUICoreTelephonyCallCache* _callCache;
	PSUIDeviceWiFiState* _wifiState;
	NSArray* _cachedPlanItems;

}

@property (assign,nonatomic,__weak) PSListController * hostController;                     //@synthesize hostController=_hostController - In the implementation block
@property (nonatomic,retain) PSSimStatusCache * simStatusCache;                            //@synthesize simStatusCache=_simStatusCache - In the implementation block
@property (nonatomic,retain) PSUICellularPlanManagerCache * planManagerCache;              //@synthesize planManagerCache=_planManagerCache - In the implementation block
@property (nonatomic,retain) PSUICoreTelephonyDataCache * dataCache;                       //@synthesize dataCache=_dataCache - In the implementation block
@property (nonatomic,retain) PSUICoreTelephonyCallCache * callCache;                       //@synthesize callCache=_callCache - In the implementation block
@property (nonatomic,retain) PSUIDeviceWiFiState * wifiState;                              //@synthesize wifiState=_wifiState - In the implementation block
@property (nonatomic,retain) NSArray * cachedPlanItems;                                    //@synthesize cachedPlanItems=_cachedPlanItems - In the implementation block
-(void)setAirplaneMode:(BOOL)arg1 ;
-(PSUIDeviceWiFiState *)wifiState;
-(PSUICoreTelephonyDataCache *)dataCache;
-(void)setDataCache:(PSUICoreTelephonyDataCache *)arg1 ;
-(PSUICellularPlanManagerCache *)planManagerCache;
-(void)setPlanManagerCache:(PSUICellularPlanManagerCache *)arg1 ;
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(void)updateCachedState;
-(id)planItemForListItem:(id)arg1 ;
-(BOOL)isSubcontrollerNeeded;
-(id)subscriptionContextForListItem:(id)arg1 ;
-(NSArray *)cachedPlanItems;
-(void)setCachedPlanItems:(NSArray *)arg1 ;
-(PSSimStatusCache *)simStatusCache;
-(void)setSimStatusCache:(PSSimStatusCache *)arg1 ;
-(id)initWithHostController:(id)arg1 ;
-(id)initWithHostController:(id)arg1 simStatusCache:(id)arg2 planManagerCache:(id)arg3 callCache:(id)arg4 dataCache:(id)arg5 wifiState:(id)arg6 ;
-(void)setCellularDataEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isCellularDataEnabled:(id)arg1 ;
-(id)_isCellularDataEnabled:(id)arg1 ;
-(void)_setCellularDataEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)callEndConfirmationSpecifier;
-(void)acceptedDataSwitch:(id)arg1 ;
-(void)setCellularDataSwitch:(BOOL)arg1 ;
-(void)_acceptedDataSwitch:(id)arg1 ;
-(void)_setCellularDataSwitch:(id)arg1 ;
-(void)canceledDataSwitch:(id)arg1 ;
-(PSUICoreTelephonyCallCache *)callCache;
-(void)setCallCache:(PSUICoreTelephonyCallCache *)arg1 ;
-(void)setWifiState:(PSUIDeviceWiFiState *)arg1 ;
@end

