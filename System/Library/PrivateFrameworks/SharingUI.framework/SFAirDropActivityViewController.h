/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SharingUI/SharingUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/SFCollectionViewDelegateLayout.h>
#import <libobjc.A.dylib/SFAirDropBrowserBatchDelegate.h>
#import <libobjc.A.dylib/SFPersonCollectionViewCellDelegate.h>
#import <libobjc.A.dylib/SFWirelessSettingsControllerDelegate.h>

@protocol SFAirDropActivityViewControllerDelegate;
@class NSString, UILabel, UIButton, NSLayoutConstraint, SFAirDropIconView, UITextView, SFAirDropActiveIconView, NSArray, UICollectionView, SFCollectionViewLayout, SFAirDropBrowser, NSMutableDictionary, SFWirelessSettingsController, NSMutableOrderedSet, NSOperationQueue, UIVisualEffectView, UIFocusContainerGuide, NSMapTable, NSObject;

@interface SFAirDropActivityViewController : UIViewController <UICollectionViewDataSource, SFCollectionViewDelegateLayout, SFAirDropBrowserBatchDelegate, SFPersonCollectionViewCellDelegate, SFWirelessSettingsControllerDelegate> {

	NSString* _sendingAppBundleID;
	long long _attachmentCount;
	NSString* _sessionID;
	long long _sharedItemsRequestID;
	UILabel* _titleLabel;
	UIButton* _reportBugButton;
	NSLayoutConstraint* _titleLabelTopConstraint;
	double _titleLabelTopConstraintDefaultConstant;
	SFAirDropIconView* _airDropIconView;
	NSLayoutConstraint* _airDropIconLeftConstraint;
	UITextView* _noWifiTextView;
	NSLayoutConstraint* _noWifiRightConstraint;
	SFAirDropActiveIconView* _airDropActiveIconView;
	NSLayoutConstraint* _airDropActiveIconLeftConstraint;
	UITextView* _instructionsTextView;
	NSLayoutConstraint* _instructionsRightConstraint;
	SFAirDropActiveIconView* _airDropInactiveIconView;
	NSLayoutConstraint* _airDropInactiveIconLeftConstraint;
	UITextView* _noAWDLTextView;
	NSLayoutConstraint* _noAWDLRightConstraint;
	NSLayoutConstraint* _largeTextAirdropViewYConstraint;
	NSArray* _textViewConstraints;
	NSArray* _largeTextTextViewConstraints;
	NSArray* _airdropViewYConstraints;
	NSArray* _largeTextAirdropViewYConstraints;
	UICollectionView* _collectionView;
	UICollectionView* _detailCollectionView;
	UIButton* _showMoreButton;
	BOOL _shouldExpandTextIfNeeded;
	SFCollectionViewLayout* _collectionViewLayout;
	SFCollectionViewLayout* _detailCollectionViewLayout;
	SFAirDropBrowser* _browser;
	id _progressToken;
	NSMutableDictionary* _personToProgress;
	NSMutableDictionary* _personToStoredTransferFinalState;
	NSMutableDictionary* _personToSharedItemsRequestID;
	NSMutableDictionary* _sharedItemsRequestIDToPreviewPhoto;
	SFWirelessSettingsController* _wirelessSettings;
	NSMutableOrderedSet* _cachedSharedItems;
	BOOL _itemsRequested;
	BOOL _itemsReady;
	NSOperationQueue* _operationQueue;
	long long _generatedPreviews;
	UIVisualEffectView* _titleVibrancyView;
	UIVisualEffectView* _instructionsVibrancyView;
	UIVisualEffectView* _iconsVibrancyView;
	UIButton* _doneButton;
	UIFocusContainerGuide* _fcg;
	SFOperationRef _logger;
	CGSize _minimumPreferredContentSize;
	NSArray* _people;
	NSMapTable* _realNameToFirstSeenTimestamp;
	unsigned long long _peopleStartTimestamp;
	BOOL _browserPaused;
	BOOL _didSelectNode;
	int _sharedItemsCount;
	NSMutableDictionary* _sharedItemsMap;
	BOOL _sharedItemsAvailable;
	BOOL _otherActivityViewPresented;
	BOOL _darkStyleOnLegacyApp;
	BOOL _multipleRows;
	BOOL _manuallyManageBrowsing;
	NSObject*<SFAirDropActivityViewControllerDelegate> _delegate;
	NSArray* _urlsBeingShared;
	NSArray* _photosAssetIDs;
	NSString* _overriddenTitleText;
	NSString* _overriddenNoWiFIBTText;
	NSString* _overriddenNoAWDLText;
	NSString* _overriddenInstructionsText;
	SCD_Struct_SF5 _sendingApplicationAuditToken;

}

