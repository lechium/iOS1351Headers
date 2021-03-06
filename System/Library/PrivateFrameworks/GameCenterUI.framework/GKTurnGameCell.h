/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBaseGameCell.h>

@class GKLabel, UIImageView, GKContiguousContainerView, NSLayoutConstraint;

@interface GKTurnGameCell : GKBaseGameCell {

	unsigned long long _numberOfActiveMatches;
	unsigned long long _numberOfLocalPlayerTurns;
	GKLabel* _activeMatchesLabel;
	GKLabel* _localPlayerTurnsLabel;
	UIImageView* _statusImageView;
	GKContiguousContainerView* _textContainerView;
	NSLayoutConstraint* _iconLeadingConstraint;
	NSLayoutConstraint* _statusImageTrailingConstraint;
	NSLayoutConstraint* _textContainerTrailingConstraint;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) GKLabel * activeMatchesLabel;                                      //@synthesize activeMatchesLabel=_activeMatchesLabel - In the implementation block
@property (nonatomic,retain) GKLabel * localPlayerTurnsLabel;                                   //@synthesize localPlayerTurnsLabel=_localPlayerTurnsLabel - In the implementation block
@property (nonatomic,retain) UIImageView * statusImageView;                                     //@synthesize statusImageView=_statusImageView - In the implementation block
@property (nonatomic,retain) GKContiguousContainerView * textContainerView;                     //@synthesize textContainerView=_textContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * iconLeadingConstraint;                        //@synthesize iconLeadingConstraint=_iconLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * statusImageTrailingConstraint;                //@synthesize statusImageTrailingConstraint=_statusImageTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textContainerTrailingConstraint;              //@synthesize textContainerTrailingConstraint=_textContainerTrailingConstraint - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfActiveMatches;                          //@synthesize numberOfActiveMatches=_numberOfActiveMatches - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLocalPlayerTurns;                       //@synthesize numberOfLocalPlayerTurns=_numberOfLocalPlayerTurns - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                                               //@synthesize insets=_insets - In the implementation block
+(void)registerCellClassesForCollectionView:(id)arg1 ;
+(id)itemHeightList;
+(double)defaultRowHeight;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)setStatusImageView:(UIImageView *)arg1 ;
-(void)setTextContainerView:(GKContiguousContainerView *)arg1 ;
-(GKContiguousContainerView *)textContainerView;
-(UIImageView *)statusImageView;
-(void)didUpdateModel;
-(unsigned long long)numberOfActiveMatches;
-(unsigned long long)numberOfLocalPlayerTurns;
-(void)setNumberOfActiveMatches:(unsigned long long)arg1 ;
-(void)setNumberOfLocalPlayerTurns:(unsigned long long)arg1 ;
-(void)establishConstraints;
-(void)setIconLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextContainerTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStatusImageTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateMarginConstraints;
-(GKLabel *)activeMatchesLabel;
-(GKLabel *)localPlayerTurnsLabel;
-(void)setActiveMatchesLabel:(GKLabel *)arg1 ;
-(void)setLocalPlayerTurnsLabel:(GKLabel *)arg1 ;
-(NSLayoutConstraint *)iconLeadingConstraint;
-(NSLayoutConstraint *)statusImageTrailingConstraint;
-(NSLayoutConstraint *)textContainerTrailingConstraint;
@end

