/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class UIImageView, UIView, PXImageRequesterHelper, PXCMMImageViewModel, NSString;

@interface PXCMMImageView : UIView <PXChangeObserver> {

	UIImageView* _imageView;
	UIView* _highlightView;
	PXImageRequesterHelper* _imageRequesterHelper;
	PXCMMImageViewModel* _viewModel;

}

@property (nonatomic,retain) PXCMMImageViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateImage;
-(void)_updateContentsRect;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXCMMImageViewModel *)viewModel;
-(void)setViewModel:(PXCMMImageViewModel *)arg1 ;
-(void)_updateImageRequestHelper;
-(void)_updateHighlighted;
-(BOOL)test_highlighted;
@end
