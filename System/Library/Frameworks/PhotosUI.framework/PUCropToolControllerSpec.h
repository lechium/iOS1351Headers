/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoEditToolControllerSpec.h>

@class UIColor, PXLabelSpec;

@interface PUCropToolControllerSpec : PUPhotoEditToolControllerSpec

@property (nonatomic,readonly) double cropRectMargin; 
@property (nonatomic,readonly) double minimumCropInset; 
@property (nonatomic,readonly) CGSize minimumCropSize; 
@property (nonatomic,readonly) CGSize minimumCropHandleViewSize; 
@property (nonatomic,readonly) CGSize cropActionButtonSize; 
@property (nonatomic,readonly) double cropHandleViewLineThickness; 
@property (nonatomic,readonly) double cropHandleViewLineMargin; 
@property (nonatomic,readonly) double standardBottomBarWidth; 
@property (nonatomic,readonly) double standardSideBarHeight; 
@property (nonatomic,readonly) double leftInsetForiPad; 
@property (nonatomic,readonly) double cropTopBarHeight; 
@property (nonatomic,readonly) double cropAspectRatioScrollHeight; 
@property (nonatomic,readonly) double cropAspectFlipperWidth; 
@property (nonatomic,readonly) UIEdgeInsets cropAspectRatioScrollContentInset; 
@property (nonatomic,readonly) UIEdgeInsets cropAspectRatioButtonTitleInset; 
@property (nonatomic,readonly) UIColor * cropAspectButtonColor; 
@property (nonatomic,readonly) UIColor * cropAspectButtonSelectedColor; 
@property (nonatomic,readonly) PXLabelSpec * cropHeaderLabelSpec; 
-(double)standardBottomBarHeight;
-(UIEdgeInsets)cropAspectRatioScrollContentInset;
-(UIColor *)cropAspectButtonSelectedColor;
-(UIColor *)cropAspectButtonColor;
-(CGSize)minimumCropSize;
-(double)cropTopBarHeight;
-(double)cropAspectFlipperWidth;
-(double)cropAspectRatioScrollHeight;
-(double)standardSideBarWidth;
-(double)minimumCropInset;
-(CGSize)minimumCropHandleViewSize;
-(double)cropRectMargin;
-(CGSize)cropActionButtonSize;
-(double)cropHandleViewLineMargin;
-(double)cropHandleViewLineThickness;
-(double)leftInsetForiPad;
-(double)standardBottomBarWidth;
-(double)standardSideBarHeight;
-(PXLabelSpec *)cropHeaderLabelSpec;
-(UIEdgeInsets)cropAspectRatioButtonTitleInset;
@end
