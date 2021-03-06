/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKNavigatorViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIScrollViewDelegate.h>

@class OKNavigatorCollectionView, NSArray, OKPageViewController, NSString;

@interface OKNavigatorCollectionViewControllerProxy : OKNavigatorViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate> {

	OKNavigatorCollectionView* _collectionView;
	CGPoint _collectionViewContentPreviousOffset;
	BOOL _scrollViewDidEndDragging;
	NSArray* _orderedPagesNames;
	OKPageViewController* _lastPageViewController;

}

@property (nonatomic,retain) OKPageViewController * lastPageViewController;              //@synthesize lastPageViewController=_lastPageViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)commonInit;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)prepareForDisplay;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(BOOL)isHorizontal;
-(void)_scrollViewDidCompleteScrolling;
-(void)resolutionDidChange;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(void)navigateToPageWithName:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSettingTransition:(unsigned long long)arg1 ;
-(void)setSettingOrientation:(unsigned long long)arg1 ;
-(void)prepareAdjacentPages;
-(void)updateCollectionView;
-(void)prepareAdjacentPages:(unsigned long long)arg1 withDirection:(unsigned long long)arg2 ;
-(void)prepareAdjacentPages:(unsigned long long)arg1 ;
-(void)prepareAdjacentPagesForScrolling;
-(void)updateCurrentPageViewController;
-(void)updateCollectionViewLayoutItemSize;
-(id)currentPageViewControllerIndexPath;
-(OKPageViewController *)lastPageViewController;
-(void)setLastPageViewController:(OKPageViewController *)arg1 ;
@end

