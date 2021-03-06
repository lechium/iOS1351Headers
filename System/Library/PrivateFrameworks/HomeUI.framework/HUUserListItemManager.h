/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItemManager.h>

@class HFHomeBuilder;

@interface HUUserListItemManager : HFItemManager {

	HFHomeBuilder* _homeBuilder;

}

@property (nonatomic,readonly) HFHomeBuilder * homeBuilder;              //@synthesize homeBuilder=_homeBuilder - In the implementation block
-(unsigned long long)_numberOfSections;
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(id)_homeFuture;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2 ;
-(HFHomeBuilder *)homeBuilder;
@end

