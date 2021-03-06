//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDEventLoggerEvent-Protocol.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface FMDEventLoggerEventScalar : NSObject <FMDEventLoggerEvent>
{
    NSString *_groupByKey;	// 8 = 0x8
    NSNumber *_precision;	// 16 = 0x10
    NSMutableDictionary *_mutableDictionary;	// 24 = 0x18
    NSString *_eventName;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000a8780
- (void).cxx_destruct;	// IMP=0x00000001000a8998
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) NSMutableDictionary *mutableDictionary; // @synthesize mutableDictionary=_mutableDictionary;
@property(retain, nonatomic) NSNumber *precision; // @synthesize precision=_precision;
@property(retain, nonatomic) NSString *groupByKey; // @synthesize groupByKey=_groupByKey;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000a8890
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000a8788
@property(readonly, copy) NSString *description;
- (id)userInfo;	// IMP=0x00000001000a86e0
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000a8620
- (id)initWithEventName:(id)arg1;	// IMP=0x00000001000a84fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

