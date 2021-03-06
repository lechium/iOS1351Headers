/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/PUViewControllerSpecChangeObserver.h>
#import <libobjc.A.dylib/MPMediaPickerControllerDelegate.h>

@protocol PUSlideshowMusicDelegate;
@class NSArray, UITableView, PUSlideshowSettingsViewControllerSpec, PUSlideshowMediaItem, NSString;

@interface PUSlideshowMusicViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PUViewControllerSpecChangeObserver, MPMediaPickerControllerDelegate> {

	NSArray* _mediaItems;
	UITableView* _tableView;
	PUSlideshowSettingsViewControllerSpec* _spec;
	BOOL _shouldHideTableViewWhenViewWillDisappear;
	BOOL __needsUpdateSpec;
	BOOL __needsUpdateBackgroundView;
	BOOL __needsUpdateTableView;
	PUSlideshowMediaItem* _currentMediaItem;
	id<PUSlideshowMusicDelegate> _delegate;

}

@property (assign,setter=_setNeedsUpdateSpec:,nonatomic) BOOL _needsUpdateSpec;                                  //@synthesize _needsUpdateSpec=__needsUpdateSpec - In the implementation block
@property (assign,setter=_setNeedsUpdateBackgroundView:,nonatomic) BOOL _needsUpdateBackgroundView;              //@synthesize _needsUpdateBackgroundView=__needsUpdateBackgroundView - In the implementation block
@property (assign,setter=_setNeedsUpdateTableView:,nonatomic) BOOL _needsUpdateTableView;                        //@synthesize _needsUpdateTableView=__needsUpdateTableView - In the implementation block
@property (nonatomic,retain) PUSlideshowMediaItem * currentMediaItem;                                            //@synthesize currentMediaItem=_currentMediaItem - In the implementation block
@property (assign,nonatomic,__weak) id<PUSlideshowMusicDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<PUSlideshowMusicDelegate>)delegate;
-(void)setDelegate:(id<PUSlideshowMusicDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)_needsUpdate;
-(void)_didFinish;
-(void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2 ;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)_setNeedsUpdate;
-(PUSlideshowMediaItem *)currentMediaItem;
-(void)_updateIfNeeded;
-(void)_updateSpecIfNeeded;
-(BOOL)pu_wantsNavigationBarVisible;
-(void)viewControllerSpec:(id)arg1 didChange:(id)arg2 ;
-(void)_invalidateSpec;
-(BOOL)_needsUpdateSpec;
-(void)_setNeedsUpdateSpec:(BOOL)arg1 ;
-(void)setCurrentMediaItem:(PUSlideshowMediaItem *)arg1 ;
-(void)_invalidateBackgroundView;
-(void)_invalidateTableView;
-(void)_updateBackgroundViewIfNeeded;
-(void)_updateTableViewIfNeeded;
-(void)_didPickMediaItem:(id)arg1 ;
-(BOOL)_needsUpdateBackgroundView;
-(void)_setNeedsUpdateBackgroundView:(BOOL)arg1 ;
-(BOOL)_needsUpdateTableView;
-(void)_setNeedsUpdateTableView:(BOOL)arg1 ;
@end

