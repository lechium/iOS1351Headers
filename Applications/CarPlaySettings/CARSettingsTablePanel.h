//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CARSettingsPanel.h"

@class CARSettingsPanelTableSource, NSArray, NSString, UITableView;

@interface CARSettingsTablePanel : CARSettingsPanel
{
    _Bool _showCellImages;	// 8 = 0x8
    NSArray *_cellSpecifiers;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    CARSettingsPanelTableSource *_tableSource;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100006984
@property(retain, nonatomic) CARSettingsPanelTableSource *tableSource; // @synthesize tableSource=_tableSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) _Bool showCellImages; // @synthesize showCellImages=_showCellImages;
@property(readonly, nonatomic) NSArray *cellSpecifiers; // @synthesize cellSpecifiers=_cellSpecifiers;
@property(copy, nonatomic) NSString *sectionFooter;
- (void)reloadSpecifiers;	// IMP=0x00000001000066e0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010000657c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000064e0
- (void)viewDidLoad;	// IMP=0x0000000100005e4c

@end

