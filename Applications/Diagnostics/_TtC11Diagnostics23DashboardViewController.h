//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC11Diagnostics23BaseTableViewController.h"

#import "DKViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC11Diagnostics23DashboardViewController : _TtC11Diagnostics23BaseTableViewController <DKViewControllerDelegate, UIGestureRecognizerDelegate>
{
    MISSING_TYPE *sectionPadding;	// 8 = 0x8
    MISSING_TYPE *cardCellEstimatedHeight;	// 16 = 0x10
    MISSING_TYPE *largeTitleToTableViewSpacing;	// 24 = 0x18
    MISSING_TYPE *cardManager;	// 32 = 0x20
    MISSING_TYPE *currentLaunchEnvironment;	// 40 = 0x28
    MISSING_TYPE *totalCardCount;	// 48 = 0x30
    MISSING_TYPE *activeCardCount;	// 56 = 0x38
    MISSING_TYPE *leftBarButtonItem;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000551ec
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100055154
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000550cc
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000550a8
- (void)barButtonItemTappedWithSender:(id)arg1;	// IMP=0x0000000100054f20
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100054e88
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100054c3c
- (void)diagnosticManager:(id)arg1 dismissViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000549fc
- (void)diagnosticManager:(id)arg1 presentViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100054914
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000001000545d8
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100054524
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000001000544b8
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000100054444
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100053ac0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100051e80
- (void)viewDidLoad;	// IMP=0x0000000100051e20

@end

