//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDUserNotificationData : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    NSString *_handoutID;	// 24 = 0x18
    NSString *_classID;	// 32 = 0x20
    long long _type;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010010ffd8
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *classID; // @synthesize classID=_classID;
@property(copy, nonatomic) NSString *handoutID; // @synthesize handoutID=_handoutID;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x000000010010fedc
- (id)initWithType:(long long)arg1 title:(id)arg2 message:(id)arg3;	// IMP=0x000000010010fe44
- (id)initWithType:(long long)arg1;	// IMP=0x000000010010fdfc

@end

