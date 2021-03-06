//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HSSetupServiceHeaderTableViewController.h"

#import "HUAccessorySceneListContentViewControllerDelegate-Protocol.h"

@class HSSetupSceneSuggestionsItemManager, HSSetupServiceContext, HUAccessorySceneListContentViewController, NSString;

@interface HSSetupSceneSuggestionsViewController : HSSetupServiceHeaderTableViewController <HUAccessorySceneListContentViewControllerDelegate>
{
    HSSetupServiceContext *_setupServiceContext;	// 8 = 0x8
    HUAccessorySceneListContentViewController *_sceneListContentViewController;	// 16 = 0x10
}

+ (id)shouldShowSuggestionsForServiceLikeItem:(id)arg1 home:(id)arg2;	// IMP=0x000000010002aac0
- (void).cxx_destruct;	// IMP=0x000000010002b358
@property(retain, nonatomic) HUAccessorySceneListContentViewController *sceneListContentViewController; // @synthesize sceneListContentViewController=_sceneListContentViewController;
@property(readonly, nonatomic) HSSetupServiceContext *setupServiceContext; // @synthesize setupServiceContext=_setupServiceContext;
- (id)childViewControllersToPreload;	// IMP=0x000000010002b2bc
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;	// IMP=0x000000010002b2b4
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;	// IMP=0x000000010002b0b8
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000010002b050
- (id)cancelConfiguration;	// IMP=0x000000010002b030
- (id)finishConfiguration;	// IMP=0x000000010002af8c
- (_Bool)canFinishConfiguration;	// IMP=0x000000010002af84
- (void)viewDidLoad;	// IMP=0x000000010002aea0
- (id)initWithItemManager:(id)arg1 accessory:(id)arg2 configurationContentDelegate:(id)arg3;	// IMP=0x000000010002ad90
- (id)initWithServiceLikeItem:(id)arg1 setupServiceContext:(id)arg2;	// IMP=0x000000010002abd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HSSetupSceneSuggestionsItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

