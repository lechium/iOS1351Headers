/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PFVideoAVObjectBuilder, NSDictionary, NSString;


@protocol PUEditableAsset <PUDisplayAsset>
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (getter=isHighFramerateVideo,nonatomic,readonly) BOOL highFramerateVideo; 
@property (getter=isAdjusted,nonatomic,readonly) BOOL adjusted; 
@property (getter=isContentAdjustmentAllowed,nonatomic,readonly) BOOL contentAdjustmentAllowed; 
@property (getter=isLivePhotoVisibilityAdjustmentAllowed,nonatomic,readonly) BOOL livePhotoVisibilityAdjustmentAllowed; 
@property (getter=isInPlaceVideoTrimAllowed,nonatomic,readonly) BOOL inPlaceVideoTrimAllowed; 
@property (nonatomic,readonly) unsigned long long originalResourceChoice; 
@property (getter=isTrimmableType,nonatomic,readonly) BOOL trimmableType; 
@property (nonatomic,readonly) unsigned long long livePhotoVisibilityState; 
@property (nonatomic,readonly) PFVideoAVObjectBuilder * videoObjectBuilder; 
@property (nonatomic,readonly) unsigned long long reframeVariation; 
@property (nonatomic,readonly) NSDictionary * imageProperties; 
@property (nonatomic,readonly) int originalEXIFOrientation; 
@property (getter=isResourceDownloadPossible,nonatomic,readonly) BOOL resourceDownloadPossible; 
@property (getter=isCloudPhotoLibraryEnabled,nonatomic,readonly) BOOL cloudPhotoLibraryEnabled; 
@property (nonatomic,copy,readonly) NSString * pathForOriginalImageFile; 
@property (nonatomic,copy,readonly) NSString * pathForOriginalVideoFile; 
@property (nonatomic,copy,readonly) NSString * pathForTrimmedVideoFile; 
@required
-(NSDictionary *)imageProperties;
-(BOOL)isCloudPhotoLibraryEnabled;
-(NSString *)pathForTrimmedVideoFile;
-(unsigned long long)originalResourceChoice;
-(BOOL)isAdjusted;
-(unsigned long long)reframeVariation;
-(unsigned long long)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cancelContentEditingInputRequest:(unsigned long long)arg1;
-(BOOL)isOriginalRaw;
-(unsigned long long)mediaSubtypes;
-(BOOL)isHighFramerateVideo;
-(BOOL)isContentAdjustmentAllowed;
-(BOOL)isLivePhotoVisibilityAdjustmentAllowed;
-(BOOL)isInPlaceVideoTrimAllowed;
-(BOOL)isTrimmableType;
-(unsigned long long)livePhotoVisibilityState;
-(PFVideoAVObjectBuilder *)videoObjectBuilder;
-(int)originalEXIFOrientation;
-(BOOL)isResourceDownloadPossible;
-(NSString *)pathForOriginalImageFile;
-(NSString *)pathForOriginalVideoFile;

@end
