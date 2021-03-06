/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUViewModel.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PUEditableAsset;
@class PICompositionController, PUPhotoEditIrisModelChange;

@interface PUPhotoEditIrisModel : PUViewModel <NSCopying> {

	BOOL _videoEnabled;
	BOOL _ignoresUpdates;
	BOOL __assetHasAdjustments;
	unsigned short __editingVisibility;
	unsigned short __assetVisibility;
	id<PUEditableAsset> _asset;
	PICompositionController* _compositionController;

}

@property (setter=_setCompositionController:,nonatomic,retain) PICompositionController * compositionController;              //@synthesize compositionController=_compositionController - In the implementation block
@property (assign,setter=_setEditingVisibility:,nonatomic) unsigned short _editingVisibility;                                //@synthesize _editingVisibility=__editingVisibility - In the implementation block
@property (nonatomic,readonly) unsigned short _assetVisibility;                                                              //@synthesize _assetVisibility=__assetVisibility - In the implementation block
@property (nonatomic,readonly) BOOL _assetHasAdjustments;                                                                    //@synthesize _assetHasAdjustments=__assetHasAdjustments - In the implementation block
@property (nonatomic,readonly) PUPhotoEditIrisModelChange * currentChange; 
@property (nonatomic,readonly) id<PUEditableAsset> asset;                                                                    //@synthesize asset=_asset - In the implementation block
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled;                                                        //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasUnsavedChanges; 
@property (assign,nonatomic) BOOL ignoresUpdates;                                                                            //@synthesize ignoresUpdates=_ignoresUpdates - In the implementation block
+(void)updateChangeRequestForRevert:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<PUEditableAsset>)asset;
-(BOOL)hasUnsavedChanges;
-(PICompositionController *)compositionController;
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(id)newViewModelChange;
-(PUPhotoEditIrisModelChange *)currentChange;
-(id)initWithAsset:(id)arg1 compositionController:(id)arg2 ;
-(id)initWithIrisVisibilityState:(unsigned short)arg1 hasAdjustments:(BOOL)arg2 compositionController:(id)arg3 ;
-(void)notifyCannotSupportVideoEdits;
-(BOOL)reenablingLivePhotoShouldRemoveEdits;
-(void)updateChangeRequestForSave:(id)arg1 ;
-(void)compositionDidChange;
-(void)setIgnoresUpdates:(BOOL)arg1 ;
-(void)_updateAutoDisableStateIfNeeded;
-(BOOL)_hasLegacyIrisConflicts;
-(void)_setHidden:(BOOL)arg1 explicit:(BOOL)arg2 supportable:(BOOL)arg3 ;
-(BOOL)ignoresUpdates;
-(void)_setCompositionController:(id)arg1 ;
-(unsigned short)_editingVisibility;
-(void)_setEditingVisibility:(unsigned short)arg1 ;
-(unsigned short)_assetVisibility;
-(BOOL)_assetHasAdjustments;
@end

