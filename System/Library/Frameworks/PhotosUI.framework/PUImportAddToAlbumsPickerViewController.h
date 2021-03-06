/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PXCollectionsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PUAlbumCreatorDelegate.h>

@protocol PXImportAlbumPickerDelegate;
@class PHCollection, NSIndexPath, PUImportAddToAlbumsPickerCell, PXPhotoKitCollectionsDataSourceManagerConfiguration, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager, NSString;

@interface PUImportAddToAlbumsPickerViewController : UITableViewController <PXCollectionsDataSourceManagerObserver, PUAlbumCreatorDelegate> {

	PHCollection* _selectedCollection;
	NSIndexPath* _selectedIndex;
	PUImportAddToAlbumsPickerCell* _selectedCell;
	PHCollection* _createdAlbum;
	BOOL _needsDatasourceUpdate;
	PXPhotoKitCollectionsDataSourceManagerConfiguration* _dataSourceManagerConfiguration;
	id<PXImportAlbumPickerDelegate> _delegate;
	PXPhotoKitCollectionsDataSource* _dataSource;
	PXPhotoKitCollectionsDataSourceManager* _dataSourceManager;

}

@property (nonatomic,retain) PXPhotoKitCollectionsDataSource * dataSource;                                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) PXPhotoKitCollectionsDataSourceManager * dataSourceManager;                                        //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) PXPhotoKitCollectionsDataSourceManagerConfiguration * dataSourceManagerConfiguration;              //@synthesize dataSourceManagerConfiguration=_dataSourceManagerConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<PXImportAlbumPickerDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)dataSourceOffset;
+(id)dataSourceShiftedIndexPath:(id)arg1 ;
+(unsigned long long)cellTypeForPosition:(id)arg1 ;
+(id)userCreatredAlbumsPhotoKitConfiguration;
-(id)init;
-(id<PXImportAlbumPickerDelegate>)delegate;
-(void)setDelegate:(id<PXImportAlbumPickerDelegate>)arg1 ;
-(PXPhotoKitCollectionsDataSource *)dataSource;
-(void)setDataSource:(PXPhotoKitCollectionsDataSource *)arg1 ;
-(/*^block*/id)completionHandler;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXPhotoKitCollectionsDataSourceManager *)dataSourceManager;
-(void)setDataSourceManager:(PXPhotoKitCollectionsDataSourceManager *)arg1 ;
-(void)setDataSourceManagerConfiguration:(PXPhotoKitCollectionsDataSourceManagerConfiguration *)arg1 ;
-(id)hostViewContoller;
-(BOOL)canPresentPicker;
-(PXPhotoKitCollectionsDataSourceManagerConfiguration *)dataSourceManagerConfiguration;
-(id)albumListViewControllerSpec;
-(void)updateDatasource;
-(double)_heightForIndex:(id)arg1 ;
-(void)_selectCell:(id)arg1 ;
-(id)posterImageForCollection:(id)arg1 cell:(id)arg2 forCellType:(unsigned long long)arg3 ;
-(id)addAlbumPlaceHolder:(CGSize)arg1 newAlbum:(BOOL)arg2 ;
-(void)selectCollection:(id)arg1 ;
-(void)configureDataSourceManagerConfiguration:(id)arg1 ;
-(id)createAlbumListViewController;
-(void)_handleCreateAlbum;
-(void)_dismissPicker;
@end

