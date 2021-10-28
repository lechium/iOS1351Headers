//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "STKBaseAlertViewController.h"

#import "UINavigationBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, STKListItemsSessionAction, UITableView;

@interface STKListDisplayAlertViewController : STKBaseAlertViewController <UINavigationBarDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_table;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100005234
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;	// IMP=0x00000001000051e8
- (id)newTopBar;	// IMP=0x0000000100004f88
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100004f78
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100004edc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100004bb8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100004b6c
- (void)rightNavigationButtonPressed;	// IMP=0x0000000100004b14
- (void)leftNavigationButtonPressed;	// IMP=0x0000000100004abc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100004848
- (void)viewDidLoad;	// IMP=0x0000000100004408
- (void)_selectListItem:(unsigned long long)arg1;	// IMP=0x00000001000043c0
- (id)_simToolkitListItems;	// IMP=0x0000000100004344
- (_Bool)validateAction:(id)arg1;	// IMP=0x00000001000042f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) STKListItemsSessionAction *sessionAction; // @dynamic sessionAction;
@property(readonly) Class superclass;

@end
