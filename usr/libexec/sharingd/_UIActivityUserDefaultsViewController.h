//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDelegate-Protocol.h"
#import "_UIActivityUserDefaultsDataSourceProxy-Protocol.h"

@class NSArray, NSDictionary, NSDiffableDataSourceSnapshot, NSMutableDictionary, NSString, UIImage, UITableView, UIVisualEffectView, _UIActivityUserDefaults, _UIActivityUserDefaultsDataSource;
@protocol _UIActivityUserDefaultsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIActivityUserDefaultsViewController : UIViewController <_UIActivityUserDefaultsDataSourceProxy, UITableViewDelegate>
{
    id <_UIActivityUserDefaultsViewControllerDelegate> _userDefaultsDelegate;	// 8 = 0x8
    NSArray *_activities;	// 16 = 0x10
    NSArray *_favoritesProxies;	// 24 = 0x18
    NSMutableDictionary *_favoritesByUUID;	// 32 = 0x20
    NSArray *_suggestionProxies;	// 40 = 0x28
    NSMutableDictionary *_suggestionsByUUID;	// 48 = 0x30
    NSDictionary *_activitiesByUUID;	// 56 = 0x38
    NSArray *_applicationActivities;	// 64 = 0x40
    NSArray *_orderedUUIDs;	// 72 = 0x48
    long long _activityCategory;	// 80 = 0x50
    _UIActivityUserDefaults *_userDefaults;	// 88 = 0x58
    UIImage *_placeholderImage;	// 96 = 0x60
    _UIActivityUserDefaultsDataSource *_diffableDataSource;	// 104 = 0x68
    NSDiffableDataSourceSnapshot *_currentSnapshot;	// 112 = 0x70
    UITableView *_tableView;	// 120 = 0x78
    UIVisualEffectView *_backgroundView;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000001001e1cdc
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot; // @synthesize currentSnapshot=_currentSnapshot;
@property(retain, nonatomic) _UIActivityUserDefaultsDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) _UIActivityUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic) long long activityCategory; // @synthesize activityCategory=_activityCategory;
@property(retain, nonatomic) NSArray *orderedUUIDs; // @synthesize orderedUUIDs=_orderedUUIDs;
@property(retain, nonatomic) NSArray *applicationActivities; // @synthesize applicationActivities=_applicationActivities;
@property(retain, nonatomic) NSDictionary *activitiesByUUID; // @synthesize activitiesByUUID=_activitiesByUUID;
@property(retain, nonatomic) NSMutableDictionary *suggestionsByUUID; // @synthesize suggestionsByUUID=_suggestionsByUUID;
@property(copy, nonatomic) NSArray *suggestionProxies; // @synthesize suggestionProxies=_suggestionProxies;
@property(retain, nonatomic) NSMutableDictionary *favoritesByUUID; // @synthesize favoritesByUUID=_favoritesByUUID;
@property(copy, nonatomic) NSArray *favoritesProxies; // @synthesize favoritesProxies=_favoritesProxies;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(nonatomic) __weak id <_UIActivityUserDefaultsViewControllerDelegate> userDefaultsDelegate; // @synthesize userDefaultsDelegate=_userDefaultsDelegate;
- (long long)preferredActivityCategory;	// IMP=0x00000001001e1a34
- (void)toggleActivityHiddenForRowAtIndexPath:(id)arg1;	// IMP=0x00000001001e1978
- (void)toggleActivityHiddenForControl:(id)arg1;	// IMP=0x00000001001e1794
- (id)activityForRowAtIndexPath:(id)arg1;	// IMP=0x00000001001e16a0
- (id)cellForItemIdentifier:(id)arg1;	// IMP=0x00000001001e15d4
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001001e1434
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x00000001001e13d0
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000001001e12dc
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000001001e11e8
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x00000001001e1050
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00000001001e0f34
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000001001e0d78
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000001001e0bec
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001001e0378
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000001001e01bc
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x00000001001e0098
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000001001dfa70
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001001df998
- (void)dismissUserDefaults;	// IMP=0x00000001001df984
- (void)doneEditingUserDefaults;	// IMP=0x00000001001df85c
- (void)editUserDefaults;	// IMP=0x00000001001df76c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001001df6fc
- (void)configureSwitchForCell:(id)arg1 activityProxy:(id)arg2;	// IMP=0x00000001001df548
- (void)updateUserDefaultsAnimated:(_Bool)arg1;	// IMP=0x00000001001debec
- (void)viewDidLoad;	// IMP=0x00000001001dd1f0
- (id)initWithFavoritesProxies:(id)arg1 suggestionProxies:(id)arg2 activitiesByUUID:(id)arg3 applicationActivities:(id)arg4 orderedUUIDs:(id)arg5 activityCategory:(long long)arg6;	// IMP=0x00000001001dcdfc
- (id)initWithActivities:(id)arg1 userDefaults:(id)arg2;	// IMP=0x00000001001dccf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

