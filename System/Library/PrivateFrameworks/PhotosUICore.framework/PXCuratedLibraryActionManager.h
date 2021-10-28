/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXActionManager.h>

@class PXCuratedLibraryFilterActionPerformer, NSDictionary, PXCuratedLibraryViewModel;

@interface PXCuratedLibraryActionManager : PXActionManager {

	PXCuratedLibraryFilterActionPerformer* _filterActionPerformer;
	NSDictionary* _actionPerformersByType;
	NSDictionary* _assetCollectionActionPerformersByType;
	NSDictionary* _constructorSpecificActionPerformersByType;
	PXCuratedLibraryViewModel* _viewModel;

}

@property (nonatomic,readonly) NSDictionary * actionPerformersByType;                                 //@synthesize actionPerformersByType=_actionPerformersByType - In the implementation block
@property (nonatomic,readonly) NSDictionary * assetCollectionActionPerformersByType;                  //@synthesize assetCollectionActionPerformersByType=_assetCollectionActionPerformersByType - In the implementation block
@property (nonatomic,readonly) NSDictionary * constructorSpecificActionPerformersByType;              //@synthesize constructorSpecificActionPerformersByType=_constructorSpecificActionPerformersByType - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) PXCuratedLibraryFilterActionPerformer * filterActionPerformer;                   //@synthesize filterActionPerformer=_filterActionPerformer - In the implementation block
+(id)actionsWithActionPerformers;
-(id)init;
-(BOOL)canPerformActionType:(id)arg1 ;
-(id)initWithViewModel:(id)arg1 ;
-(PXCuratedLibraryViewModel *)viewModel;
-(PXCuratedLibraryFilterActionPerformer *)filterActionPerformer;
-(id)actionPerformerForActionType:(id)arg1 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 ;
-(id)actionPerformerForActionType:(id)arg1 withAssetCollectionReference:(id)arg2 ;
-(id)showAllActionPerformerWithAssetCollectionReference:(id)arg1 ;
-(id)ellipsisButtonActionPerformerWithAssetCollectionReference:(id)arg1 ;
-(id)toggleAspectFitPerformerWithLayout:(id)arg1 ;
-(id)showMapPerformerWithAssetCollectionReference:(id)arg1 fetchResult:(id)arg2 ;
-(id)tapToRadarPerformerAssetCollectionReference:(id)arg1 diagnosticLayout:(id)arg2 ;
-(id)actionPerformerForHitTestResult:(id)arg1 ;
-(NSDictionary *)actionPerformersByType;
-(NSDictionary *)assetCollectionActionPerformersByType;
-(NSDictionary *)constructorSpecificActionPerformersByType;
@end
