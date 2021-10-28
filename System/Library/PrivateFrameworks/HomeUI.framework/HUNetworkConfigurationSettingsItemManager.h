/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItemManager.h>

@class HUNetworkConfigurationSettingsModule, HFNetworkConfigurationGroupItem;

@interface HUNetworkConfigurationSettingsItemManager : HFItemManager {

	HUNetworkConfigurationSettingsModule* _networkConfigurationSettingsModule;

}

@property (nonatomic,readonly) HFNetworkConfigurationGroupItem * sourceNetworkConfigurationGroupItem; 
@property (nonatomic,retain) HUNetworkConfigurationSettingsModule * networkConfigurationSettingsModule;              //@synthesize networkConfigurationSettingsModule=_networkConfigurationSettingsModule - In the implementation block
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_buildItemModulesForHome:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 networkConfigurationGroupItem:(id)arg2 ;
-(HUNetworkConfigurationSettingsModule *)networkConfigurationSettingsModule;
-(HFNetworkConfigurationGroupItem *)sourceNetworkConfigurationGroupItem;
-(void)setNetworkConfigurationSettingsModule:(HUNetworkConfigurationSettingsModule *)arg1 ;
@end
