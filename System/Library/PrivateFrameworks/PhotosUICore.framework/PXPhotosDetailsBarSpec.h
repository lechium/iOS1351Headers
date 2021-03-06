/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXBarSpec.h>

@class NSDictionary, NSSet;

@interface PXPhotosDetailsBarSpec : PXBarSpec {

	NSDictionary* _sortPriorityByBarItemIdentifierByPlacement;
	NSSet* _includedBarItemIdentifiers;
	BOOL _shouldPlaceEditActionsInToolbar;
	unsigned long long _detailsOptions;

}

@property (assign,nonatomic) unsigned long long detailsOptions;              //@synthesize detailsOptions=_detailsOptions - In the implementation block
-(unsigned long long)detailsOptions;
-(id)initWithExtendedTraitCollection:(id)arg1 ;
-(id)_sortPriorityForBarItem:(id)arg1 placement:(id)arg2 ;
-(id)_placementForBarItem:(id)arg1 ;
-(BOOL)_shouldIncludeItem:(id)arg1 ;
-(id)sortedBarItemsByPlacement:(id)arg1 ;
-(void)setDetailsOptions:(unsigned long long)arg1 ;
@end

