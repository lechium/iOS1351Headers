/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UILabel, UIImageView, _Badge, NSString, UIImage;

@interface SKUICrossFadingTabBarButton : UIControl {

	UILabel* _selectedTitleLabel;
	UIImageView* _selectedImageView;
	UILabel* _standardTitleLabel;
	UIImageView* _standardImageView;
	_Badge* _badge;
	NSString* _title;
	UIImage* _image;
	UIImage* _selectedImage;
	double _selectionProgress;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                       //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * selectedImage;               //@synthesize selectedImage=_selectedImage - In the implementation block
@property (assign,nonatomic) double selectionProgress;              //@synthesize selectionProgress=_selectionProgress - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)_setBadgeValue:(id)arg1 ;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(UIImage *)selectedImage;
-(void)_positionBadge;
-(void)setSelectionProgress:(double)arg1 ;
-(double)selectionProgress;
@end
