/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUViewControllerSpec.h>
#import <libobjc.A.dylib/PUPhotoEditLayoutDynamicAdaptable.h>

@class NSString;

@interface PUPhotoEditToolControllerSpec : PUViewControllerSpec <PUPhotoEditLayoutDynamicAdaptable> {

	long long _layoutOrientation;

}

@property (nonatomic,readonly) double standardBottomBarHeight; 
@property (nonatomic,readonly) double standardSideBarWidth; 
@property (nonatomic,readonly) BOOL isiPadLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long layoutOrientation; 
+(id)toolPickerSelectionColor;
-(long long)layoutOrientation;
-(void)setLayoutOrientation:(long long)arg1 ;
-(double)standardBottomBarHeight;
-(void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2 ;
-(double)standardSideBarWidth;
-(BOOL)isiPadLayout;
@end

