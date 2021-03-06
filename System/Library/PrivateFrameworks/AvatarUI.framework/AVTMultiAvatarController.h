/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/AVTAvatarRecordDataSourceObserver.h>
#import <libobjc.A.dylib/AVTNotifyingContainerViewDelegate.h>
#import <libobjc.A.dylib/AVTAvatarDisplayingController.h>

@protocol AVTAvatarDisplayingControllerDelegate, AVTPresenterDelegate, AVTAvatarListItem, AVTAvatarRecord, AVTUILogger, AVTViewCarouselLayout;
@class AVTRenderingScope, UIView, UICollectionView, AVTZIndexEngagementListCollectionViewLayout, AVTCenteringCollectionViewDelegate, NSArray, AVTViewSession, AVTCarouselPlusButtonView, AVTAvatarListCell, NSNumber, AVTTransitionCoordinator, AVTAvatarRecordDataSource, AVTUIEnvironment, _AVTAvatarRecordImageProvider, NSString;

@interface AVTMultiAvatarController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, AVTAvatarRecordDataSourceObserver, AVTNotifyingContainerViewDelegate, AVTAvatarDisplayingController> {

	BOOL _allowsCreate;
	BOOL _hideImageForDisplayedRecord;
	id<AVTAvatarDisplayingControllerDelegate> delegate;
	id<AVTPresenterDelegate> presenterDelegate;
	double _decelerationRate;
	AVTRenderingScope* _renderingScope;
	UIView* _view;
	UICollectionView* _collectionView;
	AVTZIndexEngagementListCollectionViewLayout* _collectionViewLayout;
	AVTCenteringCollectionViewDelegate* _centeringDelegate;
	NSArray* _recordListItems;
	AVTViewSession* _avtViewSession;
	AVTCarouselPlusButtonView* _addItemView;
	id<AVTAvatarListItem> _addListItem;
	id<AVTAvatarRecord> _displayedRecord;
	AVTAvatarListCell* _liveCell;
	NSNumber* _cachedCanCreateValue;
	AVTTransitionCoordinator* _transitionCoordinator;
	AVTAvatarRecordDataSource* _dataSource;
	AVTUIEnvironment* _environment;
	id<AVTUILogger> _logger;
	_AVTAvatarRecordImageProvider* _thumbnailRenderer;
	id<AVTViewCarouselLayout> _avtViewLayout;
	CGPoint _lastContentOffset;

}

