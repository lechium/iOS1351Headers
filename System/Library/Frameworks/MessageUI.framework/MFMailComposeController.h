/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>
#import <libobjc.A.dylib/MFMailComposeToFieldDelegate.h>
#import <libobjc.A.dylib/MFComposeActivityHandoffOperationDelegate.h>
#import <libobjc.A.dylib/MFComposeStyleSelectorViewControllerDelegate.h>
#import <libobjc.A.dylib/MFPhotoPickerControllerDelegate.h>
#import <libobjc.A.dylib/NSUserActivityDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <UIKit/UIPresentationControllerDelegatePrivate.h>
#import <libobjc.A.dylib/VNDocumentCameraViewControllerDelegate.h>
#import <libobjc.A.dylib/_MFMailCompositionContextDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewDelegate.h>
#import <libobjc.A.dylib/CNComposeHeaderViewDelegate.h>
#import <libobjc.A.dylib/MFComposeSubjectViewDelegate.h>
#import <libobjc.A.dylib/MFComposeImageSizeViewDelegate.h>
#import <libobjc.A.dylib/MFSecureMIMECompositionManagerDelegate.h>
#import <libobjc.A.dylib/MFComposeTypeFactoryDelegate.h>
#import <libobjc.A.dylib/MFMailComposeRecipientTextViewDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteGroupDetailViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@protocol OS_dispatch_group, MFMailAccountProxyGenerator, EFScheduler;
@class _MFMailCompositionContext, NSArray, NSString, UIView, UIBarButtonItem, UIButton, CNContactPickerViewController, MFPhotoPickerController, UIImagePickerController, MFMailComposeToField, MFMailComposeRecipientTextView, CNComposeRecipientAtom, MFComposeSubjectView, MFComposeImageSizeView, MFComposeWebView, CNRecentComposeRecipient, MFMailPopoverManager, MFOutgoingMessageDelivery, MFMutableMessageHeaders, EMMessage, MFLock, MFSecureMIMECompositionManager, NSDictionary, MFAddressPickerReformatter, UIKeyCommand, UIAlertController, MFComposeActivityHandoffOperation, UIProgressView, MFMessageContentProgressLayer, MFLANHandoffAgent, NSObject, NSTimer, NSDate, EFFuture, MFMailSignatureController, UIResponder, CNComposeRecipient, EMMailboxObjectID, QLPreviewController, MFAttachment, CNContactViewController, NSMutableSet, MSAutosaveSession, VNDocumentCameraViewController, MFComposeDisplayMetrics, MFPhotoPickerProgressManager, MFComposeStyleSelectorViewController;

@interface MFMailComposeController : UIViewController <UINavigationControllerDelegate, CNContactContentViewControllerDelegate, MFMailComposeToFieldDelegate, MFComposeActivityHandoffOperationDelegate, MFComposeStyleSelectorViewControllerDelegate, MFPhotoPickerControllerDelegate, NSUserActivityDelegate, QLPreviewControllerDelegate, UIPresentationControllerDelegatePrivate, VNDocumentCameraViewControllerDelegate, _MFMailCompositionContextDelegate, MFMailComposeViewDelegate, CNComposeHeaderViewDelegate, MFComposeSubjectViewDelegate, MFComposeImageSizeViewDelegate, MFSecureMIMECompositionManagerDelegate, MFComposeTypeFactoryDelegate, MFMailComposeRecipientTextViewDelegate, UIImagePickerControllerDelegate, UIPopoverPresentationControllerDelegate, CNAutocompleteGroupDetailViewControllerDelegate, CNContactPickerDelegate> {

