/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItem.h>

@class HMHome, NSSet;

@interface HUSoftwareUpdateActionAndProgressItem : HFItem {

	HMHome* _home;
	NSSet* _accessories;

}

@property (nonatomic,readonly) HMHome * home;                    //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSSet * accessories;              //@synthesize accessories=_accessories - In the implementation block
-(id)init;
-(HMHome *)home;
-(NSSet *)accessories;
-(id)initWithHome:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithAccessories:(id)arg1 ;
-(id)_filteredAccessories;
@end

