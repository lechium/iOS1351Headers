/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <RelevanceEngineUI/REUpNextCollectionViewFlowLayout.h>

@class REUpNextCollectionViewFlowLayoutAttributes, NSDictionary, NSIndexPath;

@interface REUpNextCollectionViewSingleItemFlowLayout : REUpNextCollectionViewFlowLayout {

	REUpNextCollectionViewFlowLayoutAttributes* _preferedCellAttributes;
	NSDictionary* _allAttributes;
	NSIndexPath* _preferedIndexPath;

}

@property (nonatomic,retain) NSIndexPath * preferedIndexPath;              //@synthesize preferedIndexPath=_preferedIndexPath - In the implementation block
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(NSIndexPath *)preferedIndexPath;
-(void)setPreferedIndexPath:(NSIndexPath *)arg1 ;
@end

