/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoEditBaseAdjustmentCell.h>

@protocol PUPhotoEditBaseAdjustmentCellDelegate;
@class UITapGestureRecognizer;

@interface PUPhotoEditAutoAdjustmentCell : PUPhotoEditBaseAdjustmentCell {

	id<PUPhotoEditBaseAdjustmentCellDelegate> _delegate;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoEditBaseAdjustmentCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<PUPhotoEditBaseAdjustmentCellDelegate>)delegate;
-(void)setDelegate:(id<PUPhotoEditBaseAdjustmentCellDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setImageName:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)handleButton:(id)arg1 ;
-(void)_configureContainerButton;
@end

