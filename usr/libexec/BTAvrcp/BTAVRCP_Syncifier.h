//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition;

@interface BTAVRCP_Syncifier : NSObject
{
    NSCondition *_condition;	// 8 = 0x8
    unsigned long long _pendingSwitchers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100002a2c
@property(nonatomic) unsigned long long pendingSwitchers; // @synthesize pendingSwitchers=_pendingSwitchers;
@property(retain, nonatomic) NSCondition *condition; // @synthesize condition=_condition;
- (_Bool)wait:(double)arg1;	// IMP=0x00000001000028d4
- (CDUnknownBlockType)createSwitcher;	// IMP=0x00000001000026a0
- (id)init;	// IMP=0x0000000100002638

@end
