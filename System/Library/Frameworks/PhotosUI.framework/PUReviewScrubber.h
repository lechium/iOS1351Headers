/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIToolbar.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PUReviewScrubberDataSource, PUReviewScrubberDelegate;
@class NSIndexPath, _UIBackdropView, UIImageView, PUHorizontalCollectionViewLayout, UICollectionView, NSString, UITapGestureRecognizer, UIImpactFeedbackGenerator;

@interface PUReviewScrubber : UIToolbar <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {

	BOOL __ignoreScrollViewDidScrollUpdate;
	BOOL __performingInteractiveUpdate;
	id<PUReviewScrubberDataSource> _dataSource;
	id<PUReviewScrubberDelegate> _scrubberDelegate;
	NSIndexPath* _selectedIndexPath;
	Class _scrubberCellClass;
	_UIBackdropView* __backdropView;
	UIImageView* __shadowView;
	UIImageView* __arrowImageView;
	PUHorizontalCollectionViewLayout* __collectionViewLayout;
	UICollectionView* __collectionView;
	NSString* _cellReuseIdentifier;
	UITapGestureRecognizer* __tapGestureRecognizer;
	UIImpactFeedbackGenerator* __impactFeedbackBehavior;
	NSIndexPath* __indexPathForPreviousFeedbackQuery;

}

@property (nonatomic,readonly) _UIBackdropView * _backdropView;                                                                           //@synthesize _backdropView=__backdropView - In the implementation block
@property (nonatomic,readonly) UIImageView * _shadowView;                                                                                 //@synthesize _shadowView=__shadowView - In the implementation block
@property (nonatomic,readonly) UIImageView * _arrowImageView;                                                                             //@synthesize _arrowImageView=__arrowImageView - In the implementation block
@property (nonatomic,readonly) PUHorizontalCollectionViewLayout * _collectionViewLayout;                                                  //@synthesize _collectionViewLayout=__collectionViewLayout - In the implementation block
@property (nonatomic,readonly) UICollectionView * _collectionView;                                                                        //@synthesize _collectionView=__collectionView - In the implementation block
@property (nonatomic,retain) NSString * cellReuseIdentifier;                                                                              //@synthesize cellReuseIdentifier=_cellReuseIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL _ignoreScrollViewDidScrollUpdate;                                                                     //@synthesize _ignoreScrollViewDidScrollUpdate=__ignoreScrollViewDidScrollUpdate - In the implementation block
@property (nonatomic,readonly) BOOL _performingInteractiveUpdate;                                                                         //@synthesize _performingInteractiveUpdate=__performingInteractiveUpdate - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * _tapGestureRecognizer;                                                            //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIImpactFeedbackGenerator * _impactFeedbackBehavior;                                                       //@synthesize _impactFeedbackBehavior=__impactFeedbackBehavior - In the implementation block
@property (setter=_setIndexPathForPreviousFeedbackQuery:,nonatomic,retain) NSIndexPath * _indexPathForPreviousFeedbackQuery;              //@synthesize _indexPathForPreviousFeedbackQuery=__indexPathForPreviousFeedbackQuery - In the implementation block
@property (assign,nonatomic) id<PUReviewScrubberDataSource> dataSource;                                                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) id<PUReviewScrubberDelegate> scrubberDelegate;                                                               //@synthesize scrubberDelegate=_scrubberDelegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                                                             //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,retain) Class scrubberCellClass;                                                                                     //@synthesize scrubberCellClass=_scrubberCellClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<PUReviewScrubberDataSource>)dataSource;
-(void)setDataSource:(id<PUReviewScrubberDataSource>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)reloadData;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(PUHorizontalCollectionViewLayout *)_collectionViewLayout;
-(UIImageView *)_shadowView;
-(_UIBackdropView *)_backdropView;
-(BOOL)isMinibar;
-(UICollectionView *)_collectionView;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(NSString *)cellReuseIdentifier;
-(void)setCellReuseIdentifier:(NSString *)arg1 ;
-(UITapGestureRecognizer *)_tapGestureRecognizer;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(void)setScrubberDelegate:(id<PUReviewScrubberDelegate>)arg1 ;
-(id<PUReviewScrubberDelegate>)scrubberDelegate;
-(UIImageView *)_arrowImageView;
-(void)_handleTapAtIndexPath:(id)arg1 ;
-(id)_indexPathInCollectionView:(id)arg1 closestToPoint:(CGPoint)arg2 excludingIndexPath:(id)arg3 ;
-(void)finishInteractiveUpdate;
-(void)beginInteractiveUpdate;
-(void)reloadIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)toggleIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateWithAbsoluteProgress:(double)arg1 ;
-(void)setScrubberCellClass:(Class)arg1 ;
-(void)_commonPUReviewScrubberInitialization;
-(void)setSelectedIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)toggleSelectedIndexPathAnimated:(BOOL)arg1 ;
-(void)reloadSelectedIndexPathAnimated:(BOOL)arg1 ;
-(void)_beginFeedbackInteraction;
-(void)_playFeedbackIfNeeded;
-(void)_endFeedbackInteraction;
-(void)_handleTapOnReviewScrubber:(id)arg1 ;
-(void)_updateContentOffsetForSelectedIndexPathAnimated:(BOOL)arg1 ;
-(id)indexPathUnderTickMarkInCollectionView:(id)arg1 atContentOffset:(CGPoint)arg2 ;
-(CGPoint)contentOffsetForIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(CGPoint)contentOffsetForItemAtIndex:(long long)arg1 ofScrollView:(id)arg2 ;
-(void)_updateToSelectedIndexPath:(id)arg1 ;
-(void)_notifyDelegateOfScrub;
-(void)_notifyDelegateOfSelection;
-(Class)scrubberCellClass;
-(BOOL)_ignoreScrollViewDidScrollUpdate;
-(BOOL)_performingInteractiveUpdate;
-(UIImpactFeedbackGenerator *)_impactFeedbackBehavior;
-(NSIndexPath *)_indexPathForPreviousFeedbackQuery;
-(void)_setIndexPathForPreviousFeedbackQuery:(id)arg1 ;
@end

