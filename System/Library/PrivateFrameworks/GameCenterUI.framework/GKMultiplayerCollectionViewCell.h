/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class GKMultiplayerParticipant, UILabel, UIView, GKDashboardPlayerPhotoView, NSLayoutConstraint;

@interface GKMultiplayerCollectionViewCell : UICollectionViewCell {

	BOOL _removable;
	GKMultiplayerParticipant* _participant;
	long long _number;
	UILabel* _nameLabel;
	UILabel* _statusLabel;
	UIView* _accessoryContainerView;
	GKDashboardPlayerPhotoView* _iconView;
	NSLayoutConstraint* _cellLeadingConstraint;
	NSLayoutConstraint* _nameLabelBaselineConstraintToCenterLine;
	NSLayoutConstraint* _statusLabelTopConstraintToNameBaseline;
	NSLayoutConstraint* _statusLabelBaselineConstraintToNameBaseline;
	NSLayoutConstraint* _nameLabelCenterlineConstraintToCenterline;

}

@property (nonatomic,retain) UILabel * nameLabel;                                                           //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                                         //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UIView * accessoryContainerView;                                               //@synthesize accessoryContainerView=_accessoryContainerView - In the implementation block
@property (nonatomic,retain) GKDashboardPlayerPhotoView * iconView;                                         //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * cellLeadingConstraint;                                    //@synthesize cellLeadingConstraint=_cellLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nameLabelBaselineConstraintToCenterLine;                  //@synthesize nameLabelBaselineConstraintToCenterLine=_nameLabelBaselineConstraintToCenterLine - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * statusLabelTopConstraintToNameBaseline;                   //@synthesize statusLabelTopConstraintToNameBaseline=_statusLabelTopConstraintToNameBaseline - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * statusLabelBaselineConstraintToNameBaseline;              //@synthesize statusLabelBaselineConstraintToNameBaseline=_statusLabelBaselineConstraintToNameBaseline - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nameLabelCenterlineConstraintToCenterline;                //@synthesize nameLabelCenterlineConstraintToCenterline=_nameLabelCenterlineConstraintToCenterline - In the implementation block
@property (nonatomic,copy) GKMultiplayerParticipant * participant;                                          //@synthesize participant=_participant - In the implementation block
@property (assign,nonatomic) BOOL removable;                                                                //@synthesize removable=_removable - In the implementation block
@property (assign,nonatomic) long long number;                                                              //@synthesize number=_number - In the implementation block
+(id)reuseIdentifier;
-(void)dealloc;
-(id)description;
-(void)prepareForReuse;
-(long long)number;
-(void)setNumber:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(GKDashboardPlayerPhotoView *)iconView;
-(void)setIconView:(GKDashboardPlayerPhotoView *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(GKMultiplayerParticipant *)participant;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(UILabel *)statusLabel;
-(void)setParticipant:(GKMultiplayerParticipant *)arg1 ;
-(BOOL)removable;
-(void)configureConstraintsForCurrentTraitCollection;
-(void)participantChanged;
-(void)updateAccessoryViewForType:(long long)arg1 ;
-(void)removeAccessorySubviews;
-(void)setRemovable:(BOOL)arg1 ;
-(UIView *)accessoryContainerView;
-(void)setAccessoryContainerView:(UIView *)arg1 ;
-(NSLayoutConstraint *)cellLeadingConstraint;
-(void)setCellLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)nameLabelBaselineConstraintToCenterLine;
-(void)setNameLabelBaselineConstraintToCenterLine:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)statusLabelTopConstraintToNameBaseline;
-(void)setStatusLabelTopConstraintToNameBaseline:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)statusLabelBaselineConstraintToNameBaseline;
-(void)setStatusLabelBaselineConstraintToNameBaseline:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)nameLabelCenterlineConstraintToCenterline;
-(void)setNameLabelCenterlineConstraintToCenterline:(NSLayoutConstraint *)arg1 ;
@end
