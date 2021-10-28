/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXPhotosDataSourceChangeObserver <NSObject>
@optional
-(id)photosDataSourceInterestingAssetReferences:(id)arg1;
-(void)photosDataSourceWillChange:(id)arg1;
-(void)photosDataSource:(id)arg1 didChange:(id)arg2;
-(void)photosDataSource:(id)arg1 didReceivePhotoLibraryChange:(id)arg2;
-(void)photosDataSourceDidFinishBackgroundFetching:(id)arg1;

@end
