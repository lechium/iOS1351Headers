//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIView;

@interface VMMessageTranscriptViewModel : NSObject
{
    _Bool _donated;	// 8 = 0x8
    _Bool _transcribing;	// 9 = 0x9
    _Bool _transcriptionAttempted;	// 10 = 0xa
    _Bool _transcriptionAvailable;	// 11 = 0xb
    float _messageTranscriptConfidence;	// 12 = 0xc
    unsigned long long _messageTranscriptConfidenceRating;	// 16 = 0x10
    NSString *_messageTranscriptAttributedText;	// 24 = 0x18
    UIView *_tintColorDelegate;	// 32 = 0x20
}

+ (id)positiveFeedbackURL;	// IMP=0x0000000100019768
+ (id)negativeFeedbackURL;	// IMP=0x000000010001974c
+ (id)neutralFeedbackURL;	// IMP=0x0000000100019730
- (void).cxx_destruct;	// IMP=0x000000010001a9a0
@property(nonatomic) __weak UIView *tintColorDelegate; // @synthesize tintColorDelegate=_tintColorDelegate;
@property(nonatomic, getter=isTranscriptionAvailable) _Bool transcriptionAvailable; // @synthesize transcriptionAvailable=_transcriptionAvailable;
@property(nonatomic) _Bool transcriptionAttempted; // @synthesize transcriptionAttempted=_transcriptionAttempted;
@property(nonatomic, getter=isTranscribing) _Bool transcribing; // @synthesize transcribing=_transcribing;
@property(readonly, nonatomic) _Bool donated; // @synthesize donated=_donated;
@property(readonly, copy, nonatomic) NSString *messageTranscriptAttributedText; // @synthesize messageTranscriptAttributedText=_messageTranscriptAttributedText;
@property(readonly, nonatomic) unsigned long long messageTranscriptConfidenceRating; // @synthesize messageTranscriptConfidenceRating=_messageTranscriptConfidenceRating;
@property(readonly, nonatomic) float messageTranscriptConfidence; // @synthesize messageTranscriptConfidence=_messageTranscriptConfidence;
- (id)tintColorForColor:(id)arg1;	// IMP=0x000000010001a890
- (id)localizedAttributedTitleForConfidence:(unsigned long long)arg1;	// IMP=0x000000010001a67c
- (id)localizedAttributedTextForConfidence:(unsigned long long)arg1;	// IMP=0x000000010001a318
- (id)localizedAttributedFeedbackTextForConfidence:(unsigned long long)arg1;	// IMP=0x0000000100019c6c
@property(readonly, nonatomic) unsigned long long confidence;
- (id)localizedAttributedTextForMessage;	// IMP=0x0000000100019944
@property(readonly, copy, nonatomic) NSAttributedString *localizedAttributedTitle;
@property(readonly, copy, nonatomic) NSAttributedString *localizedAttributedText;
@property(readonly, copy, nonatomic) NSAttributedString *localizedAttributedFeedbackText;
- (id)initWithMessage:(id)arg1;	// IMP=0x0000000100019784

@end

