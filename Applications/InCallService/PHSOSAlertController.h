//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TLAlert, TLAlertActivationAssertion, TLAlertConfiguration;

@interface PHSOSAlertController : NSObject
{
    _Bool _playingWithAudio;	// 8 = 0x8
    TLAlertConfiguration *_alertConfiguration;	// 16 = 0x10
    TLAlertActivationAssertion *_alertActivationAssertion;	// 24 = 0x18
    TLAlert *_alert;	// 32 = 0x20
}

+ (void)playSOSEntryHaptic;	// IMP=0x0000000100054f7c
- (void).cxx_destruct;	// IMP=0x000000010005557c
@property(nonatomic) _Bool playingWithAudio; // @synthesize playingWithAudio=_playingWithAudio;
@property(retain, nonatomic) TLAlert *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) TLAlertActivationAssertion *alertActivationAssertion; // @synthesize alertActivationAssertion=_alertActivationAssertion;
@property(retain, nonatomic) TLAlertConfiguration *alertConfiguration; // @synthesize alertConfiguration=_alertConfiguration;
- (void)stopAlert;	// IMP=0x000000010005537c
- (void)playAlertWithAudio:(_Bool)arg1 alertTopic:(id)arg2;	// IMP=0x0000000100055008

@end

