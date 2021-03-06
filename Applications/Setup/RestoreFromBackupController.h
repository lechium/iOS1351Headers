//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BuddyTableViewController.h"

#import "BFFFlowItem-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MBManager, NSArray, NSMutableArray, NSObject, NSString, NSTimer, RestorableBackupItem;
@protocol BFFFlowItemDelegate, OS_dispatch_queue;

@interface RestoreFromBackupController : BuddyTableViewController <BFFFlowItem, UITableViewDataSource, UITableViewDelegate>
{
    MBManager *_backupManager;	// 8 = 0x8
    NSTimer *_refreshTimer;	// 16 = 0x10
    NSArray *_backupList;	// 24 = 0x18
    _Bool _initialFetchAttemptDone;	// 32 = 0x20
    NSArray *_similarRestorables;	// 40 = 0x28
    NSMutableArray *_visibleSimilarRestorables;	// 48 = 0x30
    NSMutableArray *_otherRestorables;	// 56 = 0x38
    NSMutableArray *_visibleOtherRestorables;	// 64 = 0x40
    int _listState;	// 72 = 0x48
    _Bool _showAllFooterPresent;	// 76 = 0x4c
    NSObject<OS_dispatch_queue> *_update_backup_list_queue;	// 80 = 0x50
    _Bool _appleAccountRemoved;	// 88 = 0x58
    int _compatibleRestoresState;	// 92 = 0x5c
    _Bool _scannedForUpdate;	// 96 = 0x60
    _Bool _scanningForUpdate;	// 97 = 0x61
    id <BFFFlowItemDelegate> _delegate;	// 104 = 0x68
    RestorableBackupItem *_selectedRestorable;	// 112 = 0x70
    NSString *_availableUpdateVersion;	// 120 = 0x78
}

+ (id)cloudConfigSkipKey;	// IMP=0x0000000100039d18
- (void).cxx_destruct;	// IMP=0x000000010003f6d0
@property(copy, nonatomic) NSString *availableUpdateVersion; // @synthesize availableUpdateVersion=_availableUpdateVersion;
@property(nonatomic) _Bool scanningForUpdate; // @synthesize scanningForUpdate=_scanningForUpdate;
@property(retain, nonatomic) RestorableBackupItem *selectedRestorable; // @synthesize selectedRestorable=_selectedRestorable;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_largerThanStandardAX;	// IMP=0x000000010003f5b0
- (void)handleDebugGesture;	// IMP=0x000000010003f2ac
- (void)showAllBackups;	// IMP=0x000000010003f29c
- (double)heightForHeaderInTableView:(id)arg1;	// IMP=0x000000010003f100
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010003eddc
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010003eca4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010003e33c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010003e2e0
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x000000010003e228
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x000000010003e06c
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000010003dd7c
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;	// IMP=0x000000010003dd50
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010003da10
- (long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2;	// IMP=0x000000010003d9e4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010003d8e8
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010003d838
- (id)restorableItemAtIndexPath:(id)arg1;	// IMP=0x000000010003d760
- (void)showRestoreWarningsIfNeededForRestorable:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003cef4
- (void)setupWithAlternateChoice:(id)arg1;	// IMP=0x000000010003cb50
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010003cab0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010003c840
- (void)setRefreshTimerToDuration:(double)arg1;	// IMP=0x000000010003c760
- (void)scanForUpdateIfNecessaryForBackupList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003c2cc
- (void)cancelRestoreAndRemovePrimaryAppleAccount;	// IMP=0x000000010003c1f0
- (void)refreshBackupListFromTimer:(id)arg1;	// IMP=0x000000010003c184
- (void)updateBackupListCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010003bc98
- (id)filteredRestorableItemsFromBackupList:(id)arg1;	// IMP=0x000000010003ba30
- (void)setBackupList:(id)arg1 forceReload:(_Bool)arg2 withError:(id)arg3;	// IMP=0x000000010003b958
- (void)updateListStateWithReload:(_Bool)arg1;	// IMP=0x000000010003b844
- (void)setListState:(int)arg1;	// IMP=0x000000010003b210
- (void)updateVisibleSnapshots;	// IMP=0x000000010003aa80
- (void)_updateTable:(id)arg1 toMatchArray:(id)arg2 withVisibleArray:(id)arg3 maxVisible:(unsigned long long)arg4 fromOldSection:(long long)arg5 toNewSection:(long long)arg6;	// IMP=0x000000010003a3a4
- (id)mostSimilarRestorablesInsertRemainingIntoArray:(id)arg1 getOtherUniqueDevicesCount:(unsigned long long *)arg2;	// IMP=0x000000010003a054
- (void)significantTimeChange;	// IMP=0x0000000100039f80
- (id)titleText;	// IMP=0x0000000100039f0c
- (void)dealloc;	// IMP=0x0000000100039e7c
- (id)init;	// IMP=0x0000000100039d20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

