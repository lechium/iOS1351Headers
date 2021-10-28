/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UITextView, UILabel, UIView, PLCloudSharedComment;

@interface PUPhotoCommentCell : UITableViewCell {

	BOOL _usesCompactSeparators;
	UITextView* _commentContentTextView;
	UILabel* _commentBylineLabel;
	UIView* _styledSeparatorView;
	PLCloudSharedComment* _comment;

}

@property (nonatomic,retain,readonly) UITextView * commentContentTextView;              //@synthesize commentContentTextView=_commentContentTextView - In the implementation block
@property (nonatomic,retain,readonly) UILabel * commentBylineLabel;                     //@synthesize commentBylineLabel=_commentBylineLabel - In the implementation block
@property (nonatomic,retain,readonly) UIView * styledSeparatorView;                     //@synthesize styledSeparatorView=_styledSeparatorView - In the implementation block
@property (nonatomic,copy) PLCloudSharedComment * comment;                              //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) BOOL usesCompactSeparators;                                //@synthesize usesCompactSeparators=_usesCompactSeparators - In the implementation block
+(Class)layerClass;
+(double)heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3 ;
+(id)_synthesizedAttributedString:(id)arg1 withWordWrapping:(BOOL)arg2 ;
+(id)_attributionStringForComment:(id)arg1 ;
+(id)_commentStringForComment:(id)arg1 ;
-(void)prepareForReuse;
-(PLCloudSharedComment *)comment;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)delete:(id)arg1 ;
-(void)setComment:(PLCloudSharedComment *)arg1 ;
-(void)_updateContent;
-(void)setUsesCompactSeparators:(BOOL)arg1 ;
-(BOOL)usesCompactSeparators;
-(UIView *)styledSeparatorView;
-(UITextView *)commentContentTextView;
-(UILabel *)commentBylineLabel;
@end
