/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PUCMMActivityItemSourceDelegate.h>
#import <libobjc.A.dylib/PXCMMActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXActivityItemSourceController.h>

@protocol PUActivityItemSourceControllerDelegate, OS_dispatch_queue;
@class NSOrderedSet, NSURL, NSMutableOrderedSet, NSArray, PUActivityViewController, PUCMMActivityItemSource, NSMutableArray, NSString, NSObject;

@interface PUActivityItemSourceController : PXObservable <PUCMMActivityItemSourceDelegate, PXCMMActionPerformerDelegate, PXChangeObserver, PXActivityItemSourceController> {

	NSMutableOrderedSet* _assetItems;
	NSMutableOrderedSet* _assetItemSources;
	NSArray* _activeItemSources;
	Ai _taskId;
	unsigned long long _cloudSharedAssetCount;
	BOOL _shouldUseMomentShareLinkInMessagesIfThresholdMet;
	BOOL _shouldExcludeLivenessInAllItemSources;
	BOOL _shouldExcludeLocationInAllItemSourcess;
	BOOL _shouldShareAsOriginals;
	BOOL _momentSharePublishAttempted;
	unsigned long long _preferredPreparationType;
	id<PUActivityItemSourceControllerDelegate> _delegate;
	unsigned long long _state;
	PUActivityViewController* _activityViewController;
	/*^block*/id _progressHandler;
	NSURL* _publishedURL;
	PUCMMActivityItemSource* _cmmActivityItemSource;
	NSMutableArray* _errors;
	NSString* _activeActivityType;
	unsigned long long _numSourcesDownloading;
	NSObject*<OS_dispatch_queue> _externalIsolation;

}

@property (nonatomic,readonly) PUCMMActivityItemSource * cmmActivityItemSource;                       //@synthesize cmmActivityItemSource=_cmmActivityItemSource - In the implementation block
@property (copy) NSArray * activeItemSources; 
@property (retain) NSMutableArray * errors;                                                           //@synthesize errors=_errors - In the implementation block
@property (retain) NSString * activeActivityType;                                                     //@synthesize activeActivityType=_activeActivityType - In the implementation block
@property (setter=_setPublishedURL:,nonatomic,retain) NSURL * publishedURL;                           //@synthesize publishedURL=_publishedURL - In the implementation block
@property (assign,nonatomic) unsigned long long numSourcesDownloading;                                //@synthesize numSourcesDownloading=_numSourcesDownloading - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> externalIsolation;                        //@synthesize externalIsolation=_externalIsolation - In the implementation block
@property (assign,nonatomic) unsigned long long preferredPreparationType;                             //@synthesize preferredPreparationType=_preferredPreparationType - In the implementation block
@property (assign,nonatomic) BOOL shouldUseMomentShareLinkInMessagesIfThresholdMet;                   //@synthesize shouldUseMomentShareLinkInMessagesIfThresholdMet=_shouldUseMomentShareLinkInMessagesIfThresholdMet - In the implementation block
@property (assign,nonatomic,__weak) id<PUActivityItemSourceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) PUActivityViewController * activityViewController;                //@synthesize activityViewController=_activityViewController - In the implementation block
@property (nonatomic,copy) NSOrderedSet * assetItems;                                                 //@synthesize assetItems=_assetItems - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeLivenessInAllItemSources;                              //@synthesize shouldExcludeLivenessInAllItemSources=_shouldExcludeLivenessInAllItemSources - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeLocationInAllItemSourcess;                             //@synthesize shouldExcludeLocationInAllItemSourcess=_shouldExcludeLocationInAllItemSourcess - In the implementation block
@property (assign,nonatomic) BOOL shouldShareAsOriginals;                                             //@synthesize shouldShareAsOriginals=_shouldShareAsOriginals - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * assetItemSources; 
@property (nonatomic,copy,readonly) NSArray * activityItems; 
@property (nonatomic,copy) id progressHandler;                                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) BOOL momentSharePublishAttempted;                                      //@synthesize momentSharePublishAttempted=_momentSharePublishAttempted - In the implementation block
@property (nonatomic,readonly) BOOL itemSourcesSupportMomentShareLinkCreation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PUActivityItemSourceControllerDelegate>)delegate;
-(void)setDelegate:(id<PUActivityItemSourceControllerDelegate>)arg1 ;
-(void)cancel;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSMutableArray *)errors;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(NSOrderedSet *)assets;
-(void)updateState;
-(PUActivityViewController *)activityViewController;
-(void)setActivityViewController:(PUActivityViewController *)arg1 ;
-(NSArray *)activityItems;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(NSURL *)publishedURL;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)externalIsolation;
-(PXAssetMediaTypeCount)requestAssetsMediaTypeCount;
-(NSOrderedSet *)assetItemSources;
-(unsigned long long)preferredPreparationType;
-(void)setPreferredPreparationType:(unsigned long long)arg1 ;
-(BOOL)shouldUseMomentShareLinkInMessagesIfThresholdMet;
-(void)setShouldUseMomentShareLinkInMessagesIfThresholdMet:(BOOL)arg1 ;
-(BOOL)momentSharePublishAttempted;
-(BOOL)itemSourcesSupportMomentShareLinkCreation;
-(void)cmmActivityItemSource:(id)arg1 willBeginPreparationWithActivityType:(id)arg2 preparationType:(unsigned long long)arg3 ;
-(void)cmmActivityItemSource:(id)arg1 didFinishPreparationForActivityType:(id)arg2 preparationType:(unsigned long long)arg3 withItems:(id)arg4 didCancel:(BOOL)arg5 error:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)setAssetItems:(NSOrderedSet *)arg1 ;
-(void)setShouldExcludeLivenessInAllItemSources:(BOOL)arg1 ;
-(void)setShouldExcludeLocationInAllItemSourcess:(BOOL)arg1 ;
-(void)setShouldShareAsOriginals:(BOOL)arg1 ;
-(void)updateSharingPreferencesInItemSources;
-(SCD_Struct_PU13)synthesizedSharingPreferencesForAssetItem:(id)arg1 ;
-(void)addAssetItem:(id)arg1 ;
-(void)removeAssetItem:(id)arg1 ;
-(NSArray *)activeItemSources;
-(void)setActiveItemSources:(NSArray *)arg1 ;
-(void)configureItemSourcesForActivityIfNeeded:(id)arg1 forcePreparationAsMomentShareLink:(BOOL)arg2 ;
-(void)_prepareIndividualItemSourcesForActivity:(id)arg1 ;
-(void)_prepareMomentShareLinkFromIndividualItemSourcesForActivity:(id)arg1 ;
-(BOOL)_prepareForPerformWithActivityType:(id)arg1 error:(id*)arg2 ;
-(void)_cleanupAfterPerform;
-(void)runExplicitly:(BOOL)arg1 withActivityType:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)publishLinkForActivityType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_didPublishMomentShareLinkToURL:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)activityItemSourceForAsset:(id)arg1 ;
-(NSOrderedSet *)assetItems;
-(BOOL)shouldExcludeLivenessInAllItemSources;
-(BOOL)shouldExcludeLocationInAllItemSourcess;
-(BOOL)shouldShareAsOriginals;
-(void)_setPublishedURL:(id)arg1 ;
-(PUCMMActivityItemSource *)cmmActivityItemSource;
-(NSString *)activeActivityType;
-(void)setActiveActivityType:(NSString *)arg1 ;
-(unsigned long long)numSourcesDownloading;
-(void)setNumSourcesDownloading:(unsigned long long)arg1 ;
@end
