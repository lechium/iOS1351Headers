//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSUUID;
@protocol SRStarkItemControllerDelegate;

@protocol SRStarkItemController <NSObject>
@property(copy, nonatomic) NSUUID *conversationItemIdentifier;
@property(nonatomic) __weak id <SRStarkItemControllerDelegate> delegate;
- (_Bool)isActive;

@optional
@property(readonly, nonatomic) _Bool shouldProceedToNextCommandAtSpeechSynthesisEnd;
- (void)siriDidEndSpeechRecording;
- (void)siriDidStartSpeechRecording;
- (void)siriDidFinishSpeakingWithIdentifier:(NSString *)arg1;
- (void)siriDidStartSpeakingWithIdentifier:(NSString *)arg1;
- (void)updateAfterSpeechQueueEmpties;
@end

