/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUPhotoKitAssetActionManager.h>

@protocol PUVideoListAssetExpungeActionPerformerDelegate;
@interface PUVideoListAssetActionManager : PUPhotoKitAssetActionManager {

	id<PUVideoListAssetExpungeActionPerformerDelegate> _actionPerformerDelegate;

}

@property (nonatomic,retain) id<PUVideoListAssetExpungeActionPerformerDelegate> actionPerformerDelegate;              //@synthesize actionPerformerDelegate=_actionPerformerDelegate - In the implementation block
-(id<PUVideoListAssetExpungeActionPerformerDelegate>)actionPerformerDelegate;
-(void)setActionPerformerDelegate:(id<PUVideoListAssetExpungeActionPerformerDelegate>)arg1 ;
-(BOOL)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1 ;
-(id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(BOOL)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2 ;
@end
