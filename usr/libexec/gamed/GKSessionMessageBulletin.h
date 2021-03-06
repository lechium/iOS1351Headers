//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKSessionBulletin.h"

@class NSString;

@interface GKSessionMessageBulletin : GKSessionBulletin
{
    NSString *_sessionIdentifier;	// 104 = 0x68
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e7b80
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000e7b78
- (void).cxx_destruct;	// IMP=0x00000001000e9894
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (id)assembledMessage;	// IMP=0x00000001000e9674
- (void)distributeData;	// IMP=0x00000001000e9178
- (id)aggregateDictionaryKey;	// IMP=0x00000001000e9168
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000e8f8c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000e8d9c
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00000001000e8bb8
- (void)loadSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e86f8

@end

