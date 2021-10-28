/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PUCompositeVideoGenerator, PUMergedLivePhotosVideo, NSError, PUAssetReference, PUAssetsDataSource, NSString;

@interface PUMergedLivePhotosVideoRequest : PXObservable <PXChangeObserver> {

	unsigned long long _requestLogID;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	PUCompositeVideoGenerator* _workQueue_generator;
	long long _stateQueue_state;
	PUMergedLivePhotosVideo* _stateQueue_mergedVideo;
	NSError* _stateQueue_error;
	PUAssetReference* _assetReference;
	PUAssetsDataSource* _assetsDataSource;

}

@property (nonatomic,readonly) PUAssetReference * assetReference;                  //@synthesize assetReference=_assetReference - In the implementation block
@property (nonatomic,readonly) PUAssetsDataSource * assetsDataSource;              //@synthesize assetsDataSource=_assetsDataSource - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) PUMergedLivePhotosVideo * mergedVideo; 
@property (nonatomic,readonly) NSError * error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)start;
-(long long)state;
-(PUAssetReference *)assetReference;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)mutableChangeObject;
-(PUAssetsDataSource *)assetsDataSource;
-(id)initWithAssetReference:(id)arg1 dataSource:(id)arg2 ;
-(PUMergedLivePhotosVideo *)mergedVideo;
-(void)_workQueue_start;
-(id)_workQueue_fetchMergeableAssets;
-(void)_workQueue_generateVideoUsingAssets:(id)arg1 ;
-(void)_workQueue_handleGeneratorDidChangeState;
-(void)_workQueue_finishWithMergedVideo:(id)arg1 error:(id)arg2 ;
-(void)_stateQueue_signalStateChange;
@end
