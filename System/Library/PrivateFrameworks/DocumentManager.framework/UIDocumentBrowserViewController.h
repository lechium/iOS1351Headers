/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DocumentManager/DocumentManager-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/DOCHostDocumentBrowserViewControllerInterface.h>
#import <libobjc.A.dylib/DOCViewServiceErrorViewControllerDelegate.h>
#import <UIKit/UIPresentationControllerDelegatePrivate.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>
#import <libobjc.A.dylib/DOCRemoteViewControllerDelegate.h>
#import <libobjc.A.dylib/DOCKeyCommandResponder.h>
#import <libobjc.A.dylib/DOCAppearanceCustomization.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol UIDocumentBrowserViewControllerDelegate, DOCServiceDocumentBrowserViewControllerInterface;
@class _UIRemoteViewController, DOCAppearance, UIView, NSArray, _UIResilientRemoteViewContainerViewController, DOCDocBrowserVC_UIActivityViewController, UIPresentationController, NSOperationQueue, DOCConfiguration, UIColor, NSString;

@interface UIDocumentBrowserViewController : UIViewController <DOCHostDocumentBrowserViewControllerInterface, DOCViewServiceErrorViewControllerDelegate, UIPresentationControllerDelegatePrivate, _UIRemoteViewControllerContaining, DOCRemoteViewControllerDelegate, DOCKeyCommandResponder, DOCAppearanceCustomization, NSCoding> {

	BOOL _isDisplayingRemoteViewController;
	UIView* _trackingViewsContainer;
	DOCAppearance* _appearance;
	BOOL _allowsDocumentCreation;
	BOOL _allowsPickingMultipleItems;
	BOOL _shouldShowFileExtensions;
	BOOL _shouldDelayRemoteViewController;
	id<UIDocumentBrowserViewControllerDelegate> _delegate;
	NSArray* _additionalLeadingNavigationBarButtonItems;
	NSArray* _additionalTrailingNavigationBarButtonItems;
	NSArray* _customActions;
	NSArray* _leadingBarButtonTrackingViews;
	NSArray* _trailingBarButtonTrackingViews;
	NSArray* _remoteAdditionalLeadingNavigationBarButtonItems;
	NSArray* _remoteAdditionalTrailingNavigationBarButtonItems;
	_UIResilientRemoteViewContainerViewController* _remoteViewController;
	DOCDocBrowserVC_UIActivityViewController* _activityViewController;
	UIPresentationController* _adaptivePresentationController;
	id<DOCServiceDocumentBrowserViewControllerInterface> _serviceProxy;
	NSOperationQueue* _serviceQueue;
	DOCConfiguration* _configuration;
	UIColor* _createButtonColor;
	UIColor* _badgeTintColor;
	UIColor* _inBrowserTintColor;
	UIColor* _sortingBackgroundColor;
	UIColor* _backgroundColor;
	UIColor* _itemTitleColor;
	UIColor* _itemSubtitleColor;

}

