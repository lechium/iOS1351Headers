//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "INKContentControllerObserver-Protocol.h"
#import "MTAAlarmCollectionViewCellDelegate-Protocol.h"
#import "MTAAlarmEditViewControllerDelegate-Protocol.h"
#import "MTAStateManagement-Protocol.h"
#import "MTAlarmDataSourceObserver-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class INKContentController, INKContentView, MTAAlarmCollectionViewCell, MTAAlarmEditViewController, MTAAlarmInfoContentCollectionHeaderView, MTAlarmDataSource, MTAlarmManager, NSMutableArray, NSString, NSUserActivity, _UIContentUnavailableView;

@interface MTAAlarmCollectionViewController : UICollectionViewController <MTAlarmDataSourceObserver, MTAAlarmCollectionViewCellDelegate, UICollectionViewDelegateFlowLayout, UIPopoverPresentationControllerDelegate, INKContentControllerObserver, MTAStateManagement, MTAAlarmEditViewControllerDelegate>
{
    double _cellHeight;	// 8 = 0x8
    INKContentController *_infoContentController;	// 16 = 0x10
    MTAlarmManager *_alarmManager;	// 24 = 0x18
    MTAlarmDataSource *_dataSource;	// 32 = 0x20
    MTAAlarmEditViewController *_addEditAlarmController;	// 40 = 0x28
    MTAAlarmCollectionViewCell *_sizingCell;	// 48 = 0x30
    NSMutableArray *_sections;	// 56 = 0x38
    _UIContentUnavailableView *_noItemsView;	// 64 = 0x40
    NSUserActivity *_userActivity;	// 72 = 0x48
    MTAAlarmInfoContentCollectionHeaderView *_infoContentHeaderTemplateView;	// 80 = 0x50
    INKContentView *_infoContentView;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010006fc7c
@property(retain, nonatomic) INKContentView *infoContentView; // @synthesize infoContentView=_infoContentView;
@property(retain, nonatomic) MTAAlarmInfoContentCollectionHeaderView *infoContentHeaderTemplateView; // @synthesize infoContentHeaderTemplateView=_infoContentHeaderTemplateView;
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(retain, nonatomic) _UIContentUnavailableView *noItemsView; // @synthesize noItemsView=_noItemsView;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) MTAAlarmCollectionViewCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) MTAAlarmEditViewController *addEditAlarmController; // @synthesize addEditAlarmController=_addEditAlarmController;
@property(retain, nonatomic) MTAlarmDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
@property(retain, nonatomic) INKContentController *infoContentController; // @synthesize infoContentController=_infoContentController;
- (void)performInfoContentSectionUpdates:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;	// IMP=0x000000010006f980
- (void)contentController:(id)arg1 didFinishWithContent:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010006f4a4
- (void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010006efa4
- (void)setAlarmEnabled:(_Bool)arg1 forCell:(id)arg2;	// IMP=0x000000010006ec5c
- (void)removeAlarmAtIndexPath:(id)arg1;	// IMP=0x000000010006eb48
- (void)deleteCell:(id)arg1;	// IMP=0x000000010006eab4
- (void)_addOrEditControllerDidDismissCommitChanges:(_Bool)arg1;	// IMP=0x000000010006ea18
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x000000010006ea08
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000010006ea00
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000010006e9f8
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000010006e9e4
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010006e8e0
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010006e8a4
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010006e898
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000010006e860
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000010006e7fc
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010006e704
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000010006e61c
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010006e4e8
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010006e478
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010006e42c
- (_Bool)_isInfoContentViewSection:(long long)arg1;	// IMP=0x000000010006e214
- (id)currentAlarmEditController;	// IMP=0x000000010006e208
- (void)handleContentSizeTransitionFrom:(id)arg1;	// IMP=0x000000010006e184
- (void)_removeAlarm:(id)arg1;	// IMP=0x000000010006dff4
- (void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2;	// IMP=0x000000010006df64
- (void)_updateAlarm:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010006dd98
- (void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2;	// IMP=0x000000010006dcd8
- (void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2;	// IMP=0x000000010006daec
- (void)alarmEditControllerDidCancel:(id)arg1;	// IMP=0x000000010006da7c
@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
- (void)handleContentSizeChange:(id)arg1;	// IMP=0x000000010006d8ac
- (void)_showAddViewForAlarmAtRow:(unsigned long long)arg1;	// IMP=0x000000010006d3c8
- (void)showAddViewForAlarmWithID:(id)arg1;	// IMP=0x000000010006d328
- (void)showAddViewForAlarm:(id)arg1;	// IMP=0x000000010006cff4
- (void)addAlarm:(id)arg1;	// IMP=0x000000010006cfe4
- (void)_handleNumberOfItemsDidChange;	// IMP=0x000000010006cee8
- (void)_layoutNoItemsLabel;	// IMP=0x000000010006cde8
- (void)viewDidLayoutSubviews;	// IMP=0x000000010006cd98
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010006cc0c
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010006cb04
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010006ca48
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010006c9d8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010006c918
- (void)dataSourceDidReload:(id)arg1;	// IMP=0x000000010006c8d8
- (void)saveState;	// IMP=0x000000010006c8d4
- (void)_reloadUI:(CDUnknownBlockType)arg1;	// IMP=0x000000010006c888
- (void)reloadState:(CDUnknownBlockType)arg1;	// IMP=0x000000010006c754
- (void)reloadState;	// IMP=0x000000010006c744
- (void)viewDidLoad;	// IMP=0x000000010006c324
- (id)initWithAlarmManager:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000010006c0c4
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010006c0bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
