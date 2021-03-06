//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface STEventRequest : CEMPayloadBase
{
    NSString *_requestType;	// 16 = 0x10
    NSString *_UDID;	// 24 = 0x18
    NSString *_userShortName;	// 32 = 0x20
    NSArray *_messages;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000150d4
+ (id)requestWithUDID:(id)arg1 withUserShortName:(id)arg2 withMessages:(id)arg3;	// IMP=0x0000000100014ca8
- (void).cxx_destruct;	// IMP=0x00000001000154d4
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(copy, nonatomic) NSString *userShortName; // @synthesize userShortName=_userShortName;
@property(copy, nonatomic) NSString *UDID; // @synthesize UDID=_UDID;
@property(copy, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010001537c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100015154
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000150dc
- (id)serialize;	// IMP=0x0000000100014f9c
- (_Bool)loadEventFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100014d74

@end