@property (assign,nonatomic) BOOL manuallyManageBrowsing;                                                     //@synthesize manuallyManageBrowsing=_manuallyManageBrowsing - In the implementation block
@property (assign,nonatomic) SCD_Struct_SF5 sendingApplicationAuditToken;                                     //@synthesize sendingApplicationAuditToken=_sendingApplicationAuditToken - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SFAirDropActivityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize suggestedThumbnailSize; 
@property (assign,nonatomic) BOOL sharedItemsAvailable;                                                       //@synthesize sharedItemsAvailable=_sharedItemsAvailable - In the implementation block
@property (assign,nonatomic) BOOL otherActivityViewPresented;                                                 //@synthesize otherActivityViewPresented=_otherActivityViewPresented - In the implementation block
@property (assign,nonatomic) BOOL darkStyleOnLegacyApp;                                                       //@synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp - In the implementation block
@property (assign,nonatomic) BOOL multipleRows;                                                               //@synthesize multipleRows=_multipleRows - In the implementation block
@property (nonatomic,copy) NSArray * urlsBeingShared;                                                         //@synthesize urlsBeingShared=_urlsBeingShared - In the implementation block
@property (nonatomic,copy) NSArray * photosAssetIDs;                                                          //@synthesize photosAssetIDs=_photosAssetIDs - In the implementation block
@property (nonatomic,copy) NSString * overriddenTitleText;                                                    //@synthesize overriddenTitleText=_overriddenTitleText - In the implementation block
@property (nonatomic,copy) NSString * overriddenNoWiFIBTText;                                                 //@synthesize overriddenNoWiFIBTText=_overriddenNoWiFIBTText - In the implementation block
@property (nonatomic,copy) NSString * overriddenNoAWDLText;                                                   //@synthesize overriddenNoAWDLText=_overriddenNoAWDLText - In the implementation block
@property (nonatomic,copy) NSString * overriddenInstructionsText;                                             //@synthesize overriddenInstructionsText=_overriddenInstructionsText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isAirDropAvailable;
+(BOOL)airDropActivityCanPerformActivityWithItemClasses:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(NSObject*<SFAirDropActivityViewControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<SFAirDropActivityViewControllerDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)didEnterBackground:(id)arg1 ;
-(void)willEnterForeground:(id)arg1 ;
-(id)titleText;
-(void)stopBrowsing;
-(void)browserDidUpdatePeople:(id)arg1 ;
-(NSArray *)urlsBeingShared;
-(void)setUrlsBeingShared:(NSArray *)arg1 ;
-(NSArray *)photosAssetIDs;
-(void)setPhotosAssetIDs:(NSArray *)arg1 ;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)wirelessSettingsDidChange:(id)arg1 ;
-(BOOL)isWifiEnabled;
-(BOOL)isBluetoothEnabled;
-(void)startBrowsing;
-(void)showMore:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)calculatePreferredContentSize;
-(void)_updateFontSizes;
-(void)updatePreferredContentSize;
-(void)subscribedProgress:(id)arg1 forPersonWithRealName:(id)arg2 ;
-(BOOL)manuallyManageBrowsing;
-(void)_startTelemetry;
-(void)subscribeToProgresses;
-(void)unsubscribeToProgresses;
-(void)_stopTelemetry;
-(BOOL)isDebugMode;
-(void)updateContentAreaAnimated:(BOOL)arg1 ;
-(id)wifiBtHelpTextLocalizedStringKey;
-(void)enableAirDropRequiredFeatures;
-(id)noWiFiBTText;
-(id)attributedStringWithTitle:(id)arg1 content:(id)arg2 ;
-(id)noAWDLText;
-(id)instructionsText;
-(void)_createiOSLayoutConstraints;
-(void)_updateExclusionPathsForTextViews;
-(id)_fontWithStyle:(id)arg1 maxSizeCategory:(id)arg2 traits:(unsigned)arg3 ;
-(BOOL)isTetheredModeEnabled;
-(CGSize)_cachedPreferredItemSize;
-(void)setDarkStyleOnLegacyApp:(BOOL)arg1 ;
-(void)startTransferForPeople:(id)arg1 ;
-(void)generateSpecialPreviewPhotoForRequestID:(long long)arg1 ;
-(void)setNeedsRequestingSharedItems;
-(void)unpublishedProgressForPersonWithRealName:(id)arg1 ;
-(void)_collectTelemetryForPeople:(id)arg1 ;
-(id)indexSetToIndexPaths:(id)arg1 inSection:(long long)arg2 ;
-(void)_emitTelemetryForPerson:(id)arg1 ;
-(BOOL)isValidPayload:(id)arg1 toPerson:(id)arg2 invalidMessage:(id*)arg3 ;
-(id)cellForPerson:(id)arg1 ;
-(BOOL)createURLPayloadForData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 itemIndex:(int)arg6 completion:(/*^block*/id)arg7 ;
-(BOOL)addString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5 ;
-(BOOL)addImage:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5 ;
-(BOOL)addAttributedString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5 ;
-(BOOL)addURL:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5 ;
-(BOOL)addData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 itemIndex:(int)arg6 ;
-(void)handleOtherItemProvider:(id)arg1 withDataType:(id)arg2 attachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 ;
-(BOOL)addItemProvider:(id)arg1 withDataType:(id)arg2 attachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 ;
-(void)personCollectionViewCellDidStartTransfer:(id)arg1 ;
-(void)personCollectionViewCellDidTerminateTransfer:(id)arg1 ;
-(void)personCollectionViewCellDidFinishTransfer:(id)arg1 ;
-(void)_setIsLoadingActivityItemProviders:(BOOL)arg1 ;
-(void)_createtvOSLayoutConstraints;
-(BOOL)enableModernShareSheeet;
-(void)setOtherActivityViewPresented:(BOOL)arg1 ;
-(void)updateShowMoreButtonForShowPeople:(BOOL)arg1 inactive:(BOOL)arg2 active:(BOOL)arg3 static:(BOOL)arg4 ;
-(void)setSendingApplicationAuditToken:(SCD_Struct_SF5)arg1 ;
-(CGSize)suggestedThumbnailSize;
-(void)setSharedItemsAvailable:(BOOL)arg1 ;
-(void)handleLivePhotoItemProvider:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5 ;
-(void)handleImageItemProvider:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5 ;
-(BOOL)addItemProvider:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(void)doneButtonAction:(id)arg1 ;
-(void)cleanupWithSelectedActivityType:(id)arg1 ;
-(SCD_Struct_SF5)sendingApplicationAuditToken;
-(BOOL)sharedItemsAvailable;
-(BOOL)otherActivityViewPresented;
-(BOOL)darkStyleOnLegacyApp;
-(BOOL)multipleRows;
-(void)setMultipleRows:(BOOL)arg1 ;
-(NSString *)overriddenTitleText;
-(void)setOverriddenTitleText:(NSString *)arg1 ;
-(NSString *)overriddenNoWiFIBTText;
-(void)setOverriddenNoWiFIBTText:(NSString *)arg1 ;
-(NSString *)overriddenNoAWDLText;
-(void)setOverriddenNoAWDLText:(NSString *)arg1 ;
-(NSString *)overriddenInstructionsText;
-(void)setOverriddenInstructionsText:(NSString *)arg1 ;
-(void)setManuallyManageBrowsing:(BOOL)arg1 ;
@end

