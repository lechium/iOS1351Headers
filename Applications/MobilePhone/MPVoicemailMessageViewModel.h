//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSDate, NSString, VMMessageTranscriptViewModel;

@interface MPVoicemailMessageViewModel : NSObject
{
    _Bool _showsPlayerControls;	// 8 = 0x8
    _Bool _showsTranscriptionView;	// 9 = 0x9
    _Bool _showsRestrictedAlertView;	// 10 = 0xa
    _Bool _isRead;	// 11 = 0xb
    _Bool _isDeleted;	// 12 = 0xc
    NSDate *_date;	// 16 = 0x10
    NSString *_localizedDate;	// 24 = 0x18
    NSString *_localizedDuration;	// 32 = 0x20
    NSString *_localizedTitle;	// 40 = 0x28
    NSString *_localizedSubtitle;	// 48 = 0x30
    NSString *_localizedTranscriptionMessage;	// 56 = 0x38
    NSString *_localizedSenderIdentityTitle;	// 64 = 0x40
    NSString *_localizedJunkTitle;	// 72 = 0x48
    NSAttributedString *_localizedAttributedRestrictedAlertTitle;	// 80 = 0x50
    double _duration;	// 88 = 0x58
    VMMessageTranscriptViewModel *_transcriptViewModel;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001000c9e54
@property(retain, nonatomic) VMMessageTranscriptViewModel *transcriptViewModel; // @synthesize transcriptViewModel=_transcriptViewModel;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(nonatomic) _Bool showsRestrictedAlertView; // @synthesize showsRestrictedAlertView=_showsRestrictedAlertView;
@property(nonatomic) _Bool showsTranscriptionView; // @synthesize showsTranscriptionView=_showsTranscriptionView;
@property(nonatomic) _Bool showsPlayerControls; // @synthesize showsPlayerControls=_showsPlayerControls;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSAttributedString *localizedAttributedRestrictedAlertTitle; // @synthesize localizedAttributedRestrictedAlertTitle=_localizedAttributedRestrictedAlertTitle;
@property(copy, nonatomic) NSString *localizedJunkTitle; // @synthesize localizedJunkTitle=_localizedJunkTitle;
@property(copy, nonatomic) NSString *localizedSenderIdentityTitle; // @synthesize localizedSenderIdentityTitle=_localizedSenderIdentityTitle;
@property(copy, nonatomic) NSString *localizedTranscriptionMessage; // @synthesize localizedTranscriptionMessage=_localizedTranscriptionMessage;
@property(copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(copy, nonatomic) NSString *localizedDuration; // @synthesize localizedDuration=_localizedDuration;
@property(copy, nonatomic) NSString *localizedDate; // @synthesize localizedDate=_localizedDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;

@end

