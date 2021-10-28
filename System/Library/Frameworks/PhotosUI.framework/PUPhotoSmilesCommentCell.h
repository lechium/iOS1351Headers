/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSOrderedSet, UIView;

@interface PUPhotoSmilesCommentCell : UITableViewCell {

	BOOL _isVideo;
	BOOL _usesCompactSeparators;
	UILabel* _smileContentLabel;
	NSOrderedSet* _userLikes;
	UIView* _styledSeparatorView;

}

@property (nonatomic,retain,readonly) UILabel * smileContentLabel;               //@synthesize smileContentLabel=_smileContentLabel - In the implementation block
@property (nonatomic,retain,readonly) UIView * styledSeparatorView;              //@synthesize styledSeparatorView=_styledSeparatorView - In the implementation block
@property (nonatomic,copy) NSOrderedSet * userLikes;                             //@synthesize userLikes=_userLikes - In the implementation block
@property (assign,nonatomic) BOOL isVideo;                                       //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL usesCompactSeparators;                         //@synthesize usesCompactSeparators=_usesCompactSeparators - In the implementation block
+(double)heightOfSmileCellWithComments:(id)arg1 forWidth:(double)arg2 isVideo:(BOOL)arg3 forInterfaceOrientation:(long long)arg4 ;
+(id)_attributedStringForComments:(id)arg1 color:(id)arg2 isVideo:(BOOL)arg3 ;
+(id)_smileStringForComments:(id)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)isVideo;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)_updateContent;
-(void)setUsesCompactSeparators:(BOOL)arg1 ;
-(void)setUserLikes:(NSOrderedSet *)arg1 ;
-(UILabel *)smileContentLabel;
-(NSOrderedSet *)userLikes;
-(BOOL)usesCompactSeparators;
-(UIView *)styledSeparatorView;
@end
