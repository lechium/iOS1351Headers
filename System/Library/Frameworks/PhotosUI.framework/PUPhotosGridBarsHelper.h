/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUPhotoSelectionManagerChangeObserver.h>

@protocol PUPhotosGridBarsHelperDelegate, OS_dispatch_queue;
@class NSString, NSArray, PUPhotoSelectionManager, NSObject;

@interface PUPhotosGridBarsHelper : NSObject <PUPhotoSelectionManagerChangeObserver> {

	BOOL _isPerformingUpdates;
	SCD_Struct_PU13 _needsUpdateFlags;
	BOOL _swipeSelecting;
	BOOL _shouldHideBackButton;
	BOOL __shouldUpdateBarItemsLazily;
	BOOL __updatingItemsWithCount;
	BOOL __shouldUpdateItemsWithCount;
	BOOL __hadSelectionOnLastUpdate;
	id<PUPhotosGridBarsHelperDelegate> _delegate;
	NSString* _title;
	NSString* _prompt;
	NSArray* _leftBarButtonItems;
	NSArray* _rightBarButtonItems;
	PUPhotoSelectionManager* __photoSelectionManager;
	NSObject*<OS_dispatch_queue> __queue;

}

@property (setter=_setTitle:,nonatomic,retain) NSString * title;                                                                            //@synthesize title=_title - In the implementation block
@property (setter=_setPrompt:,nonatomic,retain) NSString * prompt;                                                                          //@synthesize prompt=_prompt - In the implementation block
@property (assign,setter=_setShouldHideBackButton:,nonatomic) BOOL shouldHideBackButton;                                                    //@synthesize shouldHideBackButton=_shouldHideBackButton - In the implementation block
@property (setter=_setLeftBarButtonItems:,nonatomic,retain) NSArray * leftBarButtonItems;                                                   //@synthesize leftBarButtonItems=_leftBarButtonItems - In the implementation block
@property (setter=_setRightBarButtonItems:,nonatomic,retain) NSArray * rightBarButtonItems;                                                 //@synthesize rightBarButtonItems=_rightBarButtonItems - In the implementation block
@property (setter=_setPhotoSelectionManager:,nonatomic,retain) PUPhotoSelectionManager * _photoSelectionManager;                            //@synthesize _photoSelectionManager=__photoSelectionManager - In the implementation block
@property (assign,setter=_setShouldUpdateBarItemsLazily:,nonatomic) BOOL _shouldUpdateBarItemsLazily;                                       //@synthesize _shouldUpdateBarItemsLazily=__shouldUpdateBarItemsLazily - In the implementation block
@property (assign,setter=_setUpdatingItemsWithCount:,getter=_isUpdatingItemsWithCount,nonatomic) BOOL _updatingItemsWithCount;              //@synthesize _updatingItemsWithCount=__updatingItemsWithCount - In the implementation block
@property (assign,setter=_setShouldUpdateItemsWithCount:,nonatomic) BOOL _shouldUpdateItemsWithCount;                                       //@synthesize _shouldUpdateItemsWithCount=__shouldUpdateItemsWithCount - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _queue;                                                                         //@synthesize _queue=__queue - In the implementation block
@property (assign,setter=_setHadSelectionOnLastUpdate:,nonatomic) BOOL _hadSelectionOnLastUpdate;                                           //@synthesize _hadSelectionOnLastUpdate=__hadSelectionOnLastUpdate - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotosGridBarsHelperDelegate> delegate;                                                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSwipeSelecting,nonatomic) BOOL swipeSelecting;                                                                   //@synthesize swipeSelecting=_swipeSelecting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)_queue;
-(id<PUPhotosGridBarsHelperDelegate>)delegate;
-(void)setDelegate:(id<PUPhotosGridBarsHelperDelegate>)arg1 ;
-(NSString *)title;
-(void)_setTitle:(id)arg1 ;
-(NSArray *)leftBarButtonItems;
-(NSArray *)rightBarButtonItems;
-(NSString *)prompt;
-(void)_setPrompt:(id)arg1 ;
-(void)_setRightBarButtonItems:(id)arg1 ;
-(void)_setLeftBarButtonItems:(id)arg1 ;
-(BOOL)_needsUpdate;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)photoSelectionManagerSelectionDidChange:(id)arg1 ;
-(void)setSwipeSelecting:(BOOL)arg1 ;
-(void)invalidateNavigationBarItems;
-(BOOL)shouldHideBackButton;
-(void)_setPhotoSelectionManager:(id)arg1 ;
-(void)_setShouldUpdateBarItemsLazily:(BOOL)arg1 ;
-(void)_notifyBarItemsDidChange;
-(void)_invalidatePhotoSelectionManager;
-(void)_updatePhotoSelectionManagerIfNeeded;
-(void)_invalidateShouldUpdateBarItemsLazily;
-(void)_updateShouldUpdateBarItemsLazilyIfNeeded;
-(void)_invalidateBarItems;
-(void)_updateBarItemsIfNeeded;
-(void)_updateAllBarItems;
-(void)_startUpdatingItemsWithCountIfNeeded;
-(void)_stopUpdatingItemsWithCount;
-(void)_updateItemsWithCountInBackgroundWithDelegate:(id)arg1 photoSelectionManagerSnapshot:(id)arg2 ;
-(void)_handleItemsWithCountUpdateWithTitle:(id)arg1 shouldReloadAllItems:(BOOL)arg2 ;
-(BOOL)isSwipeSelecting;
-(void)_setShouldHideBackButton:(BOOL)arg1 ;
-(PUPhotoSelectionManager *)_photoSelectionManager;
-(BOOL)_shouldUpdateBarItemsLazily;
-(BOOL)_isUpdatingItemsWithCount;
-(void)_setUpdatingItemsWithCount:(BOOL)arg1 ;
-(BOOL)_shouldUpdateItemsWithCount;
-(void)_setShouldUpdateItemsWithCount:(BOOL)arg1 ;
-(BOOL)_hadSelectionOnLastUpdate;
-(void)_setHadSelectionOnLastUpdate:(BOOL)arg1 ;
@end

