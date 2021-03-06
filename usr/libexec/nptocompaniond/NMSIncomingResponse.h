//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSMessageContext, NSData, NSDate, NSDictionary, NSString;

@interface NMSIncomingResponse : NSObject
{
    unsigned short _messageID;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSString *_idsIdentifier;	// 24 = 0x18
    NSString *_requestIDSIdentifier;	// 32 = 0x20
    NSDate *_requestSent;	// 40 = 0x28
    NSDictionary *_requestPersistentUserInfo;	// 48 = 0x30
    IDSMessageContext *_context;	// 56 = 0x38
    id _pbResponse;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000099a8
@property(retain, nonatomic) id pbResponse; // @synthesize pbResponse=_pbResponse;
@property(retain, nonatomic) IDSMessageContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSDictionary *requestPersistentUserInfo; // @synthesize requestPersistentUserInfo=_requestPersistentUserInfo;
@property(retain, nonatomic) NSDate *requestSent; // @synthesize requestSent=_requestSent;
@property(copy, nonatomic) NSString *requestIDSIdentifier; // @synthesize requestIDSIdentifier=_requestIDSIdentifier;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
- (id)description;	// IMP=0x0000000100009888

@end

