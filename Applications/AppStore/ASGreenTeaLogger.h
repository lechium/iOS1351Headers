//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASGreenTeaLogger : NSObject
{
    struct ct_green_tea_logger_s *_logger;	// 8 = 0x8
}

@property(readonly, nonatomic) struct ct_green_tea_logger_s *logger; // @synthesize logger=_logger;
- (void)willTransmitLocationForSearch;	// IMP=0x0000000100005bb8
- (void)willAccessLocationForSearch;	// IMP=0x0000000100005b38
- (void)dealloc;	// IMP=0x0000000100005af0
- (id)init;	// IMP=0x0000000100005a98

@end
