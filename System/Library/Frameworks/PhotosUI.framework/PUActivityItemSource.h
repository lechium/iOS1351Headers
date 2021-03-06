/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PHAssetExportRequestDelegate.h>
#import <libobjc.A.dylib/PUActivityItemSourceOperationDelegate.h>
#import <libobjc.A.dylib/PUMutableActivityItemSource.h>
#import <UIKit/UIActivityItemDeferredSource.h>
#import <UIKit/UIActivityItemApplicationExtensionSource.h>
#import <UIKit/UIActivityItemImageDataProvider.h>
#import <UIKit/UIActivityItemSource.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class PHAsset, NSDictionary, NSObject, NSMutableSet, NSMutableDictionary, NSString, PUActivityItemSourceOperation, PUActivityItemSourceAnchorOperation, NSError, PUActivityItemSourceConfiguration, PHAssetExportRequest, NSProgress, NSURL, NSDate;

@interface PUActivityItemSource : PXObservable <PHAssetExportRequestDelegate, PUActivityItemSourceOperationDelegate, PUMutableActivityItemSource, UIActivityItemDeferredSource, UIActivityItemApplicationExtensionSource, UIActivityItemImageDataProvider, UIActivityItemSource> {

	PHAsset* _asset;
	NSDictionary* _cachedSharingVariants;
	NSObject*<OS_dispatch_group> _cachedSharingVariantsDisptachGroup;
	NSMutableSet* _onDemandExports;
	NSMutableDictionary* _sharingURLs;
	NSString* _sharingUUID;
	NSString* _assetOriginalFilenameBase;
	PUActivityItemSourceOperation* _currentOperation;
	PUActivityItemSourceAnchorOperation* _anchorOperation;
	BOOL _shouldSkipPreparation;
	BOOL _shouldAnchorPreparation;
	SCD_Struct_PU13 _sharingPreferences;
	unsigned long long _state;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;
	/*^block*/id _postCompletionHandler;
	NSError* _lastPreparationError;
	PUActivityItemSourceConfiguration* _exportConfiguration;
	PHAssetExportRequest* __assetExportRequest;
	NSProgress* __exportProgress;
	/*^block*/id __exportProgressHandler;
	NSDictionary* __pasteboardRepresentation;
	NSURL* __assetsLibraryURL;
	unsigned long long _signpostId;
	NSMutableDictionary* _preparationStepTimingInfo;
	NSDate* _preparationStepSignpostIntervalStartTime;
	long long _prepareItemEventCPAnalyticsSignpostId;
	NSObject*<OS_dispatch_queue> _externalIsolation;

}

