/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/HUWallpaperPhotoCellDelegate.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol HUWallpaperPickerInlineViewControllerDelegate;
@class NSArray, UIImage, NSMutableDictionary, UIImagePickerController, HUWallpaperPhotoCell, UICollectionViewFlowLayout, HFWallpaper, UIDropInteraction, NSIndexPath, NSString;

@interface HUWallpaperPickerInlineViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, HUWallpaperPhotoCellDelegate, UIDropInteractionDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	NSArray* _namedWallpapers;
	double _preferedHeight;
	UIImage* _originalCustomImage;
	id<HUWallpaperPickerInlineViewControllerDelegate> _delegate;
	NSMutableDictionary* _imageCache;
	UIImagePickerController* _imagePicker;
	HUWallpaperPhotoCell* _customWallpaperCell;
	UICollectionViewFlowLayout* _flowLayout;
	HFWallpaper* _customWallpaper;
	UIDropInteraction* _dropInteraction;
	NSIndexPath* _selectedIndexPath;
	unsigned long long _numberOfWallpapersFittingInWidth;
	CGSize _imageSize;

}

@property (nonatomic,retain) NSMutableDictionary * imageCache;                                               //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) UIImagePickerController * imagePicker;                                          //@synthesize imagePicker=_imagePicker - In the implementation block
@property (nonatomic,retain) HUWallpaperPhotoCell * customWallpaperCell;                                     //@synthesize customWallpaperCell=_customWallpaperCell - In the implementation block
@property (readonly) HFWallpaper * selectedWallpaper; 
@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;                                        //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) HFWallpaper * customWallpaper;                                                  //@synthesize customWallpaper=_customWallpaper - In the implementation block
@property (nonatomic,retain) UIDropInteraction * dropInteraction;                                            //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                                //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (readonly) unsigned long long numberOfWallpapers; 
@property (assign,nonatomic) unsigned long long numberOfWallpapersFittingInWidth;                            //@synthesize numberOfWallpapersFittingInWidth=_numberOfWallpapersFittingInWidth - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                                               //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) NSArray * namedWallpapers;                                                      //@synthesize namedWallpapers=_namedWallpapers - In the implementation block
@property (nonatomic,readonly) double preferedHeight;                                                        //@synthesize preferedHeight=_preferedHeight - In the implementation block
@property (nonatomic,retain) UIImage * originalCustomImage;                                                  //@synthesize originalCustomImage=_originalCustomImage - In the implementation block
@property (assign,nonatomic,__weak) id<HUWallpaperPickerInlineViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)useWallpaperPickerCell;
-(id)init;
-(id<HUWallpaperPickerInlineViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUWallpaperPickerInlineViewControllerDelegate>)arg1 ;
-(NSMutableDictionary *)imageCache;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)imageSize;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(UIDropInteraction *)dropInteraction;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(UICollectionViewFlowLayout *)flowLayout;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setSelectedIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateScrolling;
-(HUWallpaperPhotoCell *)customWallpaperCell;
-(void)configureCell:(id)arg1 image:(id)arg2 wallpaper:(id)arg3 ;
-(unsigned long long)numberOfWallpapers;
-(void)setNumberOfWallpapersFittingInWidth:(unsigned long long)arg1 ;
-(HFWallpaper *)selectedWallpaper;
-(HFWallpaper *)customWallpaper;
-(NSArray *)namedWallpapers;
-(id)wallpaperForIndexPath:(id)arg1 ;
-(void)setCustomWallpaperCell:(HUWallpaperPhotoCell *)arg1 ;
-(UIImage *)originalCustomImage;
-(void)setImagePicker:(UIImagePickerController *)arg1 ;
-(UIImagePickerController *)imagePicker;
-(void)setSelectedWallpaper:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCustomWallpaper:(HFWallpaper *)arg1 ;
-(unsigned long long)numberOfWallpapersFittingInWidth;
-(void)wallpaperPhotoCellDidPressDeleteButton:(id)arg1 ;
-(void)setCustomWallpaper:(id)arg1 image:(id)arg2 ;
-(void)setNamedWallpapers:(NSArray *)arg1 ;
-(void)setImageSizeToFitWidth:(double)arg1 forNumberOfWallpapers:(unsigned long long)arg2 ;
-(double)preferedHeight;
-(void)setOriginalCustomImage:(UIImage *)arg1 ;
@end
