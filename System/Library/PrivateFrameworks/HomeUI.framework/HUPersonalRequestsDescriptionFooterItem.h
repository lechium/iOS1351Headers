/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItem.h>

@class HULocationDeviceManager;

@interface HUPersonalRequestsDescriptionFooterItem : HFItem {

	HULocationDeviceManager* _locationDeviceManager;

}

@property (nonatomic,readonly) HULocationDeviceManager * locationDeviceManager;              //@synthesize locationDeviceManager=_locationDeviceManager - In the implementation block
-(id)init;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HULocationDeviceManager *)locationDeviceManager;
-(id)_itemUpdateOutcomeForLocationDeviceText:(id)arg1 ;
-(id)_locationDeviceTextForDeviceNameString:(id)arg1 ;
@end
