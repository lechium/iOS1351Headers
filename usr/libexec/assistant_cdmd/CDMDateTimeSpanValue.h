//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CDMSpanValue.h"

@class NSDate;

@interface CDMDateTimeSpanValue : CDMSpanValue
{
    NSDate *_date;	// 24 = 0x18
    double _duration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100016598
- (id)toAceValue;	// IMP=0x0000000100016434
- (id)toDictionary;	// IMP=0x00000001000163e0
- (id)initWithStringValue:(id)arg1 date:(id)arg2 duration:(double)arg3;	// IMP=0x0000000100016330

@end

