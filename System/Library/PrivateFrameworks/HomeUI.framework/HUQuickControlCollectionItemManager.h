/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUQuickControlCollectionItemManaging.h>

@protocol NSCopying;
@class HFItemProvider, HFItem, NSString;

@interface HUQuickControlCollectionItemManager : HFItemManager <HUQuickControlCollectionItemManaging> {

	HFItemProvider* _gridItemProvider;
	HFItem*<NSCopying> _supplementaryItem;
	/*^block*/id _gridItemProviderCreator;
	/*^block*/id _supplementaryItemProviderCreator;
	HFItemProvider* _supplementaryItemProvider;

}

@property (nonatomic,copy,readonly) id gridItemProviderCreator;                        //@synthesize gridItemProviderCreator=_gridItemProviderCreator - In the implementation block
@property (nonatomic,copy,readonly) id supplementaryItemProviderCreator;               //@synthesize supplementaryItemProviderCreator=_supplementaryItemProviderCreator - In the implementation block
@property (nonatomic,retain) HFItemProvider * gridItemProvider;                        //@synthesize gridItemProvider=_gridItemProvider - In the implementation block
@property (nonatomic,retain) HFItemProvider * supplementaryItemProvider;               //@synthesize supplementaryItemProvider=_supplementaryItemProvider - In the implementation block
@property (nonatomic,copy,readonly) HFItem*<NSCopying> supplementaryItem;              //@synthesize supplementaryItem=_supplementaryItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HFItem*<NSCopying>)supplementaryItem;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 gridItemProviderCreator:(/*^block*/id)arg2 supplementaryItemProviderCreator:(/*^block*/id)arg3 ;
-(HFItemProvider *)gridItemProvider;
-(HFItemProvider *)supplementaryItemProvider;
-(id)gridItemProviderCreator;
-(void)setGridItemProvider:(HFItemProvider *)arg1 ;
-(id)supplementaryItemProviderCreator;
-(void)setSupplementaryItemProvider:(HFItemProvider *)arg1 ;
-(BOOL)isGridItem:(id)arg1 ;
@end

