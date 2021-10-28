/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView, CNAvatarViewController, PXRoundImageView, UILabel, UIImageView, NSString, UIImage, UIColor, CNContact;

@interface PXCMMComposeRecipientTableViewCell : UITableViewCell {

	UIView* _avatarView;
	UIView* _contactAvatarView;
	CNAvatarViewController* _contactAvatarViewController;
	PXRoundImageView* _customAvatarImageView;
	UILabel* _localizedNameLabel;
	UILabel* _transportLabel;
	UIImageView* _accessoryImageView;
	BOOL _emphasizeLocalizedName;
	BOOL _checked;
	int _currentRequestID;
	NSString* _localizedName;
	NSString* _transport;
	UIImage* _faceImage;
	UIColor* _textColor;
	CNContact* _contact;
	double _inset;
	UIView* _popoverSourceView;
	CGSize _faceImageViewSize;

}

@property (nonatomic,copy) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) BOOL emphasizeLocalizedName;                //@synthesize emphasizeLocalizedName=_emphasizeLocalizedName - In the implementation block
@property (nonatomic,copy) NSString * transport;                         //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) UIImage * faceImage;                        //@synthesize faceImage=_faceImage - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                        //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) CNContact * contact;                        //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) double inset;                               //@synthesize inset=_inset - In the implementation block
@property (assign,nonatomic) CGSize faceImageViewSize;                   //@synthesize faceImageViewSize=_faceImageViewSize - In the implementation block
@property (nonatomic,retain) UIView * popoverSourceView;                 //@synthesize popoverSourceView=_popoverSourceView - In the implementation block
@property (assign,nonatomic) int currentRequestID;                       //@synthesize currentRequestID=_currentRequestID - In the implementation block
@property (assign,getter=isChecked,nonatomic) BOOL checked;              //@synthesize checked=_checked - In the implementation block
-(NSString *)localizedName;
-(void)prepareForReuse;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)transport;
-(void)setTransport:(NSString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(UIColor *)textColor;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setPopoverSourceView:(UIView *)arg1 ;
-(UIView *)popoverSourceView;
-(void)_updateLayout;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(void)setInset:(double)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(double)inset;
-(void)_updateAvatarView;
-(UIImage *)faceImage;
-(void)setFaceImage:(UIImage *)arg1 ;
-(void)setFaceImageViewSize:(CGSize)arg1 ;
-(void)setEmphasizeLocalizedName:(BOOL)arg1 ;
-(void)_updateLocalizedNameLabel;
-(void)_updateTransportLabel;
-(void)_updateAccessoryImageView;
-(BOOL)emphasizeLocalizedName;
-(CGSize)faceImageViewSize;
-(int)currentRequestID;
-(void)setCurrentRequestID:(int)arg1 ;
@end
