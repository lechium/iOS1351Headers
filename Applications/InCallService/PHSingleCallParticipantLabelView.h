//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PHAbstractCallParticipantLabelView.h"

@class CNAvatarView, CNContact, NSArray, NSLayoutConstraint, NSTimer, TPBadgeView, UIButton, UIImageView, UILabel, UIStackView;

@interface PHSingleCallParticipantLabelView : PHAbstractCallParticipantLabelView
{
    CNContact *_contact;	// 8 = 0x8
    CNAvatarView *_avatarView;	// 16 = 0x10
    NSLayoutConstraint *_participantMarqueeLabelRightConstraint;	// 24 = 0x18
    NSLayoutConstraint *_participantMarqueeLabelAlignmentConstraint;	// 32 = 0x20
    NSLayoutConstraint *_statusLabelAlignmentConstraint;	// 40 = 0x28
    NSLayoutConstraint *_statusLabelBaseLineConstraint;	// 48 = 0x30
    NSLayoutConstraint *_secondaryInfoLabelBaseLineConstraint;	// 56 = 0x38
    NSLayoutConstraint *_statusLabelRightConstraint;	// 64 = 0x40
    NSLayoutConstraint *_secondaryInfoLabelRightConstraint;	// 72 = 0x48
    UILabel *_statusLabel;	// 80 = 0x50
    UILabel *_secondaryInfoLabel;	// 88 = 0x58
    NSArray *_statusLabelsArray;	// 96 = 0x60
    NSTimer *_statusLabelTimer;	// 104 = 0x68
    unsigned long long _currentStatusLabelIndex;	// 112 = 0x70
    UIButton *_conferenceParticipantsButton;	// 120 = 0x78
    UIImageView *_appIconView;	// 128 = 0x80
    NSLayoutConstraint *_statusLabelLeadingConstraint;	// 136 = 0x88
    TPBadgeView *_badgeView;	// 144 = 0x90
    UIStackView *_stackView;	// 152 = 0x98
    unsigned long long _labelLayoutState;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000010002a598
@property(nonatomic) unsigned long long labelLayoutState; // @synthesize labelLayoutState=_labelLayoutState;
@property(readonly) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain) TPBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain) NSLayoutConstraint *statusLabelLeadingConstraint; // @synthesize statusLabelLeadingConstraint=_statusLabelLeadingConstraint;
@property(retain) UIImageView *appIconView; // @synthesize appIconView=_appIconView;
@property(retain) UIButton *conferenceParticipantsButton; // @synthesize conferenceParticipantsButton=_conferenceParticipantsButton;
@property unsigned long long currentStatusLabelIndex; // @synthesize currentStatusLabelIndex=_currentStatusLabelIndex;
@property(retain) NSTimer *statusLabelTimer; // @synthesize statusLabelTimer=_statusLabelTimer;
@property(retain) NSArray *statusLabelsArray; // @synthesize statusLabelsArray=_statusLabelsArray;
@property(retain) UILabel *secondaryInfoLabel; // @synthesize secondaryInfoLabel=_secondaryInfoLabel;
@property(retain) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain) NSLayoutConstraint *secondaryInfoLabelRightConstraint; // @synthesize secondaryInfoLabelRightConstraint=_secondaryInfoLabelRightConstraint;
@property(retain) NSLayoutConstraint *statusLabelRightConstraint; // @synthesize statusLabelRightConstraint=_statusLabelRightConstraint;
@property(retain) NSLayoutConstraint *secondaryInfoLabelBaseLineConstraint; // @synthesize secondaryInfoLabelBaseLineConstraint=_secondaryInfoLabelBaseLineConstraint;
@property(retain) NSLayoutConstraint *statusLabelBaseLineConstraint; // @synthesize statusLabelBaseLineConstraint=_statusLabelBaseLineConstraint;
@property(retain) NSLayoutConstraint *statusLabelAlignmentConstraint; // @synthesize statusLabelAlignmentConstraint=_statusLabelAlignmentConstraint;
@property(retain) NSLayoutConstraint *participantMarqueeLabelAlignmentConstraint; // @synthesize participantMarqueeLabelAlignmentConstraint=_participantMarqueeLabelAlignmentConstraint;
@property(retain) NSLayoutConstraint *participantMarqueeLabelRightConstraint; // @synthesize participantMarqueeLabelRightConstraint=_participantMarqueeLabelRightConstraint;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)fadeStatusLabelToAttributedOrPlainString:(id)arg1;	// IMP=0x000000010002a26c
- (void)animateToNextLabel;	// IMP=0x000000010002a0d8
- (void)animateToFirstLabel;	// IMP=0x000000010002a014
- (void)statusLabelTapped:(id)arg1;	// IMP=0x0000000100029f1c
- (void)setVoIPAppIcon:(id)arg1;	// IMP=0x0000000100029c18
- (void)setShouldCompressLabelsVertically:(_Bool)arg1;	// IMP=0x0000000100029a8c
- (_Bool)_statusLabelStringWillFit:(id)arg1 attributes:(id)arg2 padding:(float)arg3;	// IMP=0x00000001000299c8
- (_Bool)_statusLabelStringWillFit:(id)arg1;	// IMP=0x00000001000298c0
- (double)_distanceFromParticipantNameBaseLineToStatus;	// IMP=0x000000010000f0c4
- (void)_setStatusLabelAlignment:(long long)arg1;	// IMP=0x000000010000eed8
- (void)_setParticipantLabelAlignment:(long long)arg1;	// IMP=0x000000010000ec50
- (void)setParticipantMarqueeLabelFont:(id)arg1;	// IMP=0x0000000100029854
- (void)setStatusLabelTextColor:(id)arg1;	// IMP=0x00000001000297e8
- (void)setTextColor:(id)arg1;	// IMP=0x00000001000296f4
- (void)infoButtonTapped:(id)arg1;	// IMP=0x00000001000296ac
- (void)setShowsInfoButton:(_Bool)arg1;	// IMP=0x00000001000114e4
- (void)setActivityState:(unsigned short)arg1 animated:(_Bool)arg2;	// IMP=0x000000010001127c
- (void)setActivityState:(unsigned short)arg1;	// IMP=0x000000010002969c
- (void)setHidesLabel:(_Bool)arg1;	// IMP=0x0000000100029600
- (void)setLabelDescriptor:(id)arg1;	// IMP=0x000000010001098c
- (void)adjustStatusLabelFontWithDescriptor:(id)arg1;	// IMP=0x0000000100029374
- (void)setLabelLayoutState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100029198
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000001000148f0
- (void)dealloc;	// IMP=0x00000001000290e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000de60

@end

