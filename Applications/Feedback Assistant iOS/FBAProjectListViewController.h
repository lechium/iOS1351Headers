//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBATableViewControler.h"

#import "FBAPairingPresentationDelegate-Protocol.h"
#import "_TtP18Feedback_Assistant24FBABugFormPickerDelegate_-Protocol.h"

@class FBABugForm, FBABugFormStub, FBAContentItem, FBAData, FBAResponseSummaryViewController, FBAURLAction, NSArray, NSDictionary, NSMutableArray, NSSet, NSString, UIActivityIndicatorView, UIView;

@interface FBAProjectListViewController : FBATableViewControler <FBAPairingPresentationDelegate, _TtP18Feedback_Assistant24FBABugFormPickerDelegate_>
{
    _Bool _showsFormsCount;	// 8 = 0x8
    _Bool _hidePrograms;	// 9 = 0x9
    _Bool _hasLoadedFormItems;	// 10 = 0xa
    FBAResponseSummaryViewController *_detailViewController;	// 16 = 0x10
    UIView *_loadingView;	// 24 = 0x18
    UIActivityIndicatorView *_loadingActivityIndicator;	// 32 = 0x20
    NSArray *_inboxes;	// 40 = 0x28
    NSArray *_sortedPrograms;	// 48 = 0x30
    NSArray *_programSortDescriptors;	// 56 = 0x38
    FBAURLAction *_delayedUrlAction;	// 64 = 0x40
    NSMutableArray *_fbaDataObservers;	// 72 = 0x48
    FBAContentItem *_pendingDraft;	// 80 = 0x50
    NSArray *_pendingCandidateFormStubs;	// 88 = 0x58
    FBABugFormStub *_pendingBugFormStub;	// 96 = 0x60
    FBABugForm *_pendingBugForm;	// 104 = 0x68
    NSDictionary *_pendingAttachments;	// 112 = 0x70
    NSSet *_pendingExtensions;	// 120 = 0x78
    FBAData *_data;	// 128 = 0x80
    NSDictionary *_pendingQandA;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000100075374
@property(retain) NSDictionary *pendingQandA; // @synthesize pendingQandA=_pendingQandA;
@property(nonatomic) __weak FBAData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSSet *pendingExtensions; // @synthesize pendingExtensions=_pendingExtensions;
@property(retain, nonatomic) NSDictionary *pendingAttachments; // @synthesize pendingAttachments=_pendingAttachments;
@property(nonatomic) _Bool hasLoadedFormItems; // @synthesize hasLoadedFormItems=_hasLoadedFormItems;
@property(nonatomic) _Bool hidePrograms; // @synthesize hidePrograms=_hidePrograms;
@property(retain, nonatomic) FBABugForm *pendingBugForm; // @synthesize pendingBugForm=_pendingBugForm;
@property(retain, nonatomic) FBABugFormStub *pendingBugFormStub; // @synthesize pendingBugFormStub=_pendingBugFormStub;
@property(retain, nonatomic) NSArray *pendingCandidateFormStubs; // @synthesize pendingCandidateFormStubs=_pendingCandidateFormStubs;
@property(retain, nonatomic) FBAContentItem *pendingDraft; // @synthesize pendingDraft=_pendingDraft;
@property(retain, nonatomic) NSMutableArray *fbaDataObservers; // @synthesize fbaDataObservers=_fbaDataObservers;
@property(retain, nonatomic) FBAURLAction *delayedUrlAction; // @synthesize delayedUrlAction=_delayedUrlAction;
@property(nonatomic) _Bool showsFormsCount; // @synthesize showsFormsCount=_showsFormsCount;
@property(retain, nonatomic) NSArray *programSortDescriptors; // @synthesize programSortDescriptors=_programSortDescriptors;
@property(retain, nonatomic) NSArray *sortedPrograms; // @synthesize sortedPrograms=_sortedPrograms;
@property(retain, nonatomic) NSArray *inboxes; // @synthesize inboxes=_inboxes;
@property(nonatomic) __weak UIActivityIndicatorView *loadingActivityIndicator; // @synthesize loadingActivityIndicator=_loadingActivityIndicator;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) FBAResponseSummaryViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
- (void)bugFormPicker:(id)arg1 didSelectBugFormStub:(id)arg2;	// IMP=0x000000010007504c
- (void)pairingViewDidClose;	// IMP=0x0000000100074e54
- (void)pairedDevicesDidChangeWithAddedDevice:(id)arg1 removed:(id)arg2;	// IMP=0x0000000100074e50
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100074c84
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0000000100074c7c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000745ec
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100074314
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000100074264
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000100074184
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100074104
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100074098
- (void)hideLoadingView;	// IMP=0x0000000100073f28
- (void)showLoadingView;	// IMP=0x0000000100073e00
- (void)showSettings;	// IMP=0x0000000100073de4
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;	// IMP=0x00000001000735c8
- (void)launchUrlAction:(id)arg1;	// IMP=0x0000000100072e58
- (void)runDelayedUrlAction;	// IMP=0x0000000100072cf8
- (id)bestSender;	// IMP=0x0000000100072ca4
- (void)respondToUrlAction:(id)arg1;	// IMP=0x0000000100072b4c
- (void)beginFeedbackWithDraftItem:(id)arg1;	// IMP=0x0000000100072ad0
- (void)beginFeedbackForSurvey:(id)arg1;	// IMP=0x0000000100072ab0
- (void)didReloadApp;	// IMP=0x00000001000729e0
- (void)reloadApp;	// IMP=0x0000000100072728
- (void)beginPulltoRefresh;	// IMP=0x0000000100072660
- (void)tryLaunchingDraft:(id)arg1 orStub:(id)arg2 orBugForm:(id)arg3 withSender:(id)arg4 showPicker:(_Bool)arg5;	// IMP=0x0000000100072190
- (void)tryLaunchingDraft:(id)arg1 orStub:(id)arg2 withSender:(id)arg3 showPicker:(_Bool)arg4;	// IMP=0x0000000100072110
- (void)beginBugForProgram:(id)arg1 sender:(id)arg2;	// IMP=0x0000000100071f04
- (void)beginBugForFormStubs:(id)arg1 sender:(id)arg2;	// IMP=0x0000000100071abc
- (void)createNewFeedback:(id)arg1;	// IMP=0x0000000100071974
- (void)updateFromStore;	// IMP=0x0000000100071674
- (_Bool)hasContentItemsToShow;	// IMP=0x00000001000715d4
- (void)reloadView;	// IMP=0x00000001000715c8
- (void)dealloc;	// IMP=0x0000000100071460
- (void)didReceiveMemoryWarning;	// IMP=0x00000001000712d4
- (void)showPairingView;	// IMP=0x00000001000711c4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100071104
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100070f00
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000100070ef8
- (void)viewDidLoad;	// IMP=0x000000010006fd30
- (void)awakeFromNib;	// IMP=0x000000010006fa70
- (void)commonInit;	// IMP=0x000000010006f75c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010006f704
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010006f680
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010006f628

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
