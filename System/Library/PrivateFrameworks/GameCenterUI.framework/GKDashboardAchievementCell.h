/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKRectShadowCell.h>

@class GKAchievement, GKAchievementIconView, GKResizingLabel, UILabel, UIView;

@interface GKDashboardAchievementCell : GKRectShadowCell {

	GKAchievement* _achievement;
	GKAchievement* _localAchievement;
	GKAchievementIconView* _iconView;
	GKResizingLabel* _titleLabel;
	GKResizingLabel* _descriptionLabel;
	UILabel* _pointsLabel;
	UILabel* _pointsTextLabel;

}

@property (nonatomic,retain) GKAchievement * achievement;                     //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,retain) GKAchievement * localAchievement;                //@synthesize localAchievement=_localAchievement - In the implementation block
@property (assign,nonatomic) GKAchievementIconView * iconView;                //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) GKResizingLabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) GKResizingLabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic) UILabel * pointsLabel;                           //@synthesize pointsLabel=_pointsLabel - In the implementation block
@property (assign,nonatomic) UILabel * pointsTextLabel;                       //@synthesize pointsTextLabel=_pointsTextLabel - In the implementation block
@property (nonatomic,readonly) UIView * popoverSourceView; 
-(void)dealloc;
-(GKResizingLabel *)titleLabel;
-(void)setTitleLabel:(GKResizingLabel *)arg1 ;
-(void)setDescriptionLabel:(GKResizingLabel *)arg1 ;
-(GKResizingLabel *)descriptionLabel;
-(UIView *)popoverSourceView;
-(GKAchievementIconView *)iconView;
-(void)setIconView:(GKAchievementIconView *)arg1 ;
-(GKAchievement *)achievement;
-(void)setAchievement:(GKAchievement *)arg1 ;
-(void)setLocalAchievement:(GKAchievement *)arg1 ;
-(void)setupForAchievement:(id)arg1 localAchievement:(id)arg2 ;
-(GKAchievement *)localAchievement;
-(UILabel *)pointsLabel;
-(void)setPointsLabel:(UILabel *)arg1 ;
-(UILabel *)pointsTextLabel;
-(void)setPointsTextLabel:(UILabel *)arg1 ;
@end