@property (nonatomic,retain) UIView * view;                                                                   //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                               //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) AVTZIndexEngagementListCollectionViewLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) AVTCenteringCollectionViewDelegate * centeringDelegate;                          //@synthesize centeringDelegate=_centeringDelegate - In the implementation block
@property (nonatomic,retain) NSArray * recordListItems;                                                       //@synthesize recordListItems=_recordListItems - In the implementation block
@property (nonatomic,retain) AVTViewSession * avtViewSession;                                                 //@synthesize avtViewSession=_avtViewSession - In the implementation block
@property (nonatomic,retain) AVTCarouselPlusButtonView * addItemView;                                         //@synthesize addItemView=_addItemView - In the implementation block
@property (nonatomic,retain) id<AVTAvatarListItem> addListItem;                                               //@synthesize addListItem=_addListItem - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> displayedRecord;                                             //@synthesize displayedRecord=_displayedRecord - In the implementation block
@property (nonatomic,retain) AVTAvatarListCell * liveCell;                                                    //@synthesize liveCell=_liveCell - In the implementation block
@property (assign,nonatomic) BOOL allowsCreate;                                                               //@synthesize allowsCreate=_allowsCreate - In the implementation block
@property (assign,nonatomic) NSNumber * cachedCanCreateValue;                                                 //@synthesize cachedCanCreateValue=_cachedCanCreateValue - In the implementation block
@property (nonatomic,readonly) AVTTransitionCoordinator * transitionCoordinator;                              //@synthesize transitionCoordinator=_transitionCoordinator - In the implementation block
@property (nonatomic,readonly) AVTAvatarRecordDataSource * dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                        //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) _AVTAvatarRecordImageProvider * thumbnailRenderer;                             //@synthesize thumbnailRenderer=_thumbnailRenderer - In the implementation block
@property (nonatomic,retain) id<AVTViewCarouselLayout> avtViewLayout;                                         //@synthesize avtViewLayout=_avtViewLayout - In the implementation block
@property (assign,nonatomic) CGPoint lastContentOffset;                                                       //@synthesize lastContentOffset=_lastContentOffset - In the implementation block
@property (assign,nonatomic) BOOL hideImageForDisplayedRecord;                                                //@synthesize hideImageForDisplayedRecord=_hideImageForDisplayedRecord - In the implementation block
@property (assign,nonatomic) double decelerationRate;                                                         //@synthesize decelerationRate=_decelerationRate - In the implementation block
@property (nonatomic,readonly) AVTRenderingScope * renderingScope;                                            //@synthesize renderingScope=_renderingScope - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTPresenterDelegate> presenterDelegate; 
@property (assign,nonatomic,__weak) id<AVTAvatarDisplayingControllerDelegate> delegate; 
+(id)newCollectionViewLayoutForEngagedCellSize:(CGSize)arg1 boundsSize:(CGSize)arg2 environment:(id)arg3 ;
+(id)listItemsForAvatarRecords:(id)arg1 ;
+(id)snapshotProviderFocusedOnRecordWithIdentifier:(id)arg1 size:(CGSize)arg2 avtViewAspectRatio:(CGSize)arg3 dataSource:(id)arg4 environment:(id)arg5 ;
-(void)dealloc;
-(id<AVTAvatarDisplayingControllerDelegate>)delegate;
-(void)setDelegate:(id<AVTAvatarDisplayingControllerDelegate>)arg1 ;
-(AVTUIEnvironment *)environment;
-(id<AVTUILogger>)logger;
-(AVTAvatarRecordDataSource *)dataSource;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)loadView;
-(AVTTransitionCoordinator *)transitionCoordinator;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionViewLayout:(AVTZIndexEngagementListCollectionViewLayout *)arg1 ;
-(void)reloadData;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)isViewLoaded;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(AVTZIndexEngagementListCollectionViewLayout *)collectionViewLayout;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setDecelerationRate:(double)arg1 ;
-(CGPoint)lastContentOffset;
-(void)setLastContentOffset:(CGPoint)arg1 ;
-(double)decelerationRate;
-(void)setPresenterDelegate:(id<AVTPresenterDelegate>)arg1 ;
-(id<AVTPresenterDelegate>)presenterDelegate;
-(AVTRenderingScope *)renderingScope;
-(void)notifyingContainerViewWillChangeSize:(CGSize)arg1 ;
-(void)notifyingContainerViewDidChangeSize:(CGSize)arg1 ;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2 initialAVTViewLayout:(id)arg3 ;
-(id)getFirstItem;
-(NSArray *)recordListItems;
-(void)preloadAll;
-(void)updateCachedCanCreateValueIfNeeded;
-(NSNumber *)cachedCanCreateValue;
-(BOOL)allowsCreate;
-(id<AVTAvatarListItem>)addListItem;
-(AVTCarouselPlusButtonView *)addItemView;
-(void)setAddListItem:(id<AVTAvatarListItem>)arg1 ;
-(void)createAddItemViewIfNeeded;
-(id)indexPathForItemClosestToCenter;
-(id<AVTAvatarRecord>)displayedRecord;
-(unsigned long long)listItemIndexForRecord:(id)arg1 ;
-(void)transitionCurrentDisplayedRecordAnimated:(BOOL)arg1 ;
-(void)layoutDidChangeWhileMoving:(BOOL)arg1 offset:(CGPoint)arg2 ;
-(id<AVTViewCarouselLayout>)avtViewLayout;
-(void)setCenteringDelegate:(AVTCenteringCollectionViewDelegate *)arg1 ;
-(AVTCenteringCollectionViewDelegate *)centeringDelegate;
-(id)listItemsForDisplay;
-(void)scrollToViewForAvatarRecord:(id)arg1 animated:(BOOL)arg2 ;
-(void)scrollToViewAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)notifyDelegateForScrollingTowardItem:(id)arg1 ratio:(double)arg2 ;
-(void)setDisplayedRecordFromIndex:(unsigned long long)arg1 ;
-(void)setDisplayedRecord:(id<AVTAvatarRecord>)arg1 ;
-(BOOL)shouldCurrentlyDisplayedRecordTransitionToLive;
-(AVTAvatarListCell *)liveCell;
-(AVTViewSession *)avtViewSession;
-(void)transitionCell:(id)arg1 indexPath:(id)arg2 toStartFocusingAnimated:(BOOL)arg3 session:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)transitionCenterCellIfPresentToStopFocusingAnimated:(BOOL)arg1 ;
-(void)notifyDelegateForScrollingTowardItemFromOffset:(CGPoint)arg1 ;
-(void)updateDisplayedRecordIfNeeded;
-(void)scrollToDisplayedRecord;
-(void)buildCollectionViewAndConfigureLayoutIfNeeded;
-(void)loadRecordsIfNeeded;
-(void)transitionCenterCellIfPresentToStartFocusing;
-(void)reloadRecordListItems;
-(id)loadRecords;
-(void)setRecordListItems:(NSArray *)arg1 ;
-(void)setAvtViewLayout:(id<AVTViewCarouselLayout>)arg1 ;
-(void)setAvtViewSession:(AVTViewSession *)arg1 ;
-(void)setHideImageForDisplayedRecord:(BOOL)arg1 ;
-(BOOL)hideImageForDisplayedRecord;
-(_AVTAvatarRecordImageProvider *)thumbnailRenderer;
-(void)transitionCenterCellToStartFocusing:(id)arg1 indexPath:(id)arg2 ;
-(void)createAvatar;
-(id)cellForRecordItem:(id)arg1 ;
-(void)transitionCell:(id)arg1 toStopFocusingAnimated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setLiveCell:(AVTAvatarListCell *)arg1 ;
-(void)dataSource:(id)arg1 didAddRecord:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dataSource:(id)arg1 didEditRecord:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dataSource:(id)arg1 didRemoveRecord:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)significantRecordChangeInDataSource:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2 ;
-(void)useAVTViewFromSession:(id)arg1 withLayout:(id)arg2 ;
-(void)stopUsingAVTViewSessionSynchronously:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareToTransitionToVisible:(BOOL)arg1 completionHandler:(/*^block*/id*)arg2 ;
-(void)displayAvatarForRecord:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAllowsCreate:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)recordForItem:(id)arg1 ;
-(void)setAllowsCreate:(BOOL)arg1 ;
-(void)setAddItemView:(AVTCarouselPlusButtonView *)arg1 ;
-(void)setCachedCanCreateValue:(NSNumber *)arg1 ;
-(id)viewForSnapshot;
@end

