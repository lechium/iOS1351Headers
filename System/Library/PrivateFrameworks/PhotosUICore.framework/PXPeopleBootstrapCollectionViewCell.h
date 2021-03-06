/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class PXPersonImageRequest, PXRoundedCornerOverlayView, UIView, UIImageView, UIImage;

@interface PXPeopleBootstrapCollectionViewCell : UICollectionViewCell {

	BOOL _confirmed;
	BOOL _isMergeCandidate;
	BOOL _isVerified;
	unsigned long long _presentationStatus;
	PXPersonImageRequest* _imageRequest;
	PXRoundedCornerOverlayView* _roundCornerOverlay;
	UIView* _selectedCheckmarkView;
	UIView* _unselectedCheckmarkView;
	UIImageView* _badgeView;
	UIImageView* _imageView;
	CGSize _checkmarkImageSize;

}

@property (nonatomic,readonly) PXRoundedCornerOverlayView * roundCornerOverlay;              //@synthesize roundCornerOverlay=_roundCornerOverlay - In the implementation block
@property (nonatomic,readonly) UIView * selectedCheckmarkView;                               //@synthesize selectedCheckmarkView=_selectedCheckmarkView - In the implementation block
@property (nonatomic,readonly) UIView * unselectedCheckmarkView;                             //@synthesize unselectedCheckmarkView=_unselectedCheckmarkView - In the implementation block
@property (nonatomic,readonly) UIImageView * badgeView;                                      //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) CGSize checkmarkImageSize;                                    //@synthesize checkmarkImageSize=_checkmarkImageSize - In the implementation block
@property (assign,nonatomic) BOOL confirmed;                                                 //@synthesize confirmed=_confirmed - In the implementation block
@property (assign,nonatomic) unsigned long long presentationStatus;                          //@synthesize presentationStatus=_presentationStatus - In the implementation block
@property (nonatomic,retain) PXPersonImageRequest * imageRequest;                            //@synthesize imageRequest=_imageRequest - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) BOOL isMergeCandidate;                                          //@synthesize isMergeCandidate=_isMergeCandidate - In the implementation block
@property (assign,nonatomic) BOOL isVerified;                                                //@synthesize isVerified=_isVerified - In the implementation block
+(id)cloudErrorBadgeImage;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(BOOL)_isRTL;
-(UIImageView *)badgeView;
-(BOOL)isVerified;
-(void)setIsVerified:(BOOL)arg1 ;
-(BOOL)confirmed;
-(void)setConfirmed:(BOOL)arg1 ;
-(PXPersonImageRequest *)imageRequest;
-(void)setImageRequest:(PXPersonImageRequest *)arg1 ;
-(PXRoundedCornerOverlayView *)roundCornerOverlay;
-(void)setPresentationStatus:(unsigned long long)arg1 ;
-(void)setIsMergeCandidate:(BOOL)arg1 ;
-(void)_updateCellSizing;
-(unsigned long long)presentationStatus;
-(BOOL)isMergeCandidate;
-(UIView *)selectedCheckmarkView;
-(UIView *)unselectedCheckmarkView;
-(CGSize)checkmarkImageSize;
@end

