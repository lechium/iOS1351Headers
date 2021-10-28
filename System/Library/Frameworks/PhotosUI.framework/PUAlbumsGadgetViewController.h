/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGadgetUIViewController.h>
#import <libobjc.A.dylib/PXNavigableCollectionContainer.h>
#import <libobjc.A.dylib/PXNavigationRoot.h>

@class NSString, UIBarButtonItem, UINavigationController, PXNavigationListDataSectionManager, PUSessionInfo;

@interface PUAlbumsGadgetViewController : PXGadgetUIViewController <PXNavigableCollectionContainer, PXNavigationRoot> {

	UIBarButtonItem* _navigationDisplayModeButtonItem;
	PXNavigationListDataSectionManager* _navigationListDataSourceManager;
	PUSessionInfo* _sessionInfo;
	UIBarButtonItem* _plusButtonItem;

}

@property (nonatomic,retain) UIBarButtonItem * plusButtonItem;                                                    //@synthesize plusButtonItem=_plusButtonItem - In the implementation block
@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                                         //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * navigationTitle; 
@property (nonatomic,readonly) NSString * navigationIdentifier; 
@property (nonatomic,retain) UIBarButtonItem * navigationDisplayModeButtonItem;                                   //@synthesize navigationDisplayModeButtonItem=_navigationDisplayModeButtonItem - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController; 
@property (nonatomic,readonly) PXNavigationListDataSectionManager * navigationListDataSourceManager;              //@synthesize navigationListDataSourceManager=_navigationListDataSourceManager - In the implementation block
+(id)_supportedActionsByKeyCommands;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)keyCommands;
-(NSString *)navigationTitle;
-(void)_updateNavigationBar;
-(void)pushViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PUSessionInfo *)sessionInfo;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
-(void)selectNavigationListItem:(id)arg1 hintIndex:(long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(PXNavigationListDataSectionManager *)navigationListDataSourceManager;
-(NSString *)navigationIdentifier;
-(UIBarButtonItem *)navigationDisplayModeButtonItem;
-(void)setNavigationDisplayModeButtonItem:(UIBarButtonItem *)arg1 ;
-(void)configureSectionHeader:(id)arg1 ;
-(long long)scrollAnimationIdentifier;
-(id)px_gridPresentation;
-(BOOL)canRouteToDestination:(id)arg1 ;
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithLayout:(id)arg1 dataSourceManager:(id)arg2 ;
-(BOOL)canNavigateToCollection:(id)arg1 ;
-(void)navigateToCollection:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleDoneButton:(id)arg1 ;
-(void)_performCreateNewAlbum;
-(void)_performCreateNewSmartAlbum;
-(void)presentNewActionAlertControllerWithOptions:(unsigned long long)arg1 ;
-(id)_newSmartAlbumActionWithSpec:(id)arg1 ;
-(void)_performCreateNewSharedAlbum;
-(void)_performCreateNewFolder;
-(id)_newAlbumActionWithSpec:(id)arg1 ;
-(id)_newFolderActionWithSpec:(id)arg1 ;
-(id)_newSharedAlbumActionWithSpec:(id)arg1 ;
-(UIBarButtonItem *)plusButtonItem;
-(void)_performActionOfActionType:(long long)arg1 ;
-(void)_performKeyCommand:(id)arg1 ;
-(id)_navigableGadgetForCollection:(id)arg1 ;
-(void)_handlePlusButton:(id)arg1 ;
-(void)_handlePlusButtonLongPress:(id)arg1 ;
-(void)setPlusButtonItem:(UIBarButtonItem *)arg1 ;
@end