@property (nonatomic,retain) NSArray * leadingBarButtonTrackingViews;                                               //@synthesize leadingBarButtonTrackingViews=_leadingBarButtonTrackingViews - In the implementation block
@property (nonatomic,retain) NSArray * trailingBarButtonTrackingViews;                                              //@synthesize trailingBarButtonTrackingViews=_trailingBarButtonTrackingViews - In the implementation block
@property (nonatomic,retain) NSArray * remoteAdditionalLeadingNavigationBarButtonItems;                             //@synthesize remoteAdditionalLeadingNavigationBarButtonItems=_remoteAdditionalLeadingNavigationBarButtonItems - In the implementation block
@property (nonatomic,retain) NSArray * remoteAdditionalTrailingNavigationBarButtonItems;                            //@synthesize remoteAdditionalTrailingNavigationBarButtonItems=_remoteAdditionalTrailingNavigationBarButtonItems - In the implementation block
@property (assign,nonatomic) BOOL shouldDelayRemoteViewController;                                                  //@synthesize shouldDelayRemoteViewController=_shouldDelayRemoteViewController - In the implementation block
@property (nonatomic,retain) _UIResilientRemoteViewContainerViewController * remoteViewController;                  //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (assign,nonatomic,__weak) DOCDocBrowserVC_UIActivityViewController * activityViewController;              //@synthesize activityViewController=_activityViewController - In the implementation block
@property (assign,nonatomic,__weak) UIPresentationController * adaptivePresentationController;                      //@synthesize adaptivePresentationController=_adaptivePresentationController - In the implementation block
@property (nonatomic,retain) id<DOCServiceDocumentBrowserViewControllerInterface> serviceProxy;                     //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serviceQueue;                                                       //@synthesize serviceQueue=_serviceQueue - In the implementation block
@property (nonatomic,retain) DOCConfiguration * configuration;                                                      //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSArray * additionalToolbarButtonItems; 
@property (nonatomic,copy) UIColor * createButtonColor;                                                             //@synthesize createButtonColor=_createButtonColor - In the implementation block
@property (nonatomic,copy) UIColor * badgeTintColor;                                                                //@synthesize badgeTintColor=_badgeTintColor - In the implementation block
@property (nonatomic,copy) UIColor * inBrowserTintColor;                                                            //@synthesize inBrowserTintColor=_inBrowserTintColor - In the implementation block
@property (nonatomic,copy) UIColor * sortingBackgroundColor;                                                        //@synthesize sortingBackgroundColor=_sortingBackgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * itemTitleColor;                                                                //@synthesize itemTitleColor=_itemTitleColor - In the implementation block
@property (nonatomic,copy) UIColor * itemSubtitleColor;                                                             //@synthesize itemSubtitleColor=_itemSubtitleColor - In the implementation block
@property (assign,nonatomic) double createButtonAspectRatio; 
@property (nonatomic,copy) NSString * createButtonTitle; 
@property (nonatomic,retain) UIColor * backgroundTintColor; 
@property (assign,nonatomic,__weak) id<UIDocumentBrowserViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsDocumentCreation;                                                           //@synthesize allowsDocumentCreation=_allowsDocumentCreation - In the implementation block
@property (assign,nonatomic) BOOL allowsPickingMultipleItems;                                                       //@synthesize allowsPickingMultipleItems=_allowsPickingMultipleItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allowedContentTypes; 
@property (nonatomic,copy,readonly) NSArray * recentDocumentsContentTypes; 
@property (assign,nonatomic) BOOL shouldShowFileExtensions;                                                         //@synthesize shouldShowFileExtensions=_shouldShowFileExtensions - In the implementation block
@property (nonatomic,retain) NSArray * additionalLeadingNavigationBarButtonItems;                                   //@synthesize additionalLeadingNavigationBarButtonItems=_additionalLeadingNavigationBarButtonItems - In the implementation block
@property (nonatomic,retain) NSArray * additionalTrailingNavigationBarButtonItems;                                  //@synthesize additionalTrailingNavigationBarButtonItems=_additionalTrailingNavigationBarButtonItems - In the implementation block
@property (nonatomic,copy) NSArray * customActions;                                                                 //@synthesize customActions=_customActions - In the implementation block
@property (assign,nonatomic) unsigned long long browserUserInterfaceStyle; 
@property (nonatomic,copy) NSString * localizedCreateDocumentActionTitle; 
@property (assign,nonatomic) double defaultDocumentAspectRatio; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
@property (readonly) DOCAppearance * effectiveAppearance; 
+(id)placeholderURLForDownloadsFolder;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<UIDocumentBrowserViewControllerDelegate>)delegate;
-(void)setDelegate:(id<UIDocumentBrowserViewControllerDelegate>)arg1 ;
-(NSOperationQueue *)serviceQueue;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setConfiguration:(DOCConfiguration *)arg1 ;
-(DOCConfiguration *)configuration;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)becomeFirstResponder;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(long long)preferredStatusBarStyle;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2 ;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(id)keyCommands;
-(_UIResilientRemoteViewContainerViewController *)remoteViewController;
-(void)setAllowsPickingMultipleItems:(BOOL)arg1 ;
-(BOOL)shouldShowFileExtensions;
-(void)setShouldShowFileExtensions:(BOOL)arg1 ;
-(unsigned long long)browserUserInterfaceStyle;
-(void)setBrowserUserInterfaceStyle:(unsigned long long)arg1 ;
-(void)setAllowsDocumentCreation:(BOOL)arg1 ;
-(void)setAdditionalTrailingNavigationBarButtonItems:(NSArray *)arg1 ;
-(void)revealDocumentAtURL:(id)arg1 importIfNeeded:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(UIPresentationController *)adaptivePresentationController;
-(void)setAdaptivePresentationController:(UIPresentationController *)arg1 ;
-(void)setRemoteViewController:(_UIResilientRemoteViewContainerViewController *)arg1 ;
-(void)updateBackgroundColor;
-(id<DOCServiceDocumentBrowserViewControllerInterface>)serviceProxy;
-(void)setServiceProxy:(id<DOCServiceDocumentBrowserViewControllerInterface>)arg1 ;
-(NSArray *)allowedContentTypes;
-(NSArray *)customActions;
-(void)setCustomActions:(NSArray *)arg1 ;
-(DOCDocBrowserVC_UIActivityViewController *)activityViewController;
-(void)setActivityViewController:(DOCDocBrowserVC_UIActivityViewController *)arg1 ;
-(void)_didTriggerCustomActionWithIdentifier:(id)arg1 onItems:(id)arg2 ;
-(void)_didTriggerBarButtonWithUUID:(id)arg1 ;
-(void)_didPickItems:(id)arg1 ;
-(void)_commitDocumentURLPreview:(id)arg1 ;
-(void)_didRequestDocumentCreationWithHandler:(/*^block*/id)arg1 ;
-(void)_didImportDocumentAtURL:(id)arg1 toDestinationItem:(id)arg2 ;
-(void)_failedToImportDocumentAtURL:(id)arg1 error:(id)arg2 ;
-(void)_updateRemoteBarButtonFrames:(id)arg1 forUUID:(id)arg2 ;
-(void)_presentActivityViewControllerForItems:(id)arg1 withPopoverTracker:(id)arg2 isContentManaged:(BOOL)arg3 additionalActivities:(id)arg4 activityProxy:(id)arg5 ;
-(id)initForOpeningFilesWithContentTypes:(id)arg1 ;
-(BOOL)supportsRemovableFileProvidersForConfiguration:(id)arg1 ;
-(id)recentDocumentsTypesFromInfoPlist;
-(void)__commonInit;
-(BOOL)allowsDocumentCreation;
-(BOOL)allowsPickingMultipleItems;
-(void)_showDocumentBrowserViewController:(BOOL)arg1 ;
-(void)effectiveAppearanceDidChange:(id)arg1 ;
-(void)remoteViewController:(id)arg1 didTerminateViewServiceWithError:(id)arg2 ;
-(void)_displayRemoteControllerIfNeeded;
-(void)_embedViewController:(id)arg1 ;
-(BOOL)shouldDelayRemoteViewController;
-(void)forwardHostSceneIdentifier:(id)arg1 ;
-(void)setShouldDelayRemoteViewController:(BOOL)arg1 ;
-(void)addOperationToServiceQueue:(/*^block*/id)arg1 ;
-(id)_symbolicDownloadsURLWrapper;
-(id)_sandboxingURLWrapperForURL:(id)arg1 readonly:(BOOL)arg2 error:(id*)arg3 ;
-(void)dismissAllPresentedViewControllers:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearCurrentOpenInteraction;
-(id)transitionControllerForDocumentAtURL:(id)arg1 ;
-(void)_importDocumentAtURL:(id)arg1 neighbourURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)importDocumentAtURL:(id)arg1 nextToDocumentAtURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)importDocumentAtURL:(id)arg1 mode:(unsigned long long)arg2 toCurrentBrowserLocationWithCompletion:(/*^block*/id)arg3 ;
-(void)_establishFirstResponderOnServiceSideForKeyCommand:(id)arg1 ;
-(void)_showErrorViewController;
-(void)_clearShownViewControllers;
-(void)getTrackingViews:(id*)arg1 remoteButtons:(id*)arg2 fromBarButtons:(id)arg3 ;
-(NSArray *)remoteAdditionalLeadingNavigationBarButtonItems;
-(NSArray *)remoteAdditionalTrailingNavigationBarButtonItems;
-(double)createButtonAspectRatio;
-(void)setCreateButtonAspectRatio:(double)arg1 ;
-(void)setDefaultDocumentAspectRatio:(double)arg1 ;
-(double)defaultDocumentAspectRatio;
-(void)setLocalizedCreateDocumentActionTitle:(NSString *)arg1 ;
-(NSString *)localizedCreateDocumentActionTitle;
-(UIColor *)backgroundTintColor;
-(void)setBackgroundTintColor:(UIColor *)arg1 ;
-(void)_embedDocumentBrowserViewController;
-(void)setAdditionalLeadingNavigationBarButtonItems:(NSArray *)arg1 ;
-(void)prepareItems:(id)arg1 forMode:(unsigned long long)arg2 usingBookmark:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_awakingNoOpKeyCommandWasPerformed:(id)arg1 ;
-(void)keyCommandWasPerformed:(id)arg1 ;
-(void)_displayActivityControllerWithItems:(id)arg1 popoverTracker:(id)arg2 isContentManaged:(BOOL)arg3 additionalActivities:(id)arg4 activityProxy:(id)arg5 ;
-(void)prepareItems:(id)arg1 usingBookmark:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(id)trackingViewForUUID:(id)arg1 ;
-(id)remoteBarButtonForUUID:(id)arg1 ;
-(void)didTapTryAgainInErrorViewController:(id)arg1 ;
-(void)dismissingKeyCommandWasPerformed:(id)arg1 ;
-(void)revealDocumentAtURL:(id)arg1 shouldImport:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)transitionControllerForDocumentURL:(id)arg1 ;
-(void)importDocumentAtURL:(id)arg1 byMoving:(BOOL)arg2 toCurrentBrowserLocationWithCompletion:(/*^block*/id)arg3 ;
-(NSArray *)recentDocumentsContentTypes;
-(void)setAdditionalToolbarButtonItems:(NSArray *)arg1 ;
-(void)setCreateButtonTitle:(NSString *)arg1 ;
-(NSString *)createButtonTitle;
-(void)setshouldShowFileExtensions:(BOOL)arg1 ;
-(void)_renameDocumentAtURL:(id)arg1 newName:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSArray *)additionalLeadingNavigationBarButtonItems;
-(NSArray *)additionalTrailingNavigationBarButtonItems;
-(NSArray *)leadingBarButtonTrackingViews;
-(void)setLeadingBarButtonTrackingViews:(NSArray *)arg1 ;
-(NSArray *)trailingBarButtonTrackingViews;
-(void)setTrailingBarButtonTrackingViews:(NSArray *)arg1 ;
-(void)setRemoteAdditionalLeadingNavigationBarButtonItems:(NSArray *)arg1 ;
-(void)setRemoteAdditionalTrailingNavigationBarButtonItems:(NSArray *)arg1 ;
-(void)setServiceQueue:(NSOperationQueue *)arg1 ;
-(UIColor *)createButtonColor;
-(void)setCreateButtonColor:(UIColor *)arg1 ;
-(UIColor *)badgeTintColor;
-(void)setBadgeTintColor:(UIColor *)arg1 ;
-(UIColor *)inBrowserTintColor;
-(void)setInBrowserTintColor:(UIColor *)arg1 ;
-(UIColor *)sortingBackgroundColor;
-(void)setSortingBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)itemTitleColor;
-(void)setItemTitleColor:(UIColor *)arg1 ;
-(UIColor *)itemSubtitleColor;
-(void)setItemSubtitleColor:(UIColor *)arg1 ;
@end

