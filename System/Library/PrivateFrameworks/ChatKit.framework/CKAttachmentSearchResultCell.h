/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableSearchResultCell.h>
#import <libobjc.A.dylib/CKSearchResultCell.h>

@class UIImageView, UILabel, UIDateLabel, NSString, CKSearchAvatarSupplementryView;

@interface CKAttachmentSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell> {

	BOOL _suppressAvatars;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UIDateLabel* _dateLabel;
	NSString* _identifier;
	CKSearchAvatarSupplementryView* _avatarView;
	UIEdgeInsets marginInsets;

}

@property (assign,nonatomic) BOOL suppressAvatars;                                     //@synthesize suppressAvatars=_suppressAvatars - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIDateLabel * dateLabel;                                  //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) CKSearchAvatarSupplementryView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) CGPoint avatarOffsetLTR; 
@property (nonatomic,readonly) CGPoint avatarOffsetRTL; 
@property (nonatomic,readonly) double editModeHorizontalOffset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
+(id)reuseIdentifier;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIDateLabel *)dateLabel;
-(CKSearchAvatarSupplementryView *)avatarView;
-(void)setAvatarView:(CKSearchAvatarSupplementryView *)arg1 ;
-(void)setDateLabel:(UIDateLabel *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(BOOL)suppressAvatars;
-(double)editModeHorizontalOffset;
-(CGPoint)avatarOffsetLTR;
-(CGPoint)avatarOffsetRTL;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
-(void)setSuppressAvatars:(BOOL)arg1 ;
-(void)_thumbnailGenerated:(id)arg1 ;
@end

