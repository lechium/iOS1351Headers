//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (IC)
- (_Bool)ic_isLaterThanDate:(id)arg1;	// IMP=0x000000010003c800
- (_Bool)ic_isEarlierThanDate:(id)arg1;	// IMP=0x000000010003c7dc
@property(readonly, nonatomic) NSString *ic_briefFormattedDate;
@property(readonly, nonatomic) NSString *ic_shortFormattedDate;
@property(readonly, nonatomic) NSString *ic_localDateWithSeconds;
@property(readonly, nonatomic) _Bool ic_isYesterday;
@property(readonly, nonatomic) _Bool ic_isToday;
- (id)undateify;	// IMP=0x00000001001fefe4
@end
