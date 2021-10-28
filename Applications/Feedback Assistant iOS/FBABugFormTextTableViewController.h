//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import "FBAExpandingTextViewTableCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class FBAAnswer, FBABugFormTextLabel, FBAQuestion, FBATextViewTableCell, NSLayoutConstraint, NSString, UIBarButtonItem, UITableView;
@protocol FBABugFormEditorDelegate;

@interface FBABugFormTextTableViewController : UIViewController <UITextViewDelegate, FBAExpandingTextViewTableCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _continueEditing;	// 8 = 0x8
    id <FBABugFormEditorDelegate> _delegate;	// 16 = 0x10
    FBAQuestion *_question;	// 24 = 0x18
    FBAAnswer *_answer;	// 32 = 0x20
    FBATextViewTableCell *_textViewCell;	// 40 = 0x28
    UIBarButtonItem *_doneButton;	// 48 = 0x30
    NSString *_footerText;	// 56 = 0x38
    FBABugFormTextLabel *_footerLabel;	// 64 = 0x40
    UITableView *_tableView;	// 72 = 0x48
    NSLayoutConstraint *_tableToViewBottomConstraint;	// 80 = 0x50
    NSString *_currText;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010005ab24
@property(retain, nonatomic) NSString *currText; // @synthesize currText=_currText;
@property(nonatomic) _Bool continueEditing; // @synthesize continueEditing=_continueEditing;
@property(nonatomic) __weak NSLayoutConstraint *tableToViewBottomConstraint; // @synthesize tableToViewBottomConstraint=_tableToViewBottomConstraint;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) FBABugFormTextLabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) FBATextViewTableCell *textViewCell; // @synthesize textViewCell=_textViewCell;
@property(retain, nonatomic) FBAAnswer *answer; // @synthesize answer=_answer;
@property(retain, nonatomic) FBAQuestion *question; // @synthesize question=_question;
@property(nonatomic) __weak id <FBABugFormEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateFooterWithTextForCharCount:(unsigned long long)arg1;	// IMP=0x000000010005a704
- (void)sanitize;	// IMP=0x000000010005a558
- (void)didPressDone:(id)arg1;	// IMP=0x000000010005a45c
- (void)commitEditing;	// IMP=0x000000010005a3dc
- (_Bool)expandingTextViewShouldContinueEditingWithRange:(struct _NSRange)arg1;	// IMP=0x000000010005a37c
- (_Bool)canPerformPaste;	// IMP=0x000000010005a028
- (void)expandingTextViewDidChange:(id)arg1;	// IMP=0x0000000100059f04
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100059eb0
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000100059e00
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000100059df4
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000100059de8
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100059d94
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100059a04
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000599fc
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000599f4
- (void)keyboardWillBeHidden:(id)arg1;	// IMP=0x0000000100059818
- (void)keyboardWasShown:(id)arg1;	// IMP=0x00000001000597a4
- (void)keybardWillShow:(id)arg1;	// IMP=0x0000000100059534
- (void)registerForKeyboardNotifications;	// IMP=0x000000010005942c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010005939c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100059270
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100059220
- (void)viewDidLoad;	// IMP=0x0000000100058e7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
