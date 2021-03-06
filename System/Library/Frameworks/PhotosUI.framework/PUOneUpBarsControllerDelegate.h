/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PUOneUpBarsControllerDelegate <PUBarsControllerDelegate>
@optional
-(void)oneUpBarsControllerDidTapTitle:(id)arg1;
-(void)oneUpBarsController:(id)arg1 willExecuteActionPerformer:(id)arg2;
-(void)oneUpBarsControllerToggleCommentsVisibility:(id)arg1;
-(void)oneUpBarsController:(id)arg1 didTapPlayPauseButton:(BOOL)arg2;
-(void)oneUpBarsControllerDidEndShowingOriginal:(id)arg1;
-(void)oneUpBarsControllerDidBeginShowingOriginal:(id)arg1;
-(void)oneUpBarsControllerDidChangeShowingPlayPauseButton:(id)arg1;
-(BOOL)oneUpBarsController:(id)arg1 canShowCommentsForAsset:(id)arg2;
-(BOOL)oneUpBarsController:(id)arg1 shouldHideToolbarWhenShowingAccessoryViewForAssetReference:(id)arg2;
-(BOOL)oneUpBarsController:(id)arg1 shouldTapBeginAtLocationFromProvider:(id)arg2;
-(BOOL)oneUpBarsController:(id)arg1 canViewInLibraryForAsset:(id)arg2;
-(BOOL)oneUpBarsController:(id)arg1 shouldEnableShowOriginalForAsset:(id)arg2;
-(BOOL)oneUpBarsController:(id)arg1 canShowOriginalForAsset:(id)arg2;
-(void)oneUpBarsControllerToggleDetailsVisibility:(id)arg1;
-(BOOL)oneUpBarsController:(id)arg1 isAccessoryAvailableForAssetReference:(id)arg2;

@end

