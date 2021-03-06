/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKAttachmentView.h>
@class CKMediaObject, UIImageView;


@protocol CKAttachmentView <NSObject>
@property (nonatomic,retain) CKMediaObject * mediaObject; 
@property (nonatomic,readonly) UIImageView * iconImageView; 
@required
-(void)prepareForReuse;
-(void)prepareForDisplay;
-(UIImageView *)iconImageView;
-(CKMediaObject *)mediaObject;
-(void)setMediaObject:(id)arg1;

@end


@class CKMediaObject, UIImageView, UILabel, NSString;

@interface CKAttachmentView : UIView <CKAttachmentView> {

	CKMediaObject* _mediaObject;
	UIImageView* _iconImageView;
	UILabel* _actionLabel;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * actionLabel;                    //@synthesize actionLabel=_actionLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                  //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) CKMediaObject * mediaObject;              //@synthesize mediaObject=_mediaObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)title;
-(void)setTitle:(id)arg1 ;
-(void)prepareForReuse;
-(id)action;
-(id)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)icon;
-(void)setAction:(id)arg1 ;
-(void)setIcon:(id)arg1 ;
-(void)prepareForDisplay;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UILabel *)actionLabel;
-(void)setActionLabel:(UILabel *)arg1 ;
-(CKMediaObject *)mediaObject;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(void)configureIconImageView:(BOOL)arg1 ;
@end

