/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItemManager.h>

@class HMHome, HFBridgeItemProvider, HFResidentDeviceItemProvider;

@interface HUBridgeAndResidentDeviceListItemManager : HFItemManager {

	HMHome* _overrideHome;
	HFBridgeItemProvider* _bridgeItemProvider;
	HFResidentDeviceItemProvider* _residentDeviceItemProvider;

}

@property (nonatomic,readonly) HMHome * overrideHome;                                                //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,retain) HFBridgeItemProvider * bridgeItemProvider;                              //@synthesize bridgeItemProvider=_bridgeItemProvider - In the implementation block
@property (nonatomic,retain) HFResidentDeviceItemProvider * residentDeviceItemProvider;              //@synthesize residentDeviceItemProvider=_residentDeviceItemProvider - In the implementation block
+(/*^block*/id)residentDeviceItemComparator;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_homeFuture;
-(id)_itemsToHideInSet:(id)arg1 ;
-(HMHome *)overrideHome;
-(id)initWithHome:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isBridgeItem:(id)arg1 ;
-(BOOL)isResidentDeviceItem:(id)arg1 ;
-(HFBridgeItemProvider *)bridgeItemProvider;
-(HFResidentDeviceItemProvider *)residentDeviceItemProvider;
-(void)setResidentDeviceItemProvider:(HFResidentDeviceItemProvider *)arg1 ;
-(void)setBridgeItemProvider:(HFBridgeItemProvider *)arg1 ;
@end