	id _remoteViewControllerProxy;
	_MFMailCompositionContext* _compositionContext;
	unsigned long long _options;
	NSArray* _toAddresses;
	NSArray* _ccAddresses;
	NSArray* _bccAddresses;
	NSArray* _originalBccAddresses;
	NSString* _subject;
	NSString* _originalSendingEmailAddress;
	NSString* _primaryAddressForForcedSendingAccount;
	NSString* _sendingEmailAddress;
	long long _sendingEmailAddressIndex;
	unsigned long long _initialAttachmentCount;
	UIView* _alternateTitleView;
	UIBarButtonItem* _sendButtonItem;
	UIBarButtonItem* _closeButtonItem;
	UIButton* _sendAccessoryButton;
	CNContactPickerViewController* _peoplePicker;
	MFPhotoPickerController* _photosPickerController;
	UIImagePickerController* _cameraPickerController;
	MFMailComposeToField* _toField;
	MFMailComposeRecipientTextView* _ccField;
	MFMailComposeRecipientTextView* _lastFocusedRecipientView;
	CNComposeRecipientAtom* _atomPresentingCard;
	MFComposeSubjectView* _subjectField;
	MFComposeImageSizeView* _imageSizeField;
	MFComposeWebView* _composeWebView;
	CNRecentComposeRecipient* _recentRecipientPresentingCard;
	MFMailPopoverManager* _popoverManager;
	MFOutgoingMessageDelivery* _delivery;
	MFMutableMessageHeaders* _savedHeaders;
	EMMessage* _lastDraftMessage;
	NSString* _initialTitle;
	MFLock* _autosaveLock;
	NSString* _autosaveIdentifier;
	NSString* _documentID;
	MFSecureMIMECompositionManager* _secureCompositionManager;
	NSDictionary* _certificatesByRecipient;
	NSDictionary* _errorsByRecipient;
	NSString* _addressForMissingIdentity;
	int _signingIdentityStatus;
	int _encryptionIdentityStatus;
	BOOL _encryptionStatusIsKnown;
	int _resolution;
	int _recipientFieldWhileViewUnloaded;
	unsigned _isDirty : 1;
	unsigned _bodyTextChanged : 1;
	unsigned _shouldAutosaveWithSuspendInfo : 1;
	unsigned _isSuspended : 1;
	unsigned _viewWasUnloaded : 1;
	unsigned _fromAddressPickerWasVisible : 1;
	unsigned _stillLoading : 1;
	unsigned _hosted : 1;
	unsigned _hasViewAppeared : 1;
	unsigned _rotationSnapshotTaken : 1;
	unsigned _isPopoverVisible : 1;
	unsigned _useSuspended : 1;
	unsigned _didShowNotifyConfirmation : 1;
	unsigned _showingNotifyConfirmation : 1;
	MFAddressPickerReformatter* _addressPickerReformatter;
	BOOL _contentVisible;
	BOOL _allowRestrictedAccounts;
	BOOL _encryptionOverrideSetting;
	BOOL _initializedRecipients;
	BOOL _originalMessageWasEncrypted;
	unsigned long long _selectedContentVariationIndex;
	UIKeyCommand* _sendKeyCommand;
	UIKeyCommand* _escapeKeyCommand;
	UIAlertController* _notifyConfirmation;
	MFComposeActivityHandoffOperation* _handoffOperation;
	UIProgressView* _handoffProgressView;
	MFMessageContentProgressLayer* _progressIndicatorView;
	MFLANHandoffAgent* _LANHandoffAgent;
	NSObject*<OS_dispatch_group> _imageScalingGroup;
	unsigned short _lastTypedCharacter;
	NSTimer* _autosaveTimer;
	NSDate* _autosavedDate;
	NSDate* _lastActiveDate;
	NSDictionary* _securityScopes;
	AI _autosaveCount;
	EFFuture* _undoMoveAction;
	/*^block*/id _releaseActiveFocusedState;
	MFMailSignatureController* _signatureController;
	UIResponder* _savedFirstResponder;
	EFFuture* _content;
	unsigned long long _drawingSequenceNumber;
	struct {
		BOOL respondsToCompositionWillFinish;
		BOOL respondsToCompositionDidFailToFinish;
	}  _composeWebViewFlags;
	BOOL _isModal;
	BOOL _useMailDrop;
	BOOL _autosaveIsValid;
	BOOL _insertingDrawing;
	BOOL _attachmentToMarkupIsLoaded;
	BOOL _delayToShowMarkupHasPassed;
	int _sourceAccountManagement;
	id _delegate;
	CNComposeRecipient* _recipientPresentingCard;
	id<MFMailAccountProxyGenerator> _accountProxyGenerator;
	EMMailboxObjectID* _draftMailboxObjectID;
	NSString* _originatingBundleID;
	long long _drawingInsertCount;
	UIAlertController* _popoverAlert;
	QLPreviewController* _previewController;
	MFAttachment* _previewingAttachment;
	CNContactViewController* _contactViewController;
	unsigned long long _markupReplyAttachmentLoadingProgress;
	NSMutableSet* _drawingFileAttachments;
	id<EFScheduler> _autosaveQueue;
	MSAutosaveSession* _autosaveSession;
	VNDocumentCameraViewController* _documentCameraViewController;
	MFComposeDisplayMetrics* _displayMetrics;
	MFPhotoPickerProgressManager* _photoPickerProgressManager;
	MFComposeStyleSelectorViewController* _styleSelector;
	NSDictionary* _fontAttributes;

}

