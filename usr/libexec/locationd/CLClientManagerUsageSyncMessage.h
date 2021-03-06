//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CLClientManagerUsageSyncMessage : NSObject
{
    NSString *_messageType;	// 8 = 0x8
    NSDictionary *_dataPayload;	// 16 = 0x10
    long long _priority;	// 24 = 0x18
    NSDictionary *_idsOptions;	// 32 = 0x20
}

@property(retain, nonatomic) NSDictionary *idsOptions; // @synthesize idsOptions=_idsOptions;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSDictionary *dataPayload; // @synthesize dataPayload=_dataPayload;
@property(retain, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
- (_Bool)isMessageOfType:(id)arg1;	// IMP=0x00000001003fe638
- (void)dealloc;	// IMP=0x00000001003fe5d4

@end

