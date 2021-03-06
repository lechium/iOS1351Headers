/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MarkupUI/MarkupUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MUContentViewControllerDelegate.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <UIKit/UIToolbarDelegate.h>
#import <libobjc.A.dylib/PKRulerHostingDelegate.h>

@protocol MUContentViewControllerProtocol, MarkupViewControllerDelegate;
@class UIColor, UINavigationBar, UIViewController, NSString, NSData, UIView, AKToolbarView, NSLayoutConstraint, UINavigationItem, UIBarButtonItem, UIImage, NSUndoManager, UIImageView, PDFDocument, PDFView, UIScrollView, AKController;

@interface MarkupViewController : UIViewController <MUContentViewControllerDelegate, UINavigationBarDelegate, UIToolbarDelegate, PKRulerHostingDelegate> {

	UIColor* _backgroundColor;
	UIColor* _toolbarItemTintColor;
	UIColor* _toolbarTintColor;
	UIColor* _navBarTitleColor;
	BOOL _pencilAlwaysDraws;
	BOOL _toolbarHidden;
	BOOL _thumbnailViewHidden;
	BOOL _showThumbnailViewForMultipage;
	BOOL _navigationModeHorizontal;
	BOOL _needToPerformFullTeardown;
	BOOL _needToPerformDocumentClosedTeardown;
	BOOL _observingAKCurrentPageIndex;
	BOOL _alreadyLoggedSavingForThisDocument;
	BOOL _useFancyTransition;
	BOOL _isAnimatingMarkupExtensionTransition;
	BOOL _userDidCancel;
	BOOL _showAsFormSheet;
	BOOL _encryptPrivateMetadata;
	BOOL _forcesPDFViewTopAlignment;
	BOOL _shapeDetectionEnabled;
	BOOL _allowShakeToUndo;
	BOOL _centersIgnoringContentInsets;
	BOOL _showShareButtonInToolbar;
	long long _toolbarPosition;
	UINavigationBar* _navBar;
	UIViewController*<MUContentViewControllerProtocol> _contentViewController;
	NSString* _sourceContentType;
	id _sourceContent;
	id _digestedSourceContent;
	NSData* _archivedModelData;
	double _initialContentScale;
	UIView* _toolbar;
	AKToolbarView* _modernToolbar;
	NSLayoutConstraint* _toolbarTopConstraint;
	NSLayoutConstraint* _toolbarTopAttachedConstraint;
	NSLayoutConstraint* _toolbarBottomConstraint;
	UINavigationItem* _navItem;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _doneButton;
	UIImage* _placeholderImage;
	NSString* _preferredFileDisplayName;
	UIView* _contentContainerView;
	UIView* _transitionDimmingView;
	UIView* _whiteView;
	NSString* _hostProcessBundleIdentifier;
	NSUndoManager* _akUndoManager;
	id<MarkupViewControllerDelegate> _delegate;
	UIImageView* _placeholderImageView;
	unsigned long long _inkStyle;

}