@property (nonatomic,retain) id<MFMailAccountProxyGenerator> accountProxyGenerator;                             //@synthesize accountProxyGenerator=_accountProxyGenerator - In the implementation block
@property (nonatomic,retain) UIAlertController * popoverAlert;                                                  //@synthesize popoverAlert=_popoverAlert - In the implementation block
@property (assign,nonatomic,__weak) QLPreviewController * previewController;                                    //@synthesize previewController=_previewController - In the implementation block
@property (nonatomic,retain) MFAttachment * previewingAttachment;                                               //@synthesize previewingAttachment=_previewingAttachment - In the implementation block
@property (assign,nonatomic) BOOL insertingDrawing;                                                             //@synthesize insertingDrawing=_insertingDrawing - In the implementation block
@property (nonatomic,retain) CNContactPickerViewController * peoplePicker;                                      //@synthesize peoplePicker=_peoplePicker - In the implementation block
@property (nonatomic,retain) CNContactViewController * contactViewController;                                   //@synthesize contactViewController=_contactViewController - In the implementation block
@property (nonatomic,retain) CNComposeRecipientAtom * atomPresentingCard;                                       //@synthesize atomPresentingCard=_atomPresentingCard - In the implementation block
@property (nonatomic,retain) CNComposeRecipient * recipientPresentingCard;                                      //@synthesize recipientPresentingCard=_recipientPresentingCard - In the implementation block
@property (nonatomic,retain) NSDictionary * certificatesByRecipient;                                            //@synthesize certificatesByRecipient=_certificatesByRecipient - In the implementation block
@property (nonatomic,retain) NSDictionary * errorsByRecipient;                                                  //@synthesize errorsByRecipient=_errorsByRecipient - In the implementation block
@property (nonatomic,copy) NSString * addressForMissingIdentity;                                                //@synthesize addressForMissingIdentity=_addressForMissingIdentity - In the implementation block
@property (assign,nonatomic) BOOL attachmentToMarkupIsLoaded;                                                   //@synthesize attachmentToMarkupIsLoaded=_attachmentToMarkupIsLoaded - In the implementation block
@property (assign,nonatomic) BOOL delayToShowMarkupHasPassed;                                                   //@synthesize delayToShowMarkupHasPassed=_delayToShowMarkupHasPassed - In the implementation block
@property (assign,nonatomic) unsigned long long markupReplyAttachmentLoadingProgress;                           //@synthesize markupReplyAttachmentLoadingProgress=_markupReplyAttachmentLoadingProgress - In the implementation block
@property (assign,nonatomic) BOOL autosaveIsValid;                                                              //@synthesize autosaveIsValid=_autosaveIsValid - In the implementation block
@property (nonatomic,retain) NSMutableSet * drawingFileAttachments;                                             //@synthesize drawingFileAttachments=_drawingFileAttachments - In the implementation block
@property (assign,nonatomic) long long drawingInsertCount;                                                      //@synthesize drawingInsertCount=_drawingInsertCount - In the implementation block
@property (getter=isVerticallyCompact,nonatomic,readonly) BOOL verticallyCompact; 
@property (nonatomic,retain) id<EFScheduler> autosaveQueue;                                                     //@synthesize autosaveQueue=_autosaveQueue - In the implementation block
@property (nonatomic,retain) MSAutosaveSession * autosaveSession;                                               //@synthesize autosaveSession=_autosaveSession - In the implementation block
@property (assign,nonatomic,__weak) VNDocumentCameraViewController * documentCameraViewController;              //@synthesize documentCameraViewController=_documentCameraViewController - In the implementation block
@property (nonatomic,retain) MFComposeDisplayMetrics * displayMetrics;                                          //@synthesize displayMetrics=_displayMetrics - In the implementation block
@property (nonatomic,retain) MFPhotoPickerProgressManager * photoPickerProgressManager;                         //@synthesize photoPickerProgressManager=_photoPickerProgressManager - In the implementation block
@property (nonatomic,retain) NSString * autosaveIdentifier; 
@property (nonatomic,retain) MFComposeStyleSelectorViewController * styleSelector;                              //@synthesize styleSelector=_styleSelector - In the implementation block
@property (nonatomic,retain) NSDictionary * fontAttributes;                                                     //@synthesize fontAttributes=_fontAttributes - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id remoteViewControllerProxy;                                                      //@synthesize remoteViewControllerProxy=_remoteViewControllerProxy - In the implementation block
@property (nonatomic,readonly) MFOutgoingMessageDelivery * delivery;                                            //@synthesize delivery=_delivery - In the implementation block
@property (nonatomic,readonly) EMMessage * lastDraftMessage;                                                    //@synthesize lastDraftMessage=_lastDraftMessage - In the implementation block
@property (nonatomic,readonly) EMMailboxObjectID * draftMailboxObjectID;                                        //@synthesize draftMailboxObjectID=_draftMailboxObjectID - In the implementation block
@property (nonatomic,copy) NSString * originatingBundleID;                                                      //@synthesize originatingBundleID=_originatingBundleID - In the implementation block
@property (nonatomic,readonly) NSString * documentID;                                                           //@synthesize documentID=_documentID - In the implementation block
@property (assign,nonatomic) int sourceAccountManagement;                                                       //@synthesize sourceAccountManagement=_sourceAccountManagement - In the implementation block
@property (assign,nonatomic) BOOL useMailDrop;                                                                  //@synthesize useMailDrop=_useMailDrop - In the implementation block
@property (nonatomic,readonly) NSDate * autosavedDate;                                                          //@synthesize autosavedDate=_autosavedDate - In the implementation block
@property (nonatomic,readonly) long long countofDrawingAttachmentsLeftInCompose; 
@property (assign,nonatomic) BOOL isModal;                                                                      //@synthesize isModal=_isModal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)preferenceForKey:(id)arg1 ;
+(id)signpostLog;
+(BOOL)isSetupForDeliveryAllowingRestrictedAccounts:(BOOL)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 ;
+(BOOL)isSetupForDeliveryAllowingRestrictedAccounts:(BOOL)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)attachments;
-(void)userActivity:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)sendMessage:(unsigned long long)arg1 ;
-(NSDictionary *)fontAttributes;
-(id)emailAddresses;
-(id)subject;
-(void)setSubject:(id)arg1 ;
-(unsigned long long)signpostID;
-(BOOL)isDirty;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_prepareForSuspend;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_MF16*)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)contentDidChange;
-(void)applicationDidResume;
-(void)applicationWillSuspend;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)viewWillUnload;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)viewDidUnload;
-(id)keyCommands;
-(void)viewLayoutMarginsDidChange;
-(void)updateUserActivityState:(id)arg1 ;
-(void)documentPickerWasCancelled:(id)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(unsigned long long)pickerView:(id)arg1 numberOfRowsInComponent:(unsigned long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)setContentVisible:(BOOL)arg1 ;
-(void)send:(id)arg1 ;
-(NSString *)documentID;
-(id)_emailAddresses;
-(void)_close;
-(MFOutgoingMessageDelivery *)delivery;
-(int)resolution;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2 ;
-(void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3 ;
-(void)close:(id)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(CNContactViewController *)contactViewController;
-(void)setContactViewController:(CNContactViewController *)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)setInitialTitle:(id)arg1 ;
-(void)photoPickerDidCancel:(id)arg1 ;
-(void)autosaveWithHandler:(/*^block*/id)arg1 ;
-(NSString *)autosaveIdentifier;
-(void)setToRecipients:(id)arg1 ;
-(void)setAutosaveIdentifier:(NSString *)arg1 ;
-(id)dismissActionsForPreviewController:(id)arg1 ;
-(QLPreviewController *)previewController;
-(void)setPreviewController:(QLPreviewController *)arg1 ;
-(CNContactPickerViewController *)peoplePicker;
-(void)setPeoplePicker:(CNContactPickerViewController *)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeHeaderViewDidChangeValue:(id)arg1 ;
-(void)composeHeaderViewDidConfirmValue:(id)arg1 ;
-(void)composeHeaderView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2 ;
-(void)recipientViewDidBecomeFirstResponder:(id)arg1 ;
-(void)recipientViewDidResignFirstResponder:(id)arg1 ;
-(BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 disambiguateRecipientForAtom:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 showPersonCardForRecipient:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForContact:(id)arg2 ;
-(unsigned long long)presentationOptionsForRecipient:(id)arg1 ;
-(void)composeRecipientViewReturnPressed:(id)arg1 ;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg1 ;
-(BOOL)composeRecipientViewShowingSearchResults:(id)arg1 ;
-(BOOL)presentSearchResultsForComposeRecipientView:(id)arg1 ;
-(void)dismissSearchResultsForComposeRecipientView:(id)arg1 ;
-(void)selectNextSearchResultForComposeRecipientView:(id)arg1 ;
-(void)selectPreviousSearchResultForComposeRecipientView:(id)arg1 ;
-(BOOL)chooseSelectedSearchResultForComposeRecipientView:(id)arg1 ;
-(void)setSourceAccountManagement:(int)arg1 ;
-(BOOL)_shouldUseMailDrop;
-(id)toRecipients;
-(id)ccRecipients;
-(id)bccRecipients;
-(BOOL)useMailDrop;
-(void)setUseMailDrop:(BOOL)arg1 ;
-(void)secureMIMECompositionManager:(id)arg1 signingStatusDidChange:(int)arg2 context:(id)arg3 ;
-(void)secureMIMECompositionManager:(id)arg1 encryptionStatusDidChange:(int)arg2 context:(id)arg3 ;
-(Class)_deliveryClass;
-(id)navigationBarTitle;
-(void)_removeRecent;
-(void)autocompleteGroupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2 ;
-(void)autocompleteGroupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2 ;
-(void)autocompleteGroupDetailViewControllerDidCancel:(id)arg1 ;
-(id)presentationViewController;
-(BOOL)hasAttachments;
-(void)setRemoteViewControllerProxy:(id)arg1 ;
-(id)remoteViewControllerProxy;
-(void)_accountsChanged:(id)arg1 ;
-(void)dismissSheet;
-(void)activityHandoffOperation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)activityHandoffOperation:(id)arg1 didFinishSendingDataWithResult:(long long)arg2 ;
-(void)activityHandoffOperationReceivedBytes:(id)arg1 ;
-(void)activityHandoffOperation:(id)arg1 didFinishReceivingData:(id)arg2 ;
-(void)setCcRecipients:(id)arg1 ;
-(void)setBccRecipients:(id)arg1 ;
-(void)imageSizeView:(id)arg1 changedSelectedScaleTo:(unsigned long long)arg2 ;
-(unsigned long long)_defaultAtomPresentationOptions;
-(BOOL)_wantsEncryption;
-(void)composeStyleSelector:(id)arg1 didSelectStyle:(id)arg2 ;
-(void)composeStyleSelectorDidCancel:(id)arg1 ;
-(void)composeStyleSelectorDidPresentColorPicker:(id)arg1 ;
-(id)composeStyleSelectorPresentationContext:(id)arg1 ;
-(void)composeStyleSelector:(id)arg1 didChangeFontSize:(double)arg2 ;
-(void)composeStyleSelector:(id)arg1 didChangeTextColor:(id)arg2 ;
-(void)composeStyleSelectorDidDismissFontPicker:(id)arg1 ;
-(void)composeStyleSelector:(id)arg1 didChangeFont:(id)arg2 ;
-(void)composeSubjectViewDidSelectNotifyButton:(id)arg1 ;
-(void)composeSubjectViewDidSelectContentVariationButton:(id)arg1 ;
-(void)composeSubjectViewTextFieldDidResignFirstResponder:(id)arg1 ;
-(void)composeSubjectViewTextFieldDidBecomeFirstResponder:(id)arg1 ;
-(MFComposeDisplayMetrics *)displayMetrics;
-(void)composeSubjectViewWillRemoveContent:(id)arg1 ;
-(id)composeWebView;
-(int)composeType;
-(id)sendingEmailAddress;
-(void)addSignature:(BOOL)arg1 ;
-(void)setOriginalMessageWasEncrypted:(BOOL)arg1 ;
-(id)savedHeaders;
-(id<MFMailAccountProxyGenerator>)accountProxyGenerator;
-(void)setSendingEmailAddress:(id)arg1 ;
-(void)setSavedHeaders:(id)arg1 ;
-(unsigned long long)contentVariationIndex;
-(id)shouldCreateRichTextRepresentation;
-(void)importDocument;
-(void)markupAttachment:(id)arg1 ;
-(void)finalizeSignature:(/*^block*/id)arg1 ;
-(id)compositionContext;
-(int)compositionType;
-(void)showStyleSelector:(id)arg1 ;
-(BOOL)canShowAttachmentPicker;
-(void)showPhotoPickerWithSourceType:(long long)arg1 fromSource:(id)arg2 ;
-(void)insertDrawing;
-(void)scanDocument;
-(void)changeQuoteLevel:(long long)arg1 ;
-(void)didInsertAttachment:(id)arg1 ;
-(void)insertPhotoOrVideo;
-(void)showMissingAttachmentDataAlert;
-(void)composeWebViewDidChangeFontAttributes:(id)arg1 ;
-(void)didRemoveAttachment:(id)arg1 ;
-(int)sourceAccountManagement;
-(void)setCaretPosition:(unsigned long long)arg1 ;
-(void)setHosted:(BOOL)arg1 ;
-(id)mailComposeView;
-(void)setPopoverAlert:(UIAlertController *)arg1 ;
-(void)setAddresses:(id)arg1 field:(int)arg2 ;
-(void)_displayMetricsDidChange;
-(void)_updateNavigationBarTitleAnimated:(BOOL)arg1 ;
-(id)_alternateTitleView;
-(void)_resetSecureCompositionManager;
-(BOOL)_secureCompositionManagerHasRecipients;
-(id)_defaultAccount;
-(void)_resetProxyGenerator;
-(BOOL)canShowFromField;
-(id)_availableAccountProxies;
-(void)setAccountProxyGenerator:(id<MFMailAccountProxyGenerator>)arg1 ;
-(void)setAutosaveSession:(MSAutosaveSession *)arg1 ;
-(void)setProgressUIVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)clearAllFields;
-(void)_loadCompositionContext;
-(void)_prepareCompositionContextForLoading:(id)arg1 ;
-(NSString *)originatingBundleID;
-(void)_setupForDraft:(id)arg1 ;
-(void)_setupForExistingNewMessage:(id)arg1 content:(id)arg2 ;
-(void)_setupForOutbox:(id)arg1 ;
-(void)_setupForAutosavedMessage:(id)arg1 ;
-(void)_updateSendAndCloseEnabled;
-(void)_checkForReplyAndForwardRestriction;
-(BOOL)_isRestoredComposition;
-(void)_updateOriginalBccStatusForRestoreAddingAddress:(BOOL)arg1 ;
-(void)_setIsLoading:(BOOL)arg1 ;
-(void)_loadingContextDidLoadMessage;
-(void)_loadAttachments;
-(void)pickInitialFirstResponder;
-(void)_updateImageSizeTitles;
-(BOOL)_isReplyOrForward;
-(void)setDraftMessage:(id)arg1 ;
-(void)updateSignature;
-(void)_attachmentLoaderFinishedWithOriginalContent:(id)arg1 ;
-(void)_finishedLoadingAllContentAndAttachments;
-(BOOL)_isDummyViewController;
-(void)_makeComposeUserActivityCurrent;
-(void)saveFirstResponder;
-(void)_setAutosaveIsValid:(BOOL)arg1 ;
-(void)_draftContentDidChange;
-(unsigned long long)markupReplyAttachmentLoadingProgress;
-(void)setMarkupReplyAttachmentLoadingProgress:(unsigned long long)arg1 ;
-(BOOL)_setSendingEmailAddress:(id)arg1 ;
-(id)sendingAccountProxy;
-(void)_resetSecureCompositionManagerUsingNewAccount:(BOOL)arg1 ;
-(void)setPreviewingAttachment:(MFAttachment *)arg1 ;
-(BOOL)isManagedAccount;
-(id)_backgroundColorForMarkupController;
-(void)_dismissPresentedHalfSheet;
-(id)_nextDrawingName;
-(void)setDocumentCameraViewController:(VNDocumentCameraViewController *)arg1 ;
-(void)_finishPopoverAlertClosingComposition:(BOOL)arg1 ;
-(void)_presentModalAlert:(id)arg1 ;
-(void)_documentCameraViewControllerDidFinish;
-(MFAttachment *)previewingAttachment;
-(id)_addressFieldForField:(int)arg1 ;
-(id)addressesForField:(int)arg1 ;
-(void)_setRecipients:(id)arg1 forField:(int)arg2 ;
-(void)addAddress:(id)arg1 field:(int)arg2 ;
-(void)removeAddressAtIndex:(unsigned long long)arg1 field:(int)arg2 ;
-(id)_allRecipientViews;
-(BOOL)_shouldEnableSendButton;
-(void)_willPresentDocumentPicker;
-(void)_didDismissDocumentPicker;
-(void)_showCamera:(id)arg1 ;
-(void)_showPhotoPicker:(id)arg1 ;
-(void)setPhotoPickerProgressManager:(MFPhotoPickerProgressManager *)arg1 ;
-(void)_preparePhotoPicker;
-(CGRect)_optimalRectForPresentingPopoverInComposeWebView;
-(id)_sheetDetentForViewController:(id)arg1 ;
-(void)insertPhotoOrVideoWithAssetIdentifier:(id)arg1 info:(id)arg2 ;
-(void)_dismissAndCleanupCameraPickerController;
-(BOOL)_shouldEnableCloseButton;
-(UIAlertController *)popoverAlert;
-(VNDocumentCameraViewController *)documentCameraViewController;
-(BOOL)_isSetupForDelivery;
-(BOOL)_isPopoverOrActionSheetOrAlertVisible;
-(BOOL)sendingAccountIsExchange;
-(CGRect)frameForAttachmentWithIdentifier:(id)arg1 ;
-(BOOL)canShowImageSizeField;
-(unsigned long long)_sizeForScale:(unsigned long long)arg1 imagesOnly:(BOOL)arg2 ;
-(void)_setInitialStateForImageField;
-(void)_beginBlockingBodyScroll;
-(void)_endBlockingBodyScroll;
-(void)_scaleImages;
-(void)_autosaveTimerFired:(id)arg1 ;
-(void)_startAutosaveTimerIfNeeded;
-(void)_setTitleBarSubtitleText:(id)arg1 style:(unsigned long long)arg2 ;
-(BOOL)_shouldAutosaveAfterTimerFiredWithInterval:(double)arg1 ;
-(void)_updateAutosaveSession;
-(void)_saveMessageValues;
-(void)setHeadersForDraft;
-(id)_messageForAutosave;
-(id<EFScheduler>)autosaveQueue;
-(BOOL)autosaveIsValid;
-(MSAutosaveSession *)autosaveSession;
-(void)_setUpForSaveAsDraft;
-(void)_finishedComposing;
-(void)_leaveMessageInOutbox;
-(void)_displayPopoverAlert:(id)arg1 ;
-(id)_outgoingMessageWithSubstituteDocument:(id)arg1 compositionSpecification:(id)arg2 useSuspendInfo:(BOOL)arg3 endingEditing:(BOOL)arg4 ;
-(id)_messageWithCompositionSpecification:(id)arg1 useSuspendInfo:(BOOL)arg2 endingEditing:(BOOL)arg3 ;
-(unsigned long long)_composeWebViewTextContentLength;
-(void)_checkForCanSendMailWithContinuation:(/*^block*/id)arg1 ;
-(void)_promptForMailDropIfNecessaryWithContinuation:(/*^block*/id)arg1 ;
-(void)_prepareImagesForSendWithContinuation:(/*^block*/id)arg1 ;
-(void)_checkForInFlightAssetDownloadsWithContinuation:(/*^block*/id)arg1 ;
-(void)_checkForUnencryptedWithContinuation:(/*^block*/id)arg1 ;
-(void)_checkForEmptySubjectWithContinuation:(/*^block*/id)arg1 ;
-(void)_checkForInvalidAddressesWithContinuation:(/*^block*/id)arg1 ;
-(void)_finishModalAlertClosingComposition:(BOOL)arg1 ;
-(MFPhotoPickerProgressManager *)photoPickerProgressManager;
-(NSDictionary *)errorsByRecipient;
-(NSDictionary *)certificatesByRecipient;
-(void)_physicallyScaleImagesToScale:(unsigned long long)arg1 ;
-(id)_estimateMessageSize;
-(void)_setUpDeliveryObject:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_messageForRemoteDelivery;
-(id)_messageForDraft;
-(void)_explainAirplaneMode;
-(BOOL)needsDelivery;
-(void)deliverMessageRemotely:(/*^block*/id)arg1 ;
-(void)_bodyTextChanged;
-(void)_subjectTextChanged:(id)arg1 ;
-(void)_recipientTextChanged:(id)arg1 ;
-(void)_composeViewDidDraw:(id)arg1 ;
-(void)_focusGained:(id)arg1 ;
-(void)_restoreMessageValues;
-(void)_setupNavigationBarItems;
-(int)_fieldForAddressField:(id)arg1 ;
-(void)setIsModal:(BOOL)arg1 ;
-(void)setAtomPresentingCard:(CNComposeRecipientAtom *)arg1 ;
-(void)setRecipientPresentingCard:(CNComposeRecipient *)arg1 ;
-(void)setDelayToShowMarkupHasPassed:(BOOL)arg1 ;
-(id)_attachmentToMarkup;
-(BOOL)attachmentToMarkupIsLoaded;
-(void)clearInitialTitle;
-(id)popoverManagerCreateIfNeeded:(BOOL)arg1 ;
-(void)_clearMessageValues;
-(void)_dismissPeoplePicker:(id)arg1 ;
-(void)_finishEnteringRecipients;
-(BOOL)hosted;
-(BOOL)_isActiveComposeController;
-(void)_updateRecipientAtomStyles;
-(void)didBecomeActiveComposeController;
-(void)_popoverWillBePresented:(id)arg1 ;
-(void)setDisplayMetrics:(MFComposeDisplayMetrics *)arg1 ;
-(MFComposeStyleSelectorViewController *)styleSelector;
-(void)setStyleSelector:(MFComposeStyleSelectorViewController *)arg1 ;
-(id)_copyMessagePlainTextForDonation;
-(id)_copyMessagePlainTextForDonationRemoveQuotes:(BOOL)arg1 ;
-(BOOL)_isTabKeyCommandInvocationPossible;
-(void)_tabKeyCommandInvoked:(id)arg1 ;
-(void)_focusBccHeaderCommandInvoked:(id)arg1 ;
-(void)_replyAllCommandInvoked:(id)arg1 ;
-(void)_replyCommandInvoked:(id)arg1 ;
-(void)_dismissPersonCard;
-(void)showContentVariationPicker:(id)arg1 ;
-(void)_setComposeWebViewAutocorrectionContext:(id)arg1 ;
-(void)_showOriginalAttachmentsIfNecessary;
-(void)_updateAutoBccSendingAddress:(id)arg1 withNewSendingAddress:(id)arg2 ;
-(void)_updateComposeWebViewAutoCorrectionContext;
-(void)_updateSMIMEButtonEnabledForRecipientCount;
-(BOOL)_anyRecipientViewContainsAddress:(id)arg1 ;
-(BOOL)_hasEncryptionIdentityError;
-(void)_setLastFocusedRecipientView:(id)arg1 ;
-(BOOL)isShowingRecentPersonCard;
-(id)_contactViewControllerForRecipient:(id)arg1 ;
-(void)_updatePersonCard;
-(CNComposeRecipient *)recipientPresentingCard;
-(id)navigationControllerForRecentPersonCard;
-(void)_showPersonCardForRecipient:(id)arg1 showDeleteButton:(BOOL)arg2 ;
-(CNComposeRecipientAtom *)atomPresentingCard;
-(void)_dismissPresentedViewController;
-(unsigned long long)_reloadNumberOfReformattedAddressesWithMaximumWidth:(double)arg1 defaultFontSize:(double)arg2 ;
-(id)_reformattedAddressAtIndex:(unsigned long long)arg1 ;
-(void)didSelectCellAtRow:(unsigned long long)arg1 ;
-(void)_updateTableCell:(id)arg1 isChecked:(BOOL)arg2 ;
-(void)setCertificatesByRecipient:(NSDictionary *)arg1 ;
-(void)setErrorsByRecipient:(NSDictionary *)arg1 ;
-(void)setAddressForMissingIdentity:(NSString *)arg1 ;
-(void)_updateSMIMEButtonForEncryptionStatus:(int)arg1 ;
-(void)_updateTitleBarForEncryptionStatus:(int)arg1 ;
-(BOOL)_hasRecipients;
-(void)_showMissingIdentityAlert;
-(NSString *)addressForMissingIdentity;
-(id)_missingIdentityErrorWithFormat:(id)arg1 title:(id)arg2 ;
-(void)_updateIdentityStatus:(int*)arg1 withPolicy:(int)arg2 identity:(SecIdentityRef)arg3 error:(id)arg4 ;
-(void)_hideHandoffProgressViewAnimated:(BOOL)arg1 ;
-(id)_copyMessageDataForActivityHandoff;
-(void)setCompositionContext:(id)arg1 ;
-(void)_createAndAddHandoffProgressViewIfNecessary;
-(void)setFontAttributes:(NSDictionary *)arg1 ;
-(void)_retainFocusOfComposeWebViewIfRequired:(id)arg1 ;
-(BOOL)shouldShowSMIMEButton;
-(void)tappedSMIMEButton;
-(void)photoPicker:(id)arg1 didSelectAssetWithIdentifier:(id)arg2 mediaInfo:(id)arg3 ;
-(void)photoPicker:(id)arg1 didDeselectAssetWithIdentifier:(id)arg2 ;
-(void)documentCameraViewController:(id)arg1 didFinishWithScan:(id)arg2 ;
-(void)documentCameraViewControllerDidCancel:(id)arg1 ;
-(void)messageDidChangeForCompositionContext:(id)arg1 newMessage:(id)arg2 ;
-(void)selectCurrentEntryForFromAddressPickerView:(id)arg1 ;
-(void)scrollToSelectedEntryInFromAddressTableView:(id)arg1 ;
-(id)sendingEmailAddressIfExists;
-(BOOL)sendingEmailDirtied;
-(BOOL)bccAddressesDirtied;
-(id)currentScaleImageSize;
-(id)popoverManager;
-(void)didInsertBodyText:(id)arg1 ;
-(void)composeViewBodyTextChanged:(id)arg1 ;
-(id)contentVariationName;
-(BOOL)canShowContentVariationPicker;
-(UIEdgeInsets)additionalContentInsetForComposeWebView:(id)arg1 ;
-(id)nextResponderForRecipientView:(id)arg1 ;
-(id)initWithCompositionContext:(id)arg1 options:(unsigned long long)arg2 ;
-(long long)countofDrawingAttachmentsLeftInCompose;
-(BOOL)_shouldPrependBlankLineForAttachments;
-(void)saveAndResignFirstResponder;
-(id)_selectedAttachmentURLs;
-(void)_updateOriginalBccStatusForRestore;
-(CGRect)rectOfAttachment:(id)arg1 ;
-(void)_unscaleImages;
-(void)autosaveIfNecessaryWithHandler:(/*^block*/id)arg1 ;
-(void)backUpDraft;
-(void)finishedBackingUpDraftWithSuccess:(BOOL)arg1 ;
-(void)presentSaveDeleteDialogOrClose;
-(void)serializedPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)securityScopeForURL:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)forceSaveAsDraft;
-(BOOL)isSavingAsDraft;
-(void)setRecipientsKeyboardType:(long long)arg1 ;
-(void)hostApplicationDidEnterBackground;
-(void)hostApplicationWillEnterForeground;
-(id)_messageToDonate;
-(BOOL)isVerticallyCompact;
-(long long)popoverPresentationStyleForViewController:(id)arg1 ;
-(void)handleLargeMessageComposeHandoffWithInputStream:(id)arg1 outputStream:(id)arg2 error:(id)arg3 ;
-(EMMessage *)lastDraftMessage;
-(BOOL)isModal;
-(NSDate *)autosavedDate;
-(EMMailboxObjectID *)draftMailboxObjectID;
-(void)setOriginatingBundleID:(NSString *)arg1 ;
-(void)setAutosaveIsValid:(BOOL)arg1 ;
-(long long)drawingInsertCount;
-(void)setDrawingInsertCount:(long long)arg1 ;
-(BOOL)insertingDrawing;
-(void)setInsertingDrawing:(BOOL)arg1 ;
-(void)setAttachmentToMarkupIsLoaded:(BOOL)arg1 ;
-(BOOL)delayToShowMarkupHasPassed;
-(NSMutableSet *)drawingFileAttachments;
-(void)setDrawingFileAttachments:(NSMutableSet *)arg1 ;
-(void)setAutosaveQueue:(id<EFScheduler>)arg1 ;
@end

