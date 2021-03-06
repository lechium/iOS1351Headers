/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUHorizontalCollectionViewLayout.h>

@class NSIndexPath;

@interface PUAvalancheReviewCollectionViewLayout : PUHorizontalCollectionViewLayout {

	NSIndexPath* _zoomingCellIndexPath;
	UIOffset _sharingBadgeOffset;

}

@property (assign,nonatomic) UIOffset sharingBadgeOffset;                                                    //@synthesize sharingBadgeOffset=_sharingBadgeOffset - In the implementation block
@property (nonatomic,retain) NSIndexPath * zoomingCellIndexPath;                                             //@synthesize zoomingCellIndexPath=_zoomingCellIndexPath - In the implementation block
@property (assign,nonatomic,__weak) id<PUAvalancheReviewCollectionViewLayoutDelegate> delegate; 
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(BOOL)_supportsAdvancedTransitionAnimations;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(void)setZoomingCellIndexPath:(NSIndexPath *)arg1 ;
-(CGRect)_floatingSelectionBadgeFrameForItemFrame:(CGRect)arg1 visibleItemFrame:(CGRect)arg2 atIndexPath:(id)arg3 ;
-(id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1 ;
-(BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(CGRect)arg1 ;
-(UIOffset)sharingBadgeOffset;
-(void)setSharingBadgeOffset:(UIOffset)arg1 ;
-(NSIndexPath *)zoomingCellIndexPath;
@end

