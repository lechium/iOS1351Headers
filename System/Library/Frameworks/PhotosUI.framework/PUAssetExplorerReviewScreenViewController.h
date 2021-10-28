/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PUAssetExplorerReviewScreenActionManagerDelegate.h>
#import <libobjc.A.dylib/PUReviewAssetProvider.h>

@protocol PUAssetExplorerReviewScreenViewControllerDelegate, PUReviewAssetProvider;
@class NSIndexPath, NSSet, PUReviewScreenBarsModel, PUAssetsDataSourceManager, PUAssetExplorerReviewScreenAssetsDataSourceManager, PUMediaProvider, PUJoiningMediaProvider, PUAssetExplorerReviewScreenActionManager, PUBrowsingSession, NSMutableDictionary, PUActivityProgressController, UIAlertController, PUReviewScreenSpec, NSString;

@interface PUAssetExplorerReviewScreenViewController : UIViewController <PUAssetExplorerReviewScreenActionManagerDelegate, PUReviewAssetProvider> {

	SCD_Struct_PH7 _delegateFlags;
	id<PUAssetExplorerReviewScreenViewControllerDelegate> _delegate;
	NSIndexPath* _initialIndexPath;
	NSSet* _initialSelectedAssetUUIDs;
	NSSet* _initialDisabledLivePhotoAssetUUIDs;
	PUReviewScreenBarsModel* _reviewBarsModel;
	unsigned long long _sourceType;
	PUAssetsDataSourceManager* __clientDataSourceManager;
	PUAssetExplorerReviewScreenAssetsDataSourceManager* __reviewDataSourceManager;
	PUMediaProvider* __clientMediaProvider;
	PUJoiningMediaProvider* __reviewMediaProvider;
	id<PUReviewAssetProvider> __reviewAssetProvider;
	PUAssetExplorerReviewScreenActionManager* __actionManager;
	PUBrowsingSession* __browsingSession;
	NSMutableDictionary* __reviewAssetRequestsByUUID;
	NSMutableDictionary* __substituteAssetsByUUID;
	PUActivityProgressController* __requestProgressController;
	UIAlertController* __failedReviewAssetRequestAlertController;
	unsigned long long __options;
	PUReviewScreenSpec* __spec;

}

