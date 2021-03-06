/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUAssetViewModelChangeObserver.h>

@class UIView, UIActivityIndicatorView, UIImageView, PUAssetViewModel, NSString;

@interface PUImportStatusTileViewController : PUTileViewController <PUAssetViewModelChangeObserver> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	UIView* _successView;
	UIActivityIndicatorView* _progressIndicatorView;
	UIImageView* _errorView;
	BOOL __isPerformingChanges;
	PUAssetViewModel* _assetViewModel;

}

@property (assign,nonatomic) BOOL _isPerformingChanges;                      //@synthesize _isPerformingChanges=__isPerformingChanges - In the implementation block
@property (nonatomic,retain) PUAssetViewModel * assetViewModel;              //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)_isPerformingChanges;
-(void)_updateIfNeeded;
-(void)becomeReusable;
-(void)setAssetViewModel:(PUAssetViewModel *)arg1 ;
-(PUAssetViewModel *)assetViewModel;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_updateStatusView;
-(void)set_isPerformingChanges:(BOOL)arg1 ;
@end

