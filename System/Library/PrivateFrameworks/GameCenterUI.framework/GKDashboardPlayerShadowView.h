/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UICollectionViewCell, GKDashboardPlayerPhotoView, UIView, GKPlayer;

@interface GKDashboardPlayerShadowView : UIView {

	UICollectionViewCell* _parentCell;
	GKDashboardPlayerPhotoView* _photoView;

}

@property (nonatomic,readonly) UIView * parentView; 
@property (assign,nonatomic) GKDashboardPlayerPhotoView * photoView;              //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,retain) GKPlayer * player; 
@property (assign,nonatomic) UICollectionViewCell * parentCell;                   //@synthesize parentCell=_parentCell - In the implementation block
@property (nonatomic,readonly) BOOL isUsingPlaceholder; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)awakeFromNib;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKDashboardPlayerPhotoView *)photoView;
-(void)setPhotoView:(GKDashboardPlayerPhotoView *)arg1 ;
-(void)invalidatePhoto;
-(BOOL)isUsingPlaceholder;
-(void)setupPhoto;
-(UIView *)parentView;
-(UICollectionViewCell *)parentCell;
-(void)setParentCell:(UICollectionViewCell *)arg1 ;
@end

