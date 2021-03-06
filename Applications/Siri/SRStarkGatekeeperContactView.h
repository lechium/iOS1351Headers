//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AFAnalyticsTurnBasedInstrumentationContext, NSString, UIImageView, UILabel;

@interface SRStarkGatekeeperContactView : UIView
{
    UILabel *_nameLabel;	// 8 = 0x8
    UIImageView *_photoImageView;	// 16 = 0x10
    UIImageView *_appIconImageView;	// 24 = 0x18
    AFAnalyticsTurnBasedInstrumentationContext *_currentTurnContext;	// 32 = 0x20
}

+ (id)associatedDataStore;	// IMP=0x0000000100031008
- (void).cxx_destruct;	// IMP=0x000000010003184c
@property(retain, nonatomic, getter=_currentTurnContext, setter=_setCurrentTurnContext:) AFAnalyticsTurnBasedInstrumentationContext *currentTurnContext; // @synthesize currentTurnContext=_currentTurnContext;
@property(readonly, nonatomic, getter=_appIconImageView) UIImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
@property(readonly, nonatomic, getter=_photoImageView) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(readonly, nonatomic, getter=_nameLabel) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) NSString *contactName;
- (void)layoutSubviews;	// IMP=0x00000001000311c8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100031074
- (void)_configureContactImage:(id)arg1 contactPhoto:(id)arg2 contactPhotoURL:(id)arg3 contactIdentifier:(id)arg4 nameComponents:(id)arg5;	// IMP=0x00000001000306fc
- (void)_configureWithDisplayName:(id)arg1 contactPhoto:(id)arg2 contactPhotoURL:(id)arg3 contactIdentifier:(id)arg4 appImage:(id)arg5 nameComponents:(id)arg6;	// IMP=0x0000000100030538
- (void)updateWithMessageIntent:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x00000001000303c8
- (void)updateWithSms:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x00000001000302d0
- (id)initWithMessageIntent:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0000000100030228
- (id)initWithSms:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0000000100030180

@end

