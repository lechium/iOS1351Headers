//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TUMetadataCache, TUSearchResults, UIBarButtonItem, UIViewController;
@protocol PHCallsTableViewControllerDelegate, PHFrecentCellDelegate;

@interface PHCallsTableViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource>
{
    TUSearchResults *_searchResults;	// 8 = 0x8
    id <PHFrecentCellDelegate> _cellDelegate;	// 16 = 0x10
    UIViewController<PHCallsTableViewControllerDelegate> *_controllerDelegate;	// 24 = 0x18
    TUMetadataCache *_metadataCache;	// 32 = 0x20
    CDUnknownBlockType _searchCompletionBlock;	// 40 = 0x28
    UIBarButtonItem *_clearButtonItem;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100025d70
@property(retain, nonatomic) UIBarButtonItem *clearButtonItem; // @synthesize clearButtonItem=_clearButtonItem;
@property(copy) CDUnknownBlockType searchCompletionBlock; // @synthesize searchCompletionBlock=_searchCompletionBlock;
@property(retain, nonatomic) TUMetadataCache *metadataCache; // @synthesize metadataCache=_metadataCache;
@property(nonatomic) __weak UIViewController<PHCallsTableViewControllerDelegate> *controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(nonatomic) __weak id <PHFrecentCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain) TUSearchResults *searchResults; // @synthesize searchResults=_searchResults;
- (void)idsStatusChanged:(id)arg1;	// IMP=0x0000000100025b94
- (void)metadataCacheDidFinishUpdating:(id)arg1;	// IMP=0x0000000100025ac0
- (void)recentCallsDidChange:(id)arg1;	// IMP=0x00000001000259ec
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000001000259dc
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000001000259cc
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000001000259c4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100025904
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000258b8
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100025848
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010002571c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010002561c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100025568
- (void)viewDidLoad;	// IMP=0x0000000100025484
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000010002547c
- (id)removeRecentCallsAtIndexPaths:(id)arg1;	// IMP=0x0000000100024bfc
- (id)searchResultAtIndexPath:(id)arg1;	// IMP=0x0000000100024a10
- (void)deleteRecentCalls:(id)arg1;	// IMP=0x00000001000249a0
- (void)refreshView;	// IMP=0x00000001000248bc
- (void)reloadTableDataWithResults:(id)arg1;	// IMP=0x0000000100024888
@property(readonly) CDUnknownBlockType searchCompletion;
- (void)fetchCalls;	// IMP=0x0000000100024558
- (void)dealloc;	// IMP=0x0000000100024470
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010002437c
- (id)init;	// IMP=0x000000010002436c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