@property (retain) UIViewController*<MUContentViewControllerProtocol> contentViewController;               //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign) BOOL needToPerformFullTeardown;                                                         //@synthesize needToPerformFullTeardown=_needToPerformFullTeardown - In the implementation block
@property (assign) BOOL needToPerformDocumentClosedTeardown;                                               //@synthesize needToPerformDocumentClosedTeardown=_needToPerformDocumentClosedTeardown - In the implementation block
@property (getter=isObservingAKCurrentPageIndex) BOOL observingAKCurrentPageIndex;                         //@synthesize observingAKCurrentPageIndex=_observingAKCurrentPageIndex - In the implementation block
@property (retain) NSString * sourceContentType;                                                           //@synthesize sourceContentType=_sourceContentType - In the implementation block
@property (nonatomic,retain) id sourceContent;                                                             //@synthesize sourceContent=_sourceContent - In the implementation block
@property (retain) id digestedSourceContent;                                                               //@synthesize digestedSourceContent=_digestedSourceContent - In the implementation block
@property (retain) NSData * archivedModelData;                                                             //@synthesize archivedModelData=_archivedModelData - In the implementation block
@property (assign) double initialContentScale;                                                             //@synthesize initialContentScale=_initialContentScale - In the implementation block
@property (nonatomic,retain) UIView * toolbar;                                                             //@synthesize toolbar=_toolbar - In the implementation block
@property (retain) AKToolbarView * modernToolbar;                                                          //@synthesize modernToolbar=_modernToolbar - In the implementation block
@property (retain) NSLayoutConstraint * toolbarTopConstraint;                                              //@synthesize toolbarTopConstraint=_toolbarTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * toolbarTopAttachedConstraint;                                      //@synthesize toolbarTopAttachedConstraint=_toolbarTopAttachedConstraint - In the implementation block
@property (retain) NSLayoutConstraint * toolbarBottomConstraint;                                           //@synthesize toolbarBottomConstraint=_toolbarBottomConstraint - In the implementation block
@property (nonatomic,retain) UINavigationItem * navItem;                                                   //@synthesize navItem=_navItem - In the implementation block
@property (retain) UIBarButtonItem * cancelButton;                                                         //@synthesize cancelButton=_cancelButton - In the implementation block
@property (retain) UIBarButtonItem * doneButton;                                                           //@synthesize doneButton=_doneButton - In the implementation block
@property (retain) UIImage * placeholderImage;                                                             //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) BOOL alreadyLoggedSavingForThisDocument;                                      //@synthesize alreadyLoggedSavingForThisDocument=_alreadyLoggedSavingForThisDocument - In the implementation block
@property (nonatomic,copy) NSString * preferredFileDisplayName;                                            //@synthesize preferredFileDisplayName=_preferredFileDisplayName - In the implementation block
@property (retain) UIView * contentContainerView;                                                          //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (retain) UIView * transitionDimmingView;                                                         //@synthesize transitionDimmingView=_transitionDimmingView - In the implementation block
@property (retain) UIView * whiteView;                                                                     //@synthesize whiteView=_whiteView - In the implementation block
@property (assign) BOOL useFancyTransition;                                                                //@synthesize useFancyTransition=_useFancyTransition - In the implementation block
@property (assign) BOOL isAnimatingMarkupExtensionTransition;                                              //@synthesize isAnimatingMarkupExtensionTransition=_isAnimatingMarkupExtensionTransition - In the implementation block
@property (assign) BOOL userDidCancel;                                                                     //@synthesize userDidCancel=_userDidCancel - In the implementation block
@property (assign) BOOL showAsFormSheet;                                                                   //@synthesize showAsFormSheet=_showAsFormSheet - In the implementation block
@property (copy) UIColor * backgroundColor; 
@property (copy) UIColor * toolbarItemTintColor; 
@property (copy) UIColor * toolbarTintColor; 
@property (copy) UIColor * navBarTitleColor; 
@property (readonly) BOOL isUsedOnDarkBackground; 
@property (assign) BOOL encryptPrivateMetadata;                                                            //@synthesize encryptPrivateMetadata=_encryptPrivateMetadata - In the implementation block
@property (nonatomic,copy) NSString * hostProcessBundleIdentifier;                                         //@synthesize hostProcessBundleIdentifier=_hostProcessBundleIdentifier - In the implementation block
@property (readonly) PDFDocument * pdfDocument; 
@property (readonly) PDFView * pdfView; 
@property (assign,nonatomic) unsigned long long currentPDFPageIndex; 
@property (assign,nonatomic) BOOL forcesPDFViewTopAlignment;                                               //@synthesize forcesPDFViewTopAlignment=_forcesPDFViewTopAlignment - In the implementation block
@property (assign,getter=isShapeDetectionEnabled,nonatomic) BOOL shapeDetectionEnabled;                    //@synthesize shapeDetectionEnabled=_shapeDetectionEnabled - In the implementation block
@property (nonatomic,retain) NSUndoManager * akUndoManager;                                                //@synthesize akUndoManager=_akUndoManager - In the implementation block
@property (assign,nonatomic) BOOL allowShakeToUndo;                                                        //@synthesize allowShakeToUndo=_allowShakeToUndo - In the implementation block
@property (assign,nonatomic,__weak) id<MarkupViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL centersIgnoringContentInsets;                                            //@synthesize centersIgnoringContentInsets=_centersIgnoringContentInsets - In the implementation block
@property (assign,nonatomic) BOOL showShareButtonInToolbar;                                                //@synthesize showShareButtonInToolbar=_showShareButtonInToolbar - In the implementation block
@property (nonatomic,readonly) UIScrollView * contentViewScrollView; 
@property (retain) UIImageView * placeholderImageView;                                                     //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (assign) unsigned long long inkStyle;                                                            //@synthesize inkStyle=_inkStyle - In the implementation block
@property (readonly) CGSize adjustedSourceImageSize; 
@property (nonatomic,readonly) AKController * annotationController; 
@property (assign,getter=isToolbarHidden,nonatomic) BOOL toolbarHidden;                                    //@synthesize toolbarHidden=_toolbarHidden - In the implementation block
@property (assign,nonatomic) long long toolbarPosition;                                                    //@synthesize toolbarPosition=_toolbarPosition - In the implementation block
@property (nonatomic,retain) UINavigationBar * navBar;                                                     //@synthesize navBar=_navBar - In the implementation block
@property (assign,getter=isThumbnailViewHidden,nonatomic) BOOL thumbnailViewHidden;                        //@synthesize thumbnailViewHidden=_thumbnailViewHidden - In the implementation block
@property (assign,nonatomic) BOOL showThumbnailViewForMultipage;                                           //@synthesize showThumbnailViewForMultipage=_showThumbnailViewForMultipage - In the implementation block
@property (assign,nonatomic) BOOL allEditingDisabled; 
@property (assign,nonatomic) BOOL annotationEditingEnabled; 
@property (assign,nonatomic) BOOL pencilAlwaysDraws;                                                       //@synthesize pencilAlwaysDraws=_pencilAlwaysDraws - In the implementation block
@property (assign,getter=isNavigationModeHorizontal,nonatomic) BOOL navigationModeHorizontal;              //@synthesize navigationModeHorizontal=_navigationModeHorizontal - In the implementation block
@property (nonatomic,readonly) NSString * outputType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isInLowMemoryEnvironment;
+(id)markupBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 ;
+(BOOL)hasPrivateImageMetadata:(id)arg1 ;
+(id)cleanImageMetadataFromData:(id)arg1 ;
+(double)_maxImageDimensionInView;
+(id)supportedOutputTypes;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<MarkupViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MarkupViewControllerDelegate>)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(void)setData:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setFileURL:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(NSString *)outputType;
-(void)_commonInit;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setContentViewController:(UIViewController*<MUContentViewControllerProtocol>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UIViewController*<MUContentViewControllerProtocol>)contentViewController;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setToolbarTintColor:(UIColor *)arg1 ;
-(BOOL)isToolbarHidden;
-(long long)positionForBar:(id)arg1 ;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(UIView *)toolbar;
-(long long)preferredStatusBarStyle;
-(void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setToolbarHidden:(BOOL)arg1 ;
-(void)setToolbar:(UIView *)arg1 ;
-(id)undoManager;
-(PDFDocument *)pdfDocument;
-(void)_cancel;
-(void)done:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(PDFView *)pdfView;
-(AKController *)annotationController;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)setAnnotationEditingEnabled:(BOOL)arg1 ;
-(id)popoverPresentingViewControllerForAnnotationController:(id)arg1 ;
-(void)editCheckpointReachedForAnnotationController:(id)arg1 ;
-(void)annotationController:(id)arg1 detectedEditOfType:(unsigned long long)arg2 ;
-(void)editDetectedForAnnotationController:(id)arg1 ;
-(void)penStrokeCompletedForAnnotationController:(id)arg1 ;
-(void)controllerWillShowSignatureCaptureView:(id)arg1 ;
-(void)controllerWillDismissSignatureCaptureView:(id)arg1 ;
-(void)controllerWillShowSignatureManagerView:(id)arg1 ;
-(void)controllerWillDismissSignatureManagerView:(id)arg1 ;
-(id)rulerHostingView;
-(BOOL)rulerHostWantsSharedRuler;
-(void)revert;
-(BOOL)annotationEditingEnabled;
-(UIView *)contentContainerView;
-(BOOL)userDidCancel;
-(id)_effectiveBackgroundColor;
-(UINavigationItem *)navItem;
-(void)setNavItem:(UINavigationItem *)arg1 ;
-(UIColor *)toolbarTintColor;
-(void)setShapeDetectionEnabled:(BOOL)arg1 ;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(UINavigationBar *)navBar;
-(BOOL)pencilAlwaysDraws;
-(void)setAllEditingDisabled:(BOOL)arg1 ;
-(void)setPencilAlwaysDraws:(BOOL)arg1 ;
-(void)duplicate:(id)arg1 ;
-(void)editTextAnnotation:(id)arg1 ;
-(BOOL)isUsedOnDarkBackground;
-(BOOL)allEditingDisabled;
-(UIImageView *)placeholderImageView;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(BOOL)writeToURL:(id)arg1 embeddingSourceImageAndEditModel:(BOOL)arg2 error:(id*)arg3 ;
-(id)createArchivedModelData;
-(void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3 ;
-(void)setCentersIgnoringContentInsets:(BOOL)arg1 ;
-(void)setShowShareButtonInToolbar:(BOOL)arg1 ;
-(void)setEncryptPrivateMetadata:(BOOL)arg1 ;
-(void)setData:(id)arg1 withArchivedModelData:(id)arg2 ;
-(id)dataRepresentationEmbeddingSourceImageAndEditModel:(BOOL)arg1 error:(id*)arg2 ;
-(void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2 ;
-(void)setContentContainerView:(UIView *)arg1 ;
-(void)setUserDidCancel:(BOOL)arg1 ;
-(void)setInkStyle:(unsigned long long)arg1 ;
-(unsigned long long)inkStyle;
-(void)setData:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3 ;
-(BOOL)_useLegacyToolbar;
-(void)setNeedToPerformFullTeardown:(BOOL)arg1 ;
-(void)fullTeardown;
-(BOOL)needToPerformDocumentClosedTeardown;
-(void)documentDidCloseTeardown;
-(void)setNeedToPerformDocumentClosedTeardown:(BOOL)arg1 ;
-(BOOL)needToPerformFullTeardown;
-(NSLayoutConstraint *)toolbarTopConstraint;
-(NSLayoutConstraint *)toolbarTopAttachedConstraint;
-(NSLayoutConstraint *)toolbarBottomConstraint;
-(void)setToolbarTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolbarTopAttachedConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolbarBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_stopObservingAnnotationController;
-(void)setAkUndoManager:(NSUndoManager *)arg1 ;
-(void)setSourceContent:(id)arg1 ;
-(void)setDigestedSourceContent:(id)arg1 ;
-(void)setSourceContentType:(NSString *)arg1 ;
-(UIView *)transitionDimmingView;
-(void)setTransitionDimmingView:(UIView *)arg1 ;
-(UIView *)whiteView;
-(void)setWhiteView:(UIView *)arg1 ;
-(void)setAlreadyLoggedSavingForThisDocument:(BOOL)arg1 ;
-(void)_toolbarShareButtonTapped:(id)arg1 ;
-(void)_updateundoBarButtonWithController:(id)arg1 ;
-(void)adjustContentInsetsForBars;
-(NSUndoManager *)akUndoManager;
-(void)_updateAppearanceForTraitCollection:(id)arg1 ;
-(NSString *)hostProcessBundleIdentifier;
-(void)_setLegacyToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateConstraintsForBarPosition:(long long)arg1 ;
-(void)setThumbnailViewHidden:(BOOL)arg1 ;
-(void)setNavigationModeHorizontal:(BOOL)arg1 ;
-(void)_presentPlaceholderImage;
-(void)_cleanupPlaceholderImage;
-(void)_setFileURL:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_updateAndLoadSourceContent:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setImage:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3 ;
-(void)_setData:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(NSString *)sourceContentType;
-(BOOL)_writeToDataConsumer:(CGDataConsumerRef)arg1 embedSourceImageAndEditModel:(BOOL)arg2 error:(id*)arg3 ;
-(void)finalizeCrop;
-(void)_saveEditing:(id)arg1 ;
-(BOOL)useFancyTransition;
-(id)digestedSourceContent;
-(BOOL)encryptPrivateMetadata;
-(void)willBeginLoadingNewDocument;
-(void)setSourceContent:(id)arg1 withArchivedModelData:(id)arg2 ;
-(void)_setupInitialBaseModelScaleFactorWithScreenSize:(CGSize)arg1 windowDecorationSize:(CGSize)arg2 ;
-(void)restoreToolModeForContentType;
-(void)_loadSourceContentWithCompletion:(/*^block*/id)arg1 ;
-(void)_bailFailedAnimateEnterMarkup;
-(id)sourceContent;
-(void)setHostProcessBundleIdentifier:(NSString *)arg1 ;
-(void)_installContentViewControllerForUTI:(id)arg1 ;
-(BOOL)forcesPDFViewTopAlignment;
-(void)setForcesPDFViewTopAlignment:(BOOL)arg1 ;
-(void)_setupAnnotationController;
-(void)_startObservingAnnotationController;
-(NSString *)preferredFileDisplayName;
-(void)setPreferredFileDisplayName:(NSString *)arg1 ;
-(BOOL)_sourceImageMayContainBaseImageAndModel;
-(void)setArchivedModelData:(NSData *)arg1 ;
-(UIScrollView *)contentViewScrollView;
-(void)setInitialContentScale:(double)arg1 ;
-(BOOL)_shouldShowUndoRedoButtonsInNavigationBar;
-(BOOL)isObservingAKCurrentPageIndex;
-(void)setObservingAKCurrentPageIndex:(BOOL)arg1 ;
-(NSData *)archivedModelData;
-(BOOL)isThumbnailViewHidden;
-(BOOL)centersIgnoringContentInsets;
-(BOOL)isNavigationModeHorizontal;
-(BOOL)isShapeDetectionEnabled;
-(AKToolbarView *)modernToolbar;
-(BOOL)showShareButtonInToolbar;
-(id)_effectiveToolbarTintColor;
-(id)_effectiveToolbarItemTintColor;
-(long long)toolbarPosition;
-(void)_updateNavBarProperties;
-(BOOL)showAsFormSheet;
-(id)_effectiveNavBarTitleColor;
-(id)_markupBlackColor;
-(UIColor *)toolbarItemTintColor;
-(UIColor *)navBarTitleColor;
-(BOOL)allowShakeToUndo;
-(double)initialContentScale;
-(UIEdgeInsets)sketchOverlayInsets;
-(id)filteredToolbarItemsForItems:(id)arg1 fromController:(id)arg2 ;
-(id)undoManagerForContentViewController:(id)arg1 ;
-(double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forContentViewController:(id)arg2 ;
-(void)positionSketchOverlay:(id)arg1 forContentViewController:(id)arg2 ;
-(id)annotationControllerOfContentViewController:(id)arg1 willSetToolbarItems:(id)arg2 ;
-(BOOL)contentViewController:(id)arg1 shouldHandleURL:(id)arg2 ;
-(CGSize)adjustedSourceImageSize;
-(void)setToolbarPosition:(long long)arg1 ;
-(void)setShowThumbnailViewForMultipage:(BOOL)arg1 ;
-(void)setImage:(id)arg1 withArchivedModelData:(id)arg2 ;
-(unsigned long long)currentPDFPageIndex;
-(void)setCurrentPDFPageIndex:(unsigned long long)arg1 ;
-(void)_createCancelDoneNavBar;
-(void)setToolbarItemTintColor:(UIColor *)arg1 ;
-(void)setNavBarTitleColor:(UIColor *)arg1 ;
-(long long)toolbarController:(id)arg1 positionForBar:(id)arg2 ;
-(BOOL)showThumbnailViewForMultipage;
-(void)setModernToolbar:(AKToolbarView *)arg1 ;
-(BOOL)alreadyLoggedSavingForThisDocument;
-(void)setUseFancyTransition:(BOOL)arg1 ;
-(BOOL)isAnimatingMarkupExtensionTransition;
-(void)setIsAnimatingMarkupExtensionTransition:(BOOL)arg1 ;
-(void)setShowAsFormSheet:(BOOL)arg1 ;
-(void)setAllowShakeToUndo:(BOOL)arg1 ;
@end

