/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class UIActivityIndicatorView, NSString, UIView;

@interface PXPlaceholderView : UIView <PXReusableObject, PXUIViewBasicTile> {

	UIActivityIndicatorView* _indicator;
	BOOL _shouldShowIndicatorView;

}

@property (assign,nonatomic) BOOL shouldShowIndicatorView;              //@synthesize shouldShowIndicatorView=_shouldShowIndicatorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
-(void)prepareForReuse;
-(UIView *)view;
-(void)layoutSubviews;
-(void)_updateSubviews;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)becomeReusable;
-(void)setShouldShowIndicatorView:(BOOL)arg1 ;
-(BOOL)shouldShowIndicatorView;
@end
