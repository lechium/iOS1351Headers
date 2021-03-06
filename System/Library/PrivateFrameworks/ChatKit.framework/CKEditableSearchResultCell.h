/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView;

@interface CKEditableSearchResultCell : UICollectionViewCell {

	BOOL _editing;
	UIImageView* _checkmarkView;

}

@property (assign,getter=isEditing,nonatomic) BOOL editing;              //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkView;                //@synthesize checkmarkView=_checkmarkView - In the implementation block
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(UIImageView *)checkmarkView;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
@end

