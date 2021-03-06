/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXHorizontalCollectionGadget.h>
#import <libobjc.A.dylib/PUStackedAlbumTransitionDelegate.h>
#import <libobjc.A.dylib/PUCloudSharedAlbumViewControllerDelegate.h>
#import <libobjc.A.dylib/PXNavigableCollectionContainer.h>

@class PUAlbumsGadgetProvider, PUSessionInfo, PUPhotoPinchGestureRecognizer, PUAlbumDropSessionController, NSUserActivity, PUAlbumListViewControllerSpec, NSString;

@interface PUHorizontalAlbumListGadget : PXHorizontalCollectionGadget <PUStackedAlbumTransitionDelegate, PUCloudSharedAlbumViewControllerDelegate, PXNavigableCollectionContainer> {

	PUAlbumsGadgetProvider* _provider;
	PUSessionInfo* _sessionInfo;
	PUPhotoPinchGestureRecognizer* _pinchGestureRecognizer;
	PUAlbumDropSessionController* _dropSessionController;
	NSUserActivity* _siriActionActivity;

}

@property (nonatomic,readonly) PUPhotoPinchGestureRecognizer * pinchGestureRecognizer;                   //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (nonatomic,readonly) PUAlbumDropSessionController * dropSessionController;                     //@synthesize dropSessionController=_dropSessionController - In the implementation block
@property (nonatomic,readonly) PUAlbumListViewControllerSpec * albumListViewControllerSpec; 
@property (nonatomic,retain) NSUserActivity * siriActionActivity;                                        //@synthesize siriActionActivity=_siriActionActivity - In the implementation block
@property (nonatomic,readonly) PUAlbumsGadgetProvider * provider;                                        //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                                //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(PUAlbumsGadgetProvider *)provider;
-(void)viewDidLoad;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3 ;
-(void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(PUPhotoPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)_handlePinch:(id)arg1 ;
-(PUSessionInfo *)sessionInfo;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2 ;
-(unsigned long long)gadgetType;
-(unsigned long long)accessoryButtonType;
-(id)accessoryButtonTitle;
-(unsigned long long)gadgetCapabilities;
-(void)setGadgetSpec:(id)arg1 ;
-(id)px_gridPresentation;
-(NSUserActivity *)siriActionActivity;
-(void)setSiriActionActivity:(NSUserActivity *)arg1 ;
-(void)_updateCollectionViewLayout;
-(BOOL)canNavigateToCollection:(id)arg1 ;
-(void)navigateToCollection:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(PUAlbumDropSessionController *)dropSessionController;
-(void)stackedAlbumTransition:(id)arg1 setVisibility:(BOOL)arg2 forPHCollection:(id)arg3 ;
-(id)stackedAlbumTransition:(id)arg1 layoutForPHCollection:(id)arg2 forCollectionView:(id)arg3 ;
-(void)stackedAlbumTransition:(id)arg1 setVisibility:(BOOL)arg2 forCollection:(id)arg3 ;
-(id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 forCollectionView:(id)arg3 ;
-(PUAlbumListViewControllerSpec *)albumListViewControllerSpec;
-(void)sharedAlbumDeletedBySharedAlbumViewController:(id)arg1 ;
-(id)initWithAlbumsGadgetProvider:(id)arg1 ;
-(BOOL)_canUseStackedAlbumTransitionToNavigationToCollection:(id)arg1 ;
-(void)_navigateToCollection:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
@end

