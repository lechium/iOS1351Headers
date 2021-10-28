//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CoreTelephonyClientSubscriberDelegate-Protocol.h"
#import "TSSIMUnlockDetailViewControllerDelegate-Protocol.h"
#import "TSSIMUnlockListFooterViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CoreTelephonyClient, NSMutableArray, NSMutableDictionary, NSString, TSSIMUnlockListFooterView, TSSIMUnlockListHeaderView, TSSIMUnlockListTableFooterView, UIBarButtonItem, UITableView;
@protocol TSSIMUnlockListViewControllerDelegate;

@interface TSSIMUnlockListViewController : UIViewController <CoreTelephonyClientSubscriberDelegate, UITableViewDataSource, UITableViewDelegate, TSSIMUnlockDetailViewControllerDelegate, TSSIMUnlockListFooterViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _suppressCancellation;	// 8 = 0x8
    CoreTelephonyClient *_telephonyClient;	// 16 = 0x10
    UIBarButtonItem *_cancelButtonItem;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    TSSIMUnlockListHeaderView *_headerView;	// 40 = 0x28
    TSSIMUnlockListFooterView *_footerView;	// 48 = 0x30
    TSSIMUnlockListTableFooterView *_tableFooterView;	// 56 = 0x38
    NSMutableArray *_subscriptionContexts;	// 64 = 0x40
    NSMutableDictionary *_subscriptionActions;	// 72 = 0x48
    id <TSSIMUnlockListViewControllerDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010000bac0
@property(nonatomic) __weak id <TSSIMUnlockListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSMutableDictionary *subscriptionActions; // @synthesize subscriptionActions=_subscriptionActions;
@property(readonly, copy, nonatomic) NSMutableArray *subscriptionContexts; // @synthesize subscriptionContexts=_subscriptionContexts;
- (id)_containerView;	// IMP=0x000000010000ba60
- (id)_nameForSIMWithSubscriptionContext:(id)arg1;	// IMP=0x000000010000b86c
- (_Bool)_anESIMExistsInSubscriptionContexts;	// IMP=0x000000010000b74c
- (void)_cancelButtonItemPressed:(id)arg1;	// IMP=0x000000010000b708
- (unsigned long long)_numberOfLockedSubscriptionContexts;	// IMP=0x000000010000b5bc
- (void)_configureFooterView;	// IMP=0x000000010000b52c
- (void)_configureTableFooterView;	// IMP=0x000000010000b46c
- (void)_configureHeaderView;	// IMP=0x000000010000b328
- (void)_configureNavigationItem;	// IMP=0x000000010000b230
- (void)_configureAncillaryViews;	// IMP=0x000000010000b1dc
- (void)removeSubscriptionContextAtIndex:(unsigned long long)arg1;	// IMP=0x000000010000b00c
- (void)updateSubscriptionContext:(id)arg1 withSubscriptionAction:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000010000ae20
- (void)addSubscriptionContext:(id)arg1 withSubscriptionAction:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000010000ac34
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000010000ac2c
- (void)unlockListFooterViewContinueButtonWasPressed:(id)arg1;	// IMP=0x000000010000abe8
- (void)unlockDetailViewController:(id)arg1 didCompleteWithResult:(long long)arg2;	// IMP=0x000000010000ab30
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010000a9c8
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000a9bc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010000a9a4
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000010000a8d0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000a51c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000a488
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000a438
- (void)viewDidLoad;	// IMP=0x000000010000a0d0
- (void)loadView;	// IMP=0x0000000100009fec
- (id)initWithSubscriptionContexts:(id)arg1 subscriptionActions:(id)arg2 suppressCancellation:(_Bool)arg3 delegate:(id)arg4;	// IMP=0x0000000100009e68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
