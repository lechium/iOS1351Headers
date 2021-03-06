//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PHCarPlayGenericViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AVExternalDevice, NSString, PHCarPlayNoContentBannerView, UITableView, _UIFilteredDataSource;

@interface PHCarPlayGenericTableViewController : PHCarPlayGenericViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _tableViewReloadIsRequiredOnViewWillAppear;	// 8 = 0x8
    UITableView *_mainTableView;	// 16 = 0x10
    _UIFilteredDataSource *_mainTableViewDataSource;	// 24 = 0x18
    PHCarPlayNoContentBannerView *_noContentBannerView;	// 32 = 0x20
    AVExternalDevice *_carPlayExternalDevice;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000afb04
@property(retain) AVExternalDevice *carPlayExternalDevice; // @synthesize carPlayExternalDevice=_carPlayExternalDevice;
@property(retain) PHCarPlayNoContentBannerView *noContentBannerView; // @synthesize noContentBannerView=_noContentBannerView;
@property _Bool tableViewReloadIsRequiredOnViewWillAppear; // @synthesize tableViewReloadIsRequiredOnViewWillAppear=_tableViewReloadIsRequiredOnViewWillAppear;
@property(retain) _UIFilteredDataSource *mainTableViewDataSource; // @synthesize mainTableViewDataSource=_mainTableViewDataSource;
@property(retain) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
- (id)preferredFocusEnvironments;	// IMP=0x00000001000af978
- (_Bool)_viewControllerWasSelected;	// IMP=0x00000001000af8d0
- (void)limitedUIChanged:(id)arg1;	// IMP=0x00000001000af7f0
- (long long)filterType;	// IMP=0x00000001000af79c
- (void)carPlayInCallViewControllerAppearedNotification:(id)arg1;	// IMP=0x00000001000af700
- (void)updateBadgeString;	// IMP=0x00000001000af5cc
@property(readonly) NSString *badgeString;
- (id)subtitleForNoContentBanner;	// IMP=0x00000001000af5bc
- (id)titleForNoContentBanner;	// IMP=0x00000001000af5b0
- (void)setNoContentBannerShown:(_Bool)arg1;	// IMP=0x00000001000af02c
- (void)hardwareControlEventNotification:(id)arg1;	// IMP=0x00000001000aedfc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000aecd0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000aecc8
- (void)programmaticallySelectRowAtIndexPath:(id)arg1;	// IMP=0x00000001000aec10
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000aeaf4
- (double)defaultRowHeight;	// IMP=0x00000001000aeae8
- (void)loadView;	// IMP=0x00000001000ae9c8
- (void)applicationBadgeChangedNotification:(id)arg1;	// IMP=0x00000001000ae910
- (void)dealloc;	// IMP=0x00000001000ae84c
- (id)init;	// IMP=0x00000001000ae6b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

