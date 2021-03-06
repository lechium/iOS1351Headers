//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "PHTableViewDataSourcePrefetching-Protocol.h"
#import "PHTableViewDelegate-Protocol.h"

@class NSCache, NSOperationQueue, NSString, UIView;
@protocol PHContentUnavailable;

@interface PHTableViewController : UITableViewController <PHTableViewDataSourcePrefetching, PHTableViewDelegate>
{
    _Bool _contentUnavailable;	// 8 = 0x8
    _Bool _editingRow;	// 9 = 0x9
    _Bool _needsReloadData;	// 10 = 0xa
    _Bool _reloadingData;	// 11 = 0xb
    NSOperationQueue *_dataSourcePrefetchingOperationQueue;	// 16 = 0x10
    UIView<PHContentUnavailable> *_contentUnavailableView;	// 24 = 0x18
    NSString *_contentUnavailableViewTitle;	// 32 = 0x20
    NSCache *_rowHeightCache;	// 40 = 0x28
    long long _whitePointAdaptivityStyle;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100031fec
@property(nonatomic) long long whitePointAdaptivityStyle; // @synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle;
@property(retain, nonatomic) NSCache *rowHeightCache; // @synthesize rowHeightCache=_rowHeightCache;
@property(nonatomic, getter=isReloadingData) _Bool reloadingData; // @synthesize reloadingData=_reloadingData;
@property(nonatomic) _Bool needsReloadData; // @synthesize needsReloadData=_needsReloadData;
@property(nonatomic, getter=isEditingRow) _Bool editingRow; // @synthesize editingRow=_editingRow;
@property(copy, nonatomic) NSString *contentUnavailableViewTitle; // @synthesize contentUnavailableViewTitle=_contentUnavailableViewTitle;
@property(retain, nonatomic) UIView<PHContentUnavailable> *contentUnavailableView; // @synthesize contentUnavailableView=_contentUnavailableView;
@property(nonatomic) _Bool contentUnavailable; // @synthesize contentUnavailable=_contentUnavailable;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100031e14
- (void)handleUIContentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x0000000100031d0c
- (void)handleUIApplicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x0000000100031d08
- (void)handleUIApplicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x0000000100031d04
- (void)handleUIApplicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x0000000100031d00
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100031c48
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100031bdc
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100031ae0
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000100031ad0
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000100031ac0
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100031a48
- (void)tableView:(id)arg1 performReloadRowsAtIndexPaths:(id)arg2 withRowAnimation:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100031864
- (_Bool)tableViewCanPerformReloadData:(id)arg1;	// IMP=0x0000000100031774
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;	// IMP=0x0000000100031770
- (void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2;	// IMP=0x0000000100031498
- (_Bool)shouldNavigationControllerPresentLargeTitles;	// IMP=0x0000000100031468
- (void)makeUIForDefaultPNG;	// IMP=0x0000000100031354
- (long long)preferredWhitePointAdaptivityStyle;	// IMP=0x0000000100031190
- (void)reloadDataIfNeeded;	// IMP=0x00000001000310cc
- (void)setContentUnavailable:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100030de4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100030d20
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100030c14
- (void)viewDidLoad;	// IMP=0x0000000100030af4
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100030a28
@property(readonly, nonatomic) NSOperationQueue *dataSourcePrefetchingOperationQueue; // @synthesize dataSourcePrefetchingOperationQueue=_dataSourcePrefetchingOperationQueue;
- (void)dealloc;	// IMP=0x0000000100030924
- (void)commonInit;	// IMP=0x0000000100030694
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010003063c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000305b8
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100030560

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