@property (nonatomic,readonly) PUAssetsDataSourceManager * _clientDataSourceManager;                                                                        //@synthesize _clientDataSourceManager=__clientDataSourceManager - In the implementation block
@property (nonatomic,readonly) PUAssetExplorerReviewScreenAssetsDataSourceManager * _reviewDataSourceManager;                                               //@synthesize _reviewDataSourceManager=__reviewDataSourceManager - In the implementation block
@property (nonatomic,readonly) PUMediaProvider * _clientMediaProvider;                                                                                      //@synthesize _clientMediaProvider=__clientMediaProvider - In the implementation block
@property (nonatomic,readonly) PUJoiningMediaProvider * _reviewMediaProvider;                                                                               //@synthesize _reviewMediaProvider=__reviewMediaProvider - In the implementation block
@property (nonatomic,readonly) id<PUReviewAssetProvider> _reviewAssetProvider;                                                                              //@synthesize _reviewAssetProvider=__reviewAssetProvider - In the implementation block
@property (nonatomic,readonly) PUAssetExplorerReviewScreenActionManager * _actionManager;                                                                   //@synthesize _actionManager=__actionManager - In the implementation block
@property (nonatomic,readonly) PUBrowsingSession * _browsingSession;                                                                                        //@synthesize _browsingSession=__browsingSession - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _reviewAssetRequestsByUUID;                                                                            //@synthesize _reviewAssetRequestsByUUID=__reviewAssetRequestsByUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _substituteAssetsByUUID;                                                                               //@synthesize _substituteAssetsByUUID=__substituteAssetsByUUID - In the implementation block
@property (setter=_setRequestProgressController:,nonatomic,retain) PUActivityProgressController * _requestProgressController;                               //@synthesize _requestProgressController=__requestProgressController - In the implementation block
@property (setter=_setFailedReviewAssetRequestAlertController:,nonatomic,retain) UIAlertController * _failedReviewAssetRequestAlertController;              //@synthesize _failedReviewAssetRequestAlertController=__failedReviewAssetRequestAlertController - In the implementation block
@property (nonatomic,readonly) unsigned long long _options;                                                                                                 //@synthesize _options=__options - In the implementation block
@property (nonatomic,readonly) PUReviewScreenSpec * _spec;                                                                                                  //@synthesize _spec=__spec - In the implementation block
@property (assign,nonatomic,__weak) id<PUAssetExplorerReviewScreenViewControllerDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PUAssetsDataSourceManager * dataSourceManager; 
@property (nonatomic,readonly) PUMediaProvider * mediaProvider; 
@property (nonatomic,copy,readonly) NSIndexPath * initialIndexPath;                                                                                         //@synthesize initialIndexPath=_initialIndexPath - In the implementation block
@property (nonatomic,copy,readonly) NSSet * initialSelectedAssetUUIDs;                                                                                      //@synthesize initialSelectedAssetUUIDs=_initialSelectedAssetUUIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * initialDisabledLivePhotoAssetUUIDs;                                                                             //@synthesize initialDisabledLivePhotoAssetUUIDs=_initialDisabledLivePhotoAssetUUIDs - In the implementation block
@property (nonatomic,readonly) PUReviewScreenBarsModel * reviewBarsModel;                                                                                   //@synthesize reviewBarsModel=_reviewBarsModel - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceType;                                                                                               //@synthesize sourceType=_sourceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)_options;
-(id<PUAssetExplorerReviewScreenViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PUAssetExplorerReviewScreenViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)sourceType;
-(PUReviewScreenSpec *)_spec;
-(PUAssetExplorerReviewScreenActionManager *)_actionManager;
-(PUMediaProvider *)mediaProvider;
-(PUAssetsDataSourceManager *)dataSourceManager;
-(NSIndexPath *)initialIndexPath;
-(PUBrowsingSession *)_browsingSession;
-(id<PUReviewAssetProvider>)_reviewAssetProvider;
-(void)assetExplorerReviewScreenActionManagerDidPressSend:(id)arg1 ;
-(id)reviewScreenBarsModelForAssetExplorerReviewScreenActionManager:(id)arg1 ;
-(void)assetExplorerReviewScreenActionManager:(id)arg1 didToggleLivePhoto:(id)arg2 ;
-(void)assetExplorerReviewScreenActionManagerDidPressRetake:(id)arg1 ;
-(void)assetExplorerReviewScreenActionManagerDidPressDone:(id)arg1 ;
-(void)assetExplorerReviewScreenActionManagerDidPressCancel:(id)arg1 ;
-(void)assetExplorerReviewScreenActionManager:(id)arg1 didPressSelectForAsset:(id)arg2 ;
-(BOOL)assetExplorerReviewScreenActionManager:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4 ;
-(BOOL)assetExplorerReviewScreenActionManager:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4 ;
-(void)_handleProgressControllerCanceled:(id)arg1 ;
-(void)_showFailedReviewAssetRequestAlert;
-(PUActivityProgressController *)_requestProgressController;
-(void)_setRequestProgressController:(id)arg1 ;
-(id)reviewAssetProviderRequestForDisplayAsset:(id)arg1 ;
-(PUReviewScreenBarsModel *)reviewBarsModel;
-(void)funEffectsViewController:(id)arg1 didSaveAsset:(id)arg2 withCompletion:(unsigned long long)arg3 ;
-(void)photoMarkupController:(id)arg1 didFinishWithSavedAsset:(id)arg2 ;
-(void)photoEditController:(id)arg1 didFinishEditingSessionForAsset:(id)arg2 completed:(BOOL)arg3 ;
-(id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 reviewAssetProvider:(id)arg3 initialIndexPath:(id)arg4 initialSelectedAssetUUIDs:(id)arg5 initialDisabledLivePhotoAssetUUIDs:(id)arg6 sourceType:(unsigned long long)arg7 ;
-(id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 reviewAssetProvider:(id)arg3 initialIndexPath:(id)arg4 initialSelectedAssetUUIDs:(id)arg5 initialDisabledLivePhotoAssetUUIDs:(id)arg6 sourceType:(unsigned long long)arg7 reviewBarsModel:(id)arg8 options:(unsigned long long)arg9 ;
-(id)_createBrowsingSessionIfNecessary;
-(id)_remainingReviewAssetRequests;
-(id)_reviewAssetRequestForAssetUUID:(id)arg1 ;
-(id)_createReviewAssetRequestForAsset:(id)arg1 ;
-(void)_updateForCompletedReviewAssetRequest:(id)arg1 ;
-(void)_cancelReviewAssetRequestForAssetUUID:(id)arg1 ;
-(void)_cancelReviewAssetRequests;
-(void)_requestReviewAssetForAsset:(id)arg1 ;
-(void)_handleReviewAssetRequest:(id)arg1 completedWithSuccess:(BOOL)arg2 canceled:(BOOL)arg3 error:(id)arg4 reviewAsset:(id)arg5 ;
-(void)_handleFailedReviewAssetRequestAlertControllerDismissal;
-(id)_createProgressControllerForRemainingRequests:(id)arg1 ;
-(void)_tearDownProgressController;
-(id)_substituteAssetForUUID:(id)arg1 ;
-(void)_setSubstituteAsset:(id)arg1 ;
-(void)_updateWithSubstituteAsset:(id)arg1 shouldSelect:(BOOL)arg2 ;
-(void)_deleteAllLinkedFiles;
-(id)_getSelectedSubstituteAssetsAndRemoveFilesForUnneededAssets;
-(void)_handleCompletionAction:(unsigned long long)arg1 ;
-(void)assetExplorerReviewScreenActionManager:(id)arg1 didPressFunEffectsForAsset:(id)arg2 ;
-(void)_performCancelAction;
-(void)_performRetakeAction;
-(void)_performCompletionAction:(unsigned long long)arg1 ;
-(void)_performCompletionActionSteps:(unsigned long long)arg1 ;
-(void)_presentConfidentialityAlertWithConfirmAction:(/*^block*/id)arg1 abortAction:(/*^block*/id)arg2 ;
-(NSSet *)initialSelectedAssetUUIDs;
-(NSSet *)initialDisabledLivePhotoAssetUUIDs;
-(PUAssetsDataSourceManager *)_clientDataSourceManager;
-(PUAssetExplorerReviewScreenAssetsDataSourceManager *)_reviewDataSourceManager;
-(PUMediaProvider *)_clientMediaProvider;
-(PUJoiningMediaProvider *)_reviewMediaProvider;
-(NSMutableDictionary *)_reviewAssetRequestsByUUID;
-(NSMutableDictionary *)_substituteAssetsByUUID;
-(UIAlertController *)_failedReviewAssetRequestAlertController;
-(void)_setFailedReviewAssetRequestAlertController:(id)arg1 ;
@end
