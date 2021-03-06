/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol VCActionDonation;
@class NSString, WFDragGestureRecognizer, WFDragController, UIViewController, WFCircularImageView, WFActionDrawerImage, WFActionDrawerImageLoadTask, UILabel, NSArray;

@interface WFActionDrawerSiriSuggestionsCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate> {

	NSString* _title;
	long long _cellType;
	id<VCActionDonation> _donation;
	WFDragGestureRecognizer* _dragRecognizer;
	WFDragController* _dragController;
	UIViewController* _containingViewController;
	WFCircularImageView* _imageView;
	WFActionDrawerImage* _image;
	WFActionDrawerImageLoadTask* _imageLoadTask;
	UILabel* _titleLabel;
	NSArray* _verticalStackConstraints;
	NSArray* _horizontalStackConstraints;

}

@property (assign,nonatomic,__weak) WFCircularImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) WFActionDrawerImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) WFActionDrawerImageLoadTask * imageLoadTask;                     //@synthesize imageLoadTask=_imageLoadTask - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * verticalStackConstraints;                              //@synthesize verticalStackConstraints=_verticalStackConstraints - In the implementation block
@property (nonatomic,retain) NSArray * horizontalStackConstraints;                            //@synthesize horizontalStackConstraints=_horizontalStackConstraints - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long cellType;                                            //@synthesize cellType=_cellType - In the implementation block
@property (nonatomic,readonly) id<VCActionDonation> donation;                                 //@synthesize donation=_donation - In the implementation block
@property (assign,nonatomic,__weak) WFDragGestureRecognizer * dragRecognizer;                 //@synthesize dragRecognizer=_dragRecognizer - In the implementation block
@property (nonatomic,readonly) WFDragController * dragController;                             //@synthesize dragController=_dragController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * containingViewController;              //@synthesize containingViewController=_containingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldStackVerticallyForTraitCollection:(id)arg1 ;
+(CGSize)preferredSizeForType:(long long)arg1 forTraitCollection:(id)arg2 ;
+(CGSize)sizeForCellUsingVerticalStacking:(BOOL)arg1 ;
+(double)spacingForType:(long long)arg1 ;
-(NSString *)title;
-(void)prepareForReuse;
-(WFActionDrawerImage *)image;
-(void)setImage:(WFActionDrawerImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(WFCircularImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(WFCircularImageView *)arg1 ;
-(long long)cellType;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(WFDragGestureRecognizer *)dragRecognizer;
-(void)setDragRecognizer:(WFDragGestureRecognizer *)arg1 ;
-(void)setContainingViewController:(UIViewController *)arg1 ;
-(UIViewController *)containingViewController;
-(void)setUpLayoutConstraints;
-(void)adjustStackingStyle;
-(void)configureWithCellType:(long long)arg1 title:(id)arg2 donation:(id)arg3 genericAction:(id)arg4 forDailyRoutines:(BOOL)arg5 ;
-(void)loadImageForInteractionDonation:(id)arg1 ;
-(BOOL)shouldStackVerticallyForTraitCollection:(id)arg1 ;
-(id<VCActionDonation>)donation;
-(WFDragController *)dragController;
-(WFActionDrawerImageLoadTask *)imageLoadTask;
-(void)setImageLoadTask:(WFActionDrawerImageLoadTask *)arg1 ;
-(NSArray *)verticalStackConstraints;
-(void)setVerticalStackConstraints:(NSArray *)arg1 ;
-(NSArray *)horizontalStackConstraints;
-(void)setHorizontalStackConstraints:(NSArray *)arg1 ;
@end

