/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <libobjc.A.dylib/VSTableHeaderFooterViewDelegate.h>
#import <libobjc.A.dylib/VSIdentityProviderPickerViewController.h>

@protocol VSIdentityProviderPickerViewControllerDelegate;
@class NSArray, NSString, UISearchController, VSOnboardingInfoCenter, VSIdentityProviderFilter, VSSearchBarDelegate, VSIdentityProviderTableViewDataSource, VSFontCenter, VSIdentityProvider;

@interface VSIdentityProviderPickerViewController_iOS : UITableViewController <UISearchControllerDelegate, VSTableHeaderFooterViewDelegate, VSIdentityProviderPickerViewController> {

	BOOL _cancellationAllowed;
	BOOL _dismissingSearchDueToSelection;
	id<VSIdentityProviderPickerViewControllerDelegate> _delegate;
	NSArray* _identityProviders;
	unsigned long long _additionalProvidersMode;
	NSString* _requestingAppDisplayName;
	NSString* _resourceTitle;
	UISearchController* _searchController;
	VSOnboardingInfoCenter* _onboardingInfoCenter;
	VSIdentityProviderFilter* _filter;
	VSSearchBarDelegate* _searchBarDelegate;
	VSIdentityProviderTableViewDataSource* _unfilteredDataSource;
	VSIdentityProviderTableViewDataSource* _filteredDataSource;
	VSFontCenter* _fontCenter;
	VSIdentityProvider* _selectedIdentityProvider;

}

@property (nonatomic,retain) UISearchController * searchController;                                                    //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) VSOnboardingInfoCenter * onboardingInfoCenter;                                            //@synthesize onboardingInfoCenter=_onboardingInfoCenter - In the implementation block
@property (nonatomic,retain) VSIdentityProviderFilter * filter;                                                        //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) VSSearchBarDelegate * searchBarDelegate;                                                  //@synthesize searchBarDelegate=_searchBarDelegate - In the implementation block
@property (nonatomic,retain) VSIdentityProviderTableViewDataSource * unfilteredDataSource;                             //@synthesize unfilteredDataSource=_unfilteredDataSource - In the implementation block
@property (nonatomic,retain) VSIdentityProviderTableViewDataSource * filteredDataSource;                               //@synthesize filteredDataSource=_filteredDataSource - In the implementation block
@property (nonatomic,retain) VSFontCenter * fontCenter;                                                                //@synthesize fontCenter=_fontCenter - In the implementation block
@property (assign,getter=isDismissingSearchDueToSelection,nonatomic) BOOL dismissingSearchDueToSelection;              //@synthesize dismissingSearchDueToSelection=_dismissingSearchDueToSelection - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * selectedIdentityProvider;                                            //@synthesize selectedIdentityProvider=_selectedIdentityProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<VSIdentityProviderPickerViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed;                                    //@synthesize cancellationAllowed=_cancellationAllowed - In the implementation block
@property (nonatomic,copy) NSArray * identityProviders;                                                                //@synthesize identityProviders=_identityProviders - In the implementation block
@property (assign,nonatomic) unsigned long long additionalProvidersMode;                                               //@synthesize additionalProvidersMode=_additionalProvidersMode - In the implementation block
@property (nonatomic,copy) NSString * requestingAppDisplayName;                                                        //@synthesize requestingAppDisplayName=_requestingAppDisplayName - In the implementation block
@property (nonatomic,copy) NSString * resourceTitle;                                                                   //@synthesize resourceTitle=_resourceTitle - In the implementation block
-(id<VSIdentityProviderPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VSIdentityProviderPickerViewControllerDelegate>)arg1 ;
-(void)setFilter:(VSIdentityProviderFilter *)arg1 ;
-(VSIdentityProviderFilter *)filter;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)_cancelButtonPressed:(id)arg1 ;
-(void)setUnfilteredDataSource:(VSIdentityProviderTableViewDataSource *)arg1 ;
-(VSIdentityProviderTableViewDataSource *)unfilteredDataSource;
-(NSString *)requestingAppDisplayName;
-(void)setRequestingAppDisplayName:(NSString *)arg1 ;
-(void)setSearchBarDelegate:(VSSearchBarDelegate *)arg1 ;
-(VSSearchBarDelegate *)searchBarDelegate;
-(VSFontCenter *)fontCenter;
-(void)setFontCenter:(VSFontCenter *)arg1 ;
-(BOOL)isCancellationAllowed;
-(void)setCancellationAllowed:(BOOL)arg1 ;
-(void)setIdentityProviders:(NSArray *)arg1 ;
-(void)deselectSelectedProviderAnimated:(BOOL)arg1 ;
-(void)setResourceTitle:(NSString *)arg1 ;
-(void)setAdditionalProvidersMode:(unsigned long long)arg1 ;
-(void)didInvalidateIntrinsicContentSizeForTableHeaderFooterView:(id)arg1 ;
-(void)_updateTableHeaderTitle;
-(id)_titleForTableHeaderView;
-(unsigned long long)additionalProvidersMode;
-(NSString *)resourceTitle;
-(VSOnboardingInfoCenter *)onboardingInfoCenter;
-(void)_didPickIdentityProvider:(id)arg1 ;
-(void)_didPickAdditionalIdentityProviders;
-(BOOL)isDismissingSearchDueToSelection;
-(VSIdentityProvider *)selectedIdentityProvider;
-(void)_performSelectionForIdentityProvider:(id)arg1 ;
-(void)setSelectedIdentityProvider:(VSIdentityProvider *)arg1 ;
-(void)setDismissingSearchDueToSelection:(BOOL)arg1 ;
-(VSIdentityProviderTableViewDataSource *)filteredDataSource;
-(id)titleForTableFooterView;
-(NSArray *)identityProviders;
-(void)_showAboutPrivacy:(id)arg1 ;
-(void)setOnboardingInfoCenter:(VSOnboardingInfoCenter *)arg1 ;
-(void)setFilteredDataSource:(VSIdentityProviderTableViewDataSource *)arg1 ;
@end

