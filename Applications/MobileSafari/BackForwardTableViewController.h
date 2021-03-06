//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFPopoverSizingTableViewController.h>

#import "UITableViewDragDelegate_Private-Protocol.h"

@class NSArray, NSString, WKBackForwardListItem;
@protocol BackForwardTableViewControllerDelegate;

@interface BackForwardTableViewController : _SFPopoverSizingTableViewController <UITableViewDragDelegate_Private>
{
    _Bool _reversesListOrder;	// 8 = 0x8
    id <BackForwardTableViewControllerDelegate> _delegate;	// 16 = 0x10
    NSArray *_backForwardList;	// 24 = 0x18
    WKBackForwardListItem *_parentItem;	// 32 = 0x20
}

+ (id)tableViewCellForSizeEstimation;	// IMP=0x0000000100021c74
- (void).cxx_destruct;	// IMP=0x0000000100022860
@property(nonatomic) _Bool reversesListOrder; // @synthesize reversesListOrder=_reversesListOrder;
@property(retain, nonatomic) WKBackForwardListItem *parentItem; // @synthesize parentItem=_parentItem;
@property(copy, nonatomic) NSArray *backForwardList; // @synthesize backForwardList=_backForwardList;
@property(nonatomic) __weak id <BackForwardTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_dragItemForURLAtIndexPath:(id)arg1;	// IMP=0x0000000100022628
- (long long)_tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100022620
- (id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x0000000100022580
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000224e0
- (void)loadView;	// IMP=0x00000001000223e8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000222f8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100021f98
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x0000000100021ec4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100021eac
- (void)done;	// IMP=0x0000000100021e28
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100021d28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

