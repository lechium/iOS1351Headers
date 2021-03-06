//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewController.h>

#import "FBAExpandingTextViewTableCellDelegate-Protocol.h"
#import "UIDocumentInteractionControllerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "_TtP18Feedback_Assistant28FBAAttachmentManagerDelegate_-Protocol.h"

@class FBAContentItem, FBAFeedbackFollowup, FBAGroupedDevice, FBATextViewTableCell, NSArray, NSDateFormatter, NSString, UIBarButtonItem, UIDocumentInteractionController, UILabel, UIView, _TtC18Feedback_Assistant20FBAAttachmentManager, iFBAFeedbackViewController;

@interface iFBAFollowupResponseViewController : UITableViewController <UINavigationControllerDelegate, FBAExpandingTextViewTableCellDelegate, _TtP18Feedback_Assistant28FBAAttachmentManagerDelegate_, UIImagePickerControllerDelegate, UIDocumentInteractionControllerDelegate>
{
    long long *_visibleSections;	// 8 = 0x8
    int _visibleSectionCount;	// 16 = 0x10
    _Bool _isUnsolicited;	// 20 = 0x14
    _Bool _commentOptional;	// 21 = 0x15
    _Bool _showsDevices;	// 22 = 0x16
    _Bool _didOptOut;	// 23 = 0x17
    _Bool _isSubmitting;	// 24 = 0x18
    _Bool _isPresentingView;	// 25 = 0x19
    _Bool _isPresentingDevicePicker;	// 26 = 0x1a
    _Bool _isStartingSession;	// 27 = 0x1b
    _Bool _showsDeviceSelection;	// 28 = 0x1c
    FBAFeedbackFollowup *_followup;	// 32 = 0x20
    FBAContentItem *_contentItem;	// 40 = 0x28
    iFBAFeedbackViewController *_parent;	// 48 = 0x30
    NSString *_commentString;	// 56 = 0x38
    _TtC18Feedback_Assistant20FBAAttachmentManager *_attachmentManager;	// 64 = 0x40
    UIDocumentInteractionController *_docController;	// 72 = 0x48
    long long _validationChoice;	// 80 = 0x50
    NSArray *_validationChoiceStrings;	// 88 = 0x58
    NSArray *_shortValidationChoiceStrings;	// 96 = 0x60
    UIView *_headerView;	// 104 = 0x68
    UIView *_headerBorderView;	// 112 = 0x70
    UILabel *_dateLabel;	// 120 = 0x78
    UILabel *_descriptionLabel;	// 128 = 0x80
    UIBarButtonItem *_doneButton;	// 136 = 0x88
    UIBarButtonItem *_submitButton;	// 144 = 0x90
    FBATextViewTableCell *_expandingTextCell;	// 152 = 0x98
    FBAGroupedDevice *_targetDevice;	// 160 = 0xa0
    NSArray *_deviceChoices;	// 168 = 0xa8
    struct UIEdgeInsets _stashedEdgeInsets;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000100084170
@property(nonatomic) _Bool showsDeviceSelection; // @synthesize showsDeviceSelection=_showsDeviceSelection;
@property(retain, nonatomic) NSArray *deviceChoices; // @synthesize deviceChoices=_deviceChoices;
@property(retain) FBAGroupedDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain, nonatomic) FBATextViewTableCell *expandingTextCell; // @synthesize expandingTextCell=_expandingTextCell;
@property _Bool isStartingSession; // @synthesize isStartingSession=_isStartingSession;
@property _Bool isPresentingDevicePicker; // @synthesize isPresentingDevicePicker=_isPresentingDevicePicker;
@property _Bool isPresentingView; // @synthesize isPresentingView=_isPresentingView;
@property(nonatomic) _Bool isSubmitting; // @synthesize isSubmitting=_isSubmitting;
@property struct UIEdgeInsets stashedEdgeInsets; // @synthesize stashedEdgeInsets=_stashedEdgeInsets;
@property(retain) UIBarButtonItem *submitButton; // @synthesize submitButton=_submitButton;
@property(retain) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property __weak UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property __weak UIView *headerBorderView; // @synthesize headerBorderView=_headerBorderView;
@property __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) NSArray *shortValidationChoiceStrings; // @synthesize shortValidationChoiceStrings=_shortValidationChoiceStrings;
@property(retain) NSArray *validationChoiceStrings; // @synthesize validationChoiceStrings=_validationChoiceStrings;
@property long long validationChoice; // @synthesize validationChoice=_validationChoice;
@property(retain, nonatomic) UIDocumentInteractionController *docController; // @synthesize docController=_docController;
@property _Bool didOptOut; // @synthesize didOptOut=_didOptOut;
@property(retain, nonatomic) _TtC18Feedback_Assistant20FBAAttachmentManager *attachmentManager; // @synthesize attachmentManager=_attachmentManager;
@property _Bool showsDevices; // @synthesize showsDevices=_showsDevices;
@property _Bool commentOptional; // @synthesize commentOptional=_commentOptional;
@property(retain, nonatomic) NSString *commentString; // @synthesize commentString=_commentString;
@property __weak iFBAFeedbackViewController *parent; // @synthesize parent=_parent;
@property(nonatomic) _Bool isUnsolicited; // @synthesize isUnsolicited=_isUnsolicited;
@property(retain, nonatomic) FBAContentItem *contentItem; // @synthesize contentItem=_contentItem;
@property(retain, nonatomic) FBAFeedbackFollowup *followup; // @synthesize followup=_followup;
- (id)documentInteractionControllerViewForPreview:(id)arg1;	// IMP=0x0000000100083c50
- (struct CGRect)documentInteractionControllerRectForPreview:(id)arg1;	// IMP=0x0000000100083b44
- (void)documentInteractionControllerDidEndPreview:(id)arg1;	// IMP=0x0000000100083a98
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;	// IMP=0x0000000100083a1c
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x0000000100083a04
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x0000000100083754
- (void)performSubmission;	// IMP=0x0000000100082c70
- (void)peformUnsolicitedFFUSubmission;	// IMP=0x00000001000827ac
- (_Bool)expandingTextViewShouldContinueEditingWithRange:(struct _NSRange)arg1;	// IMP=0x00000001000827a4
- (_Bool)canPerformPaste;	// IMP=0x000000010008252c
- (void)expandingTextViewDidChange:(id)arg1;	// IMP=0x00000001000824f8
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100081e88
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000812a4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100080a74
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010008098c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000010008096c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100080844
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100080804
- (long long)sectionTypeForSection:(long long)arg1;	// IMP=0x00000001000807d0
- (_Bool)collectsFiles;	// IMP=0x0000000100080780
- (void)pickTargetDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000804b0
- (void)didSelectDevice:(id)arg1;	// IMP=0x0000000100080304
- (void)startSessionsForDevice:(id)arg1;	// IMP=0x000000010008004c
- (long long)getSubmissionReadiness;	// IMP=0x000000010007ff00
- (void)didEditSomething;	// IMP=0x000000010007fd9c
- (void)makeTextFieldFirstResponderIfNeeded;	// IMP=0x000000010007fd00
- (void)didPressSubmit:(id)arg1;	// IMP=0x000000010007f670
- (void)_showSpinnerWithStatus:(id)arg1 userInteractionEnabled:(_Bool)arg2;	// IMP=0x000000010007f4ac
- (void)_hideSpinner;	// IMP=0x000000010007f320
- (void)didPressDone:(id)arg1;	// IMP=0x000000010007f2dc
- (void)keyboardWasHidden:(id)arg1;	// IMP=0x000000010007f1f4
- (void)keyboardWasShown:(id)arg1;	// IMP=0x000000010007f10c
- (void)registerForKeyboardNotifications;	// IMP=0x000000010007f048
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010007eff8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010007ef90
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010007ef40
- (void)attachmentManager:(id)arg1 didUpdateAttachment:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000010007eeec
- (void)attachmentManager:(id)arg1 didRemoveAttachment:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000010007ee98
- (void)attachmentManager:(id)arg1 didAddAttachment:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000010007ee44
- (void)attachmentManager:(id)arg1 didStartBugSessionsWithDevices:(id)arg2 failedDevices:(id)arg3;	// IMP=0x000000010007ec50
- (id)responseStub;	// IMP=0x000000010007ebd4
- (_Bool)expectsAnswerForType:(long long)arg1;	// IMP=0x000000010007eb24
@property(readonly) NSDateFormatter *headerDateFormatter;
- (void)updateFileMatchersAndCollectors;	// IMP=0x000000010007e2b0
- (void)updateSections;	// IMP=0x000000010007dc04
- (void)updateHeader;	// IMP=0x000000010007d6ac
- (void)updateEverything;	// IMP=0x000000010007d600
- (void)viewDidLayoutSubviews;	// IMP=0x000000010007d5b0
- (void)viewDidLoad;	// IMP=0x000000010007cd3c
- (void)dealloc;	// IMP=0x000000010007ccec
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010007c898

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

