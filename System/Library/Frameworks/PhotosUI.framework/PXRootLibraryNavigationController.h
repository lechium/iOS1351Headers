/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXRootLibraryNavigationController <NSObject,PLCloudFeedNavigating>
@required
-(void)navigateToRevealCloudFeedAsset:(id)arg1 completion:(/*^block*/id)arg2;
-(void)navigateToCloudFeedAsset:(id)arg1 completion:(/*^block*/id)arg2;
-(void)navigateToRevealCloudFeedComment:(id)arg1 completion:(/*^block*/id)arg2;
-(void)navigateToCloudFeedComment:(id)arg1 completion:(/*^block*/id)arg2;
-(void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg1 completion:(/*^block*/id)arg2;
-(void)navigateToRevealTheMostRecentMemoryAnimated:(BOOL)arg1;
-(void)navigateToRevealAlbum:(id)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
-(void)navigateToContentMode:(int)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)navigateToAsset:(id)arg1 openOneUp:(BOOL)arg2 animated:(BOOL)arg3;
-(void)navigateToPhotosContentBottomAnimated:(BOOL)arg1;
-(void)navigateToOneYearAgoSearch;
-(void)navigateToCloudFeedWithCompletion:(/*^block*/id)arg1;
-(void)navigateToAlbum:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)navigateToAsset:(id)arg1 inAlbum:(id)arg2 animated:(BOOL)arg3;
-(void)navigateToRevealAsset:(id)arg1 inAlbum:(id)arg2 animated:(BOOL)arg3;
-(void)navigateToComment:(id)arg1 forAsset:(id)arg2 animated:(BOOL)arg3;
-(BOOL)contentModeIsAvailableForNavigation:(int)arg1;
-(BOOL)albumIsAvailableForNavigation:(id)arg1;
-(BOOL)assetIsAvailableForNavigation:(id)arg1 inAlbum:(id)arg2;
-(BOOL)commentIsAvailableForNavigation:(id)arg1 inAsset:(id)arg2;
-(BOOL)cloudFeedIsAvailableForNavigation;
-(BOOL)assetIsAvailableForNavigationInMoments:(id)arg1;
-(BOOL)assetIsAvailableForNavigationInMoments:(id)arg1 refetchSectionsIfNeeded:(BOOL)arg2;
-(void)navigateToMemoryWithLocalIdentifier:(id)arg1;
-(void)navigateToSuggestedCMMWithIdentifier:(id)arg1 animated:(BOOL)arg2;
-(void)navigateToInvitationCMMWithIdentifier:(id)arg1 animated:(BOOL)arg2;
-(void)navigateToMomentShareWithURL:(id)arg1 animated:(BOOL)arg2;
-(void)navigateToPeopleAlbumAnimated:(BOOL)arg1 revealPersonWithLocalIdentifier:(id)arg2 completion:(/*^block*/id)arg3;

@end

