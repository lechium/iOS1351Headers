//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface CARDateFormatterToken : NSObject <NSCopying>
{
    NSString *_formatString;	// 8 = 0x8
    unsigned long long _dateStyle;	// 16 = 0x10
    unsigned long long _timeStyle;	// 24 = 0x18
}

+ (id)tokenWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;	// IMP=0x0000000100031e14
+ (id)tokenWithFormatString:(id)arg1;	// IMP=0x0000000100031dc0
- (void).cxx_destruct;	// IMP=0x00000001000321dc
@property(nonatomic) unsigned long long timeStyle; // @synthesize timeStyle=_timeStyle;
@property(nonatomic) unsigned long long dateStyle; // @synthesize dateStyle=_dateStyle;
@property(copy, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000320f0
- (unsigned long long)hash;	// IMP=0x00000001000320a4
- (id)description;	// IMP=0x0000000100031fe4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100031e74

@end
