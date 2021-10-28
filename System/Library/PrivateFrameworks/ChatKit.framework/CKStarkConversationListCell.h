/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UIImage, UIImageView, UILabel, UIDateLabel, NSDate, NSString;

@interface CKStarkConversationListCell : UITableViewCell {

	UIImage* _monogramImage;
	UIImageView* _chevronImageView;
	UIImageView* _unreadImageView;
	UILabel* _recipientsLabel;
	UIDateLabel* _dateLabel;

}

@property (nonatomic,retain) UIImageView * unreadImageView;               //@synthesize unreadImageView=_unreadImageView - In the implementation block
@property (nonatomic,retain) UILabel * recipientsLabel;                   //@synthesize recipientsLabel=_recipientsLabel - In the implementation block
@property (nonatomic,retain) UIDateLabel * dateLabel;                     //@synthesize dateLabel=_dateLabel - In the implementation block
@property (assign,nonatomic) BOOL hasUnreadMessages; 
@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSString * recipientNames; 
@property (assign,nonatomic) UIImage * monogramImage;                     //@synthesize monogramImage=_monogramImage - In the implementation block
@property (nonatomic,retain) UIImageView * chevronImageView;              //@synthesize chevronImageView=_chevronImageView - In the implementation block
+(double)starkCellMarginWidth;
-(void)setDate:(NSDate *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateUserInterfaceStyle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIDateLabel *)dateLabel;
-(void)setMonogramImage:(UIImage *)arg1 ;
-(UIImage *)monogramImage;
-(void)setDateLabel:(UIDateLabel *)arg1 ;
-(void)setRecipientNames:(NSString *)arg1 ;
-(void)setHasUnreadMessages:(BOOL)arg1 ;
-(UIImageView *)chevronImageView;
-(void)setChevronImageView:(UIImageView *)arg1 ;
-(UIImageView *)unreadImageView;
-(UILabel *)recipientsLabel;
-(void)setUnreadImageView:(UIImageView *)arg1 ;
-(void)setRecipientsLabel:(UILabel *)arg1 ;
@end
