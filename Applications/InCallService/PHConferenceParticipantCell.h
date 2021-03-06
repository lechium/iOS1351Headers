//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSString, TPBadgeView, UIButton, UILabel;
@protocol PHConferenceParticipantCellProtocol;

@interface PHConferenceParticipantCell : UITableViewCell
{
    _Bool _privateButtonEnabled;	// 8 = 0x8
    _Bool _privateButtonHidden;	// 9 = 0x9
    _Bool _endButtonHidden;	// 10 = 0xa
    id <PHConferenceParticipantCellProtocol> _delegate;	// 16 = 0x10
    UILabel *_nameLabel;	// 24 = 0x18
    NSString *_localizedSenderIdentity;	// 32 = 0x20
    UIButton *_endCallButton;	// 40 = 0x28
    UIButton *_privateButton;	// 48 = 0x30
    TPBadgeView *_badgeView;	// 56 = 0x38
    NSArray *_badgeViewHiddenLayoutConstraints;	// 64 = 0x40
    NSArray *_badgeViewVisibleLayoutConstraints;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000449f8
@property(readonly, copy) NSArray *badgeViewVisibleLayoutConstraints; // @synthesize badgeViewVisibleLayoutConstraints=_badgeViewVisibleLayoutConstraints;
@property(readonly, copy) NSArray *badgeViewHiddenLayoutConstraints; // @synthesize badgeViewHiddenLayoutConstraints=_badgeViewHiddenLayoutConstraints;
@property(retain) TPBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain) UIButton *privateButton; // @synthesize privateButton=_privateButton;
@property(retain) UIButton *endCallButton; // @synthesize endCallButton=_endCallButton;
@property(copy, nonatomic) NSString *localizedSenderIdentity; // @synthesize localizedSenderIdentity=_localizedSenderIdentity;
@property(nonatomic) _Bool endButtonHidden; // @synthesize endButtonHidden=_endButtonHidden;
@property(nonatomic) _Bool privateButtonHidden; // @synthesize privateButtonHidden=_privateButtonHidden;
@property(nonatomic) _Bool privateButtonEnabled; // @synthesize privateButtonEnabled=_privateButtonEnabled;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak id <PHConferenceParticipantCellProtocol> delegate; // @synthesize delegate=_delegate;
- (void)makeHeld;	// IMP=0x000000010004475c
- (void)buttonTapped:(id)arg1;	// IMP=0x0000000100044604
- (void)setRepresentedHandle:(id)arg1;	// IMP=0x0000000100044594
- (void)setRepresentedCall:(id)arg1;	// IMP=0x00000001000444d4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100043024

@end

