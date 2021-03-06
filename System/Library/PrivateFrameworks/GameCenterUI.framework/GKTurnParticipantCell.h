/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBasePlayerCell.h>

@class GKTurnBasedMatch, GKTurnBasedParticipant, GKLabel, UIButton, UIImageView, GKContiguousContainerView, NSLayoutConstraint;

@interface GKTurnParticipantCell : GKBasePlayerCell {

	BOOL _isDetail;
	GKTurnBasedMatch* _match;
	GKTurnBasedParticipant* _participant;
	SEL _detailPressedAction;
	GKLabel* _topLabel;
	GKLabel* _bottomLabel;
	UIButton* _detailButton;
	UIImageView* _statusImageView;
	GKContiguousContainerView* _textContainerView;
	NSLayoutConstraint* _iconLeadingConstraint;
	NSLayoutConstraint* _statusImageTrailingConstraint;
	NSLayoutConstraint* _textContainerTrailingConstraint;
	NSLayoutConstraint* _detailButtonConstraint;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) GKLabel * topLabel;                                                //@synthesize topLabel=_topLabel - In the implementation block
@property (nonatomic,retain) GKLabel * bottomLabel;                                             //@synthesize bottomLabel=_bottomLabel - In the implementation block
@property (nonatomic,retain) UIButton * detailButton;                                           //@synthesize detailButton=_detailButton - In the implementation block
@property (nonatomic,retain) UIImageView * statusImageView;                                     //@synthesize statusImageView=_statusImageView - In the implementation block
@property (nonatomic,retain) GKContiguousContainerView * textContainerView;                     //@synthesize textContainerView=_textContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * iconLeadingConstraint;                        //@synthesize iconLeadingConstraint=_iconLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * statusImageTrailingConstraint;                //@synthesize statusImageTrailingConstraint=_statusImageTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textContainerTrailingConstraint;              //@synthesize textContainerTrailingConstraint=_textContainerTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * detailButtonConstraint;                       //@synthesize detailButtonConstraint=_detailButtonConstraint - In the implementation block
@property (nonatomic,retain) GKTurnBasedMatch * match;                                          //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) GKTurnBasedParticipant * participant;                              //@synthesize participant=_participant - In the implementation block
@property (assign,nonatomic) SEL detailPressedAction;                                           //@synthesize detailPressedAction=_detailPressedAction - In the implementation block
@property (assign,nonatomic) BOOL isDetail;                                                     //@synthesize isDetail=_isDetail - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                                               //@synthesize insets=_insets - In the implementation block
+(void)registerCellClassesForCollectionView:(id)arg1 ;
+(id)itemHeightList;
+(double)defaultRowHeight;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(GKLabel *)topLabel;
-(void)setTopLabel:(GKLabel *)arg1 ;
-(GKTurnBasedParticipant *)participant;
-(void)setStatusImageView:(UIImageView *)arg1 ;
-(void)setTextContainerView:(GKContiguousContainerView *)arg1 ;
-(GKContiguousContainerView *)textContainerView;
-(UIImageView *)statusImageView;
-(void)setDetailButton:(UIButton *)arg1 ;
-(UIButton *)detailButton;
-(GKTurnBasedMatch *)match;
-(void)setParticipant:(GKTurnBasedParticipant *)arg1 ;
-(void)setBottomLabel:(GKLabel *)arg1 ;
-(GKLabel *)bottomLabel;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(void)didUpdateModel;
-(void)setDetailPressedAction:(SEL)arg1 ;
-(SEL)detailPressedAction;
-(void)setIsDetail:(BOOL)arg1 ;
-(void)establishConstraints;
-(BOOL)isDetail;
-(void)setIconLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextContainerTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStatusImageTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateMarginConstraints;
-(NSLayoutConstraint *)iconLeadingConstraint;
-(NSLayoutConstraint *)statusImageTrailingConstraint;
-(NSLayoutConstraint *)textContainerTrailingConstraint;
-(void)detailPressed:(id)arg1 ;
-(void)setDetailButtonConstraint:(NSLayoutConstraint *)arg1 ;
-(void)configureForDetail;
-(void)configureForMatch;
-(BOOL)matchWantsLocalPlayerAttention;
-(id)viewForPopover;
-(NSLayoutConstraint *)detailButtonConstraint;
@end

