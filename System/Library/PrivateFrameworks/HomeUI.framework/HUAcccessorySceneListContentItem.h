/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItem.h>

@protocol HFServiceLikeItem;
@class HFItem, HMHome;

@interface HUAcccessorySceneListContentItem : HFItem {

	unsigned long long _contentSource;
	HFItem*<HFServiceLikeItem> _serviceLikeItem;
	HMHome* _home;

}

@property (nonatomic,readonly) unsigned long long contentSource;                        //@synthesize contentSource=_contentSource - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> serviceLikeItem;              //@synthesize serviceLikeItem=_serviceLikeItem - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                           //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(unsigned long long)contentSource;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(id)initWithContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3 ;
@end
