//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NMSMessageCenter, NSData, NSString;

@interface NMSUnpairedResponse : NSObject
{
    unsigned short _messageID;	// 8 = 0x8
    NMSMessageCenter *_messageCenter;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
    NSString *_idsIdentifier;	// 32 = 0x20
    id _pbResponse;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100018d6c
@property(retain, nonatomic) id pbResponse; // @synthesize pbResponse=_pbResponse;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) __weak NMSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;

@end