@property (nonatomic,retain) PUActivityItemSourceConfiguration * exportConfiguration;                                //@synthesize exportConfiguration=_exportConfiguration - In the implementation block
@property (setter=_setAssetExportRequest:,nonatomic,retain) PHAssetExportRequest * _assetExportRequest;              //@synthesize _assetExportRequest=__assetExportRequest - In the implementation block
@property (setter=_setExportProgress:,nonatomic,retain) NSProgress * _exportProgress;                                //@synthesize _exportProgress=__exportProgress - In the implementation block
@property (setter=_setExportProgressHandler:,nonatomic,copy) id _exportProgressHandler;                              //@synthesize _exportProgressHandler=__exportProgressHandler - In the implementation block
@property (setter=_setPasteboardRepresentation:,retain) NSDictionary * _pasteboardRepresentation;                    //@synthesize _pasteboardRepresentation=__pasteboardRepresentation - In the implementation block
@property (setter=_setAssetsLibraryURL:,retain) NSURL * _assetsLibraryURL;                                           //@synthesize _assetsLibraryURL=__assetsLibraryURL - In the implementation block
@property (nonatomic,readonly) unsigned long long signpostId;                                                        //@synthesize signpostId=_signpostId - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * preparationStepTimingInfo;                                      //@synthesize preparationStepTimingInfo=_preparationStepTimingInfo - In the implementation block
@property (nonatomic,retain) NSDate * preparationStepSignpostIntervalStartTime;                                      //@synthesize preparationStepSignpostIntervalStartTime=_preparationStepSignpostIntervalStartTime - In the implementation block
@property (nonatomic,readonly) long long prepareItemEventCPAnalyticsSignpostId;                                      //@synthesize prepareItemEventCPAnalyticsSignpostId=_prepareItemEventCPAnalyticsSignpostId - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> externalIsolation;                                       //@synthesize externalIsolation=_externalIsolation - In the implementation block
@property (nonatomic,retain) NSError * lastPreparationError;                                                         //@synthesize lastPreparationError=_lastPreparationError - In the implementation block
@property (nonatomic,readonly) PHAsset * asset;                                                                      //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSString * sharingUUID; 
@property (nonatomic,readonly) SCD_Struct_PU13 sharingPreferences;                                                   //@synthesize sharingPreferences=_sharingPreferences - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                                             //@synthesize state=_state - In the implementation block
@property (copy) id progressHandler;                                                                                 //@synthesize progressHandler=_progressHandler - In the implementation block
@property (copy) id completionHandler;                                                                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (copy) id postCompletionHandler;                                                                           //@synthesize postCompletionHandler=_postCompletionHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipPreparation;                                                             //@synthesize shouldSkipPreparation=_shouldSkipPreparation - In the implementation block
@property (assign,nonatomic) BOOL shouldAnchorPreparation;                                                           //@synthesize shouldAnchorPreparation=_shouldAnchorPreparation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_sharingErrorWithCode:(long long)arg1 underlyingError:(id)arg2 localizedDescription:(id)arg3 additionalInfo:(id)arg4 ;
+(BOOL)supportsAssetLocalIdentifierForActivityType:(id)arg1 ;
+(id)activityItemSourceLog;
+(unsigned long long)assetBundleMediaSubtypesFromPHAssetMediaSubtypes:(unsigned long long)arg1 ;
+(unsigned long long)assetBundleReframeVariationFromPHAssetReframeVariation:(unsigned long long)arg1 ;
+(unsigned short)assetBundleVideoComplementVisibilityStateFromPHVideoComplementVisibilityState:(unsigned short)arg1 ;
+(unsigned long long)assetBundlePlaybackVariationFromPHAssetPlaybackVariation:(unsigned short)arg1 ;
+(long long)assetBundlePlaybackStyleFromPHAssetPlaybackStyle:(long long)arg1 ;
+(long long)assetBundleMediaTypeFromPHAssetMediaType:(long long)arg1 ;
-(void)dealloc;
-(void)cancel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(PHAsset *)asset;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(unsigned long long)signpostId;
-(void)_resetState;
-(void)assetExportRequest:(id)arg1 didChangeToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 ;
-(id)activityViewControllerOperation:(id)arg1 ;
-(id)activityViewControllerApplicationExtensionItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 thumbnailImageDataForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)_itemForActivityType:(id)arg1 ;
-(id)_customAccessibilityLabel;
-(SCD_Struct_PU13)sharingPreferences;
-(void)setSharingPreferences:(SCD_Struct_PU13)arg1 ;
-(void)activityItemSourceOperation:(id)arg1 prepareItemForActivityType:(id)arg2 ;
-(id)initWithAsset:(id)arg1 sharingPreferences:(SCD_Struct_PU13)arg2 ;
-(NSString *)sharingUUID;
-(id)_activityOperationQueue;
-(void)runWithActivityType:(id)arg1 ;
-(id)_sharingVariants;
-(void)_fetchSharingVariants;
-(void)_setExportProgress:(id)arg1 ;
-(void)signalAnchorCompletion;
-(id)_uniformTypeIdentifierForActivityType:(id)arg1 ;
-(id)_newOperationForActivityType:(id)arg1 ;
-(id)_newPasteboardRepresentationForURL:(id)arg1 ;
-(id)_createTempLivePhotoBundleWithError:(id*)arg1 ;
-(id)_createTempAssetBundleForAsset:(id)arg1 withError:(id*)arg2 ;
-(void)_runExportRequestWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_fetchImageWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_fetchVideoWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_fetchLivePhotoWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_fetchAlternateWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_beginObservingExportRequest:(id)arg1 withProgressHandler:(/*^block*/id)arg2 ;
-(void)_stopObservingExportRequest;
-(void)commitTimingInfoForPreparationStep:(id)arg1 fromStartTime:(id)arg2 ;
-(void)updateTotalPreparationDurationTimingInfo;
-(void)sendPreparationCompletedEventForActivityType:(id)arg1 withError:(id)arg2 didCancel:(BOOL)arg3 ;
-(id)_generateAnalyticsPayload;
-(void)_runOnDemandExportForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_outboundResourcesDirectoryURL;
-(id)_generateURLForType:(long long)arg1 withPathExtension:(id)arg2 preferredFilename:(id)arg3 ;
-(BOOL)_copyResourceAtURL:(id)arg1 toURL:(id)arg2 shouldMove:(BOOL)arg3 ;
-(id)_createManagedURLForResourceAtURL:(id)arg1 shouldMove:(BOOL)arg2 forType:(long long)arg3 ;
-(id)_resourceURLForType:(long long)arg1 ;
-(void)_setResourceURL:(id)arg1 forType:(long long)arg2 ;
-(void)_removeTempFiles;
-(void)_removeTempLivePhotoBundleFile;
-(void)_removeTempAssetBundleFile;
-(id)postCompletionHandler;
-(void)setPostCompletionHandler:(id)arg1 ;
-(NSError *)lastPreparationError;
-(void)setLastPreparationError:(NSError *)arg1 ;
-(BOOL)shouldSkipPreparation;
-(void)setShouldSkipPreparation:(BOOL)arg1 ;
-(BOOL)shouldAnchorPreparation;
-(void)setShouldAnchorPreparation:(BOOL)arg1 ;
-(PUActivityItemSourceConfiguration *)exportConfiguration;
-(void)setExportConfiguration:(PUActivityItemSourceConfiguration *)arg1 ;
-(PHAssetExportRequest *)_assetExportRequest;
-(void)_setAssetExportRequest:(id)arg1 ;
-(NSProgress *)_exportProgress;
-(id)_exportProgressHandler;
-(void)_setExportProgressHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)_pasteboardRepresentation;
-(void)_setPasteboardRepresentation:(id)arg1 ;
-(NSURL *)_assetsLibraryURL;
-(void)_setAssetsLibraryURL:(id)arg1 ;
-(NSMutableDictionary *)preparationStepTimingInfo;
-(NSDate *)preparationStepSignpostIntervalStartTime;
-(void)setPreparationStepSignpostIntervalStartTime:(NSDate *)arg1 ;
-(long long)prepareItemEventCPAnalyticsSignpostId;
-(NSObject*<OS_dispatch_queue>)externalIsolation;
@end

