/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUPXPhotoKitDestructiveActionsPerformer.h>

@interface PUPXPhotoKitTrashAssetActionPerformer : PUPXPhotoKitDestructiveActionsPerformer
+(id)localizedTitleForUseCase:(unsigned long long)arg1 selectionSnapshot:(id)arg2 person:(id)arg3 ;
+(id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 ;
-(long long)destructivePhotosAction;
@end

