//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTextualReportParser : NSObject
{
    _Bool _isHeavy;	// 8 = 0x8
    int _startIndex;	// 12 = 0xc
    int _endIndex;	// 16 = 0x10
}

+ (_Bool)isSpindumpFile:(const char *)arg1;	// IMP=0x0000000100021964
@property int endIndex; // @synthesize endIndex=_endIndex;
@property int startIndex; // @synthesize startIndex=_startIndex;
@property _Bool isHeavy; // @synthesize isHeavy=_isHeavy;
- (_Bool)parseSpindumpFile:(const char *)arg1 andReportToStream:(struct __sFILE *)arg2;	// IMP=0x0000000100021a2c

@end
