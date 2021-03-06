/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUPhotosAlbumViewController.h>
#import <libobjc.A.dylib/PXAlbumStreamingOptionsViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PUVideoTrimQueueControllerDelegate.h>
#import <libobjc.A.dylib/PUPhotoStreamComposeServiceDelegate.h>

@protocol PUCloudSharedAlbumViewControllerDelegate;
@class PUPhotosPickerViewController, PUVideoTrimQueueController, PUPhotoStreamComposeServiceViewController, UIViewController, NSArray, UIBarButtonItem, UISegmentedControl, PLCloudSharedAlbum, NSString;

@interface PUCloudSharedAlbumViewController : PUPhotosAlbumViewController <PXAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate, PUVideoTrimQueueControllerDelegate, PUPhotoStreamComposeServiceDelegate> {

	PUPhotosPickerViewController* _activePhotosPickerViewController;
	PUVideoTrimQueueController* _trimController;
	PUPhotoStreamComposeServiceViewController* _composeServiceController;
	BOOL _displayingOptions;
	BOOL __canContributeToCloudSharedAlbum;
	id<PUCloudSharedAlbumViewControllerDelegate> _delegate;
	UIViewController* __optionsViewController;
	UIViewController* __optionsPopoverRootViewController;
	NSArray* __transitioningOptionsViewControllers;
	UIBarButtonItem* __optionsBarButtonItem;
	UIBarButtonItem* __optionsBarButtonSpacerItem;
	UISegmentedControl* __switcherSegmentedControl;
	UIBarButtonItem* __switcherBarButtonItem;
	long long __selectedItemIndex;

}

@property (setter=_setOptionsViewController:,nonatomic,retain) UIViewController * _optionsViewController;                                    //@synthesize _optionsViewController=__optionsViewController - In the implementation block
@property (setter=_setOptionsPopoverRootViewController:,nonatomic,retain) UIViewController * _optionsPopoverRootViewController;              //@synthesize _optionsPopoverRootViewController=__optionsPopoverRootViewController - In the implementation block
@property (setter=_setTransitioningOptionsViewControllers:,nonatomic,retain) NSArray * _transitioningOptionsViewControllers;                 //@synthesize _transitioningOptionsViewControllers=__transitioningOptionsViewControllers - In the implementation block
@property (setter=_setOptionsBarButtonItem:,nonatomic,retain) UIBarButtonItem * _optionsBarButtonItem;                                       //@synthesize _optionsBarButtonItem=__optionsBarButtonItem - In the implementation block
@property (setter=_setOptionsBarButtonSpacerItem:,nonatomic,retain) UIBarButtonItem * _optionsBarButtonSpacerItem;                           //@synthesize _optionsBarButtonSpacerItem=__optionsBarButtonSpacerItem - In the implementation block
@property (assign,setter=_setCanContributeToCloudSharedAlbum:,nonatomic) BOOL _canContributeToCloudSharedAlbum;                              //@synthesize _canContributeToCloudSharedAlbum=__canContributeToCloudSharedAlbum - In the implementation block
@property (setter=_setSwitcherSegmentedControl:,nonatomic,retain) UISegmentedControl * _switcherSegmentedControl;                            //@synthesize _switcherSegmentedControl=__switcherSegmentedControl - In the implementation block
@property (setter=_setSwitcherBarButtonItem:,nonatomic,retain) UIBarButtonItem * _switcherBarButtonItem;                                     //@synthesize _switcherBarButtonItem=__switcherBarButtonItem - In the implementation block
@property (assign,setter=_setSelectedItemIndex:,nonatomic) long long _selectedItemIndex;                                                     //@synthesize _selectedItemIndex=__selectedItemIndex - In the implementation block
@property (assign,nonatomic,__weak) id<PUCloudSharedAlbumViewControllerDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PLCloudSharedAlbum * album; 
@property (assign,setter=setDisplayingOptions:,getter=isDisplayingOptions,nonatomic) BOOL displayingOptions;                                 //@synthesize displayingOptions=_displayingOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PUCloudSharedAlbumViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PUCloudSharedAlbumViewControllerDelegate>)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_collectionView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(BOOL)_canContributeToCloudSharedAlbum;
-(BOOL)canDeleteContent;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(id)_suppressionContexts;
-(void)albumStreamingOptionsViewController:(id)arg1 didCompleteWithReason:(int)arg2 ;
-(BOOL)shouldShowToolbar;
-(id)newToolbarItems;
-(void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5 ;
-(void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2 ;
-(void)photoStreamComposeServiceDidCancel:(id)arg1 ;
-(void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2 ;
-(void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2 ;
-(void)setAlbum:(id)arg1 existingFetchResult:(id)arg2 ;
-(BOOL)canAddToOtherAlbumContent;
-(BOOL)wantsAddContentInToolbar;
-(BOOL)wantsAddPlaceholderAtEndOfSection:(long long)arg1 ;
-(void)didSelectAddPlaceholderInSection:(long long)arg1 ;
-(BOOL)shouldShowTabBar;
-(BOOL)wantsGlobalFooter;
-(id)globalFooterSubtitle;
-(BOOL)_shouldShowOptionsSwitcherInToolbar;
-(BOOL)_canDisplayOptions;
-(void)updatePeripheralInterfaceAnimated:(BOOL)arg1 ;
-(void)_updateOptionsView;
-(void)_updateOptionsViewInsets;
-(void)_optionsBarButtonItemPressed:(id)arg1 ;
-(void)_presentOptionsPopoverFromBarButtonItem:(id)arg1 ;
-(void)_dismissOptionsPopoverAnimated:(BOOL)arg1 ;
-(void)_handleSwitcherSegmentedControl:(id)arg1 ;
-(void)setDisplayingOptions:(BOOL)arg1 ;
-(id)_newOptionsViewController;
-(void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2 ;
-(BOOL)isDisplayingOptions;
-(UIViewController *)_optionsViewController;
-(void)_setOptionsViewController:(id)arg1 ;
-(UIViewController *)_optionsPopoverRootViewController;
-(void)_setOptionsPopoverRootViewController:(id)arg1 ;
-(NSArray *)_transitioningOptionsViewControllers;
-(void)_setTransitioningOptionsViewControllers:(id)arg1 ;
-(UIBarButtonItem *)_optionsBarButtonItem;
-(void)_setOptionsBarButtonItem:(id)arg1 ;
-(UIBarButtonItem *)_optionsBarButtonSpacerItem;
-(void)_setOptionsBarButtonSpacerItem:(id)arg1 ;
-(void)_setCanContributeToCloudSharedAlbum:(BOOL)arg1 ;
-(UISegmentedControl *)_switcherSegmentedControl;
-(void)_setSwitcherSegmentedControl:(id)arg1 ;
-(UIBarButtonItem *)_switcherBarButtonItem;
-(void)_setSwitcherBarButtonItem:(id)arg1 ;
-(long long)_selectedItemIndex;
-(void)_setSelectedItemIndex:(long long)arg1 ;
@end

