//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DOMMatchJob : NSObject
{
    int _msgID;	// 8 = 0x8
    int _jobType;	// 12 = 0xc
    struct __CFMessagePort *_kickMe;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100002dfc
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property struct __CFMessagePort *kickMe; // @synthesize kickMe=_kickMe;
@property int jobType; // @synthesize jobType=_jobType;
@property int msgID; // @synthesize msgID=_msgID;
- (void)dealloc;	// IMP=0x0000000100002d6c
- (void)kick;	// IMP=0x0000000100002c6c

@end
