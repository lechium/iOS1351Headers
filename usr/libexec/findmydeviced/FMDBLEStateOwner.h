//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FMDBLEStateOwner : NSObject
{
    NSString *_blePowerStatus;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010001d650
- (void).cxx_destruct;	// IMP=0x000000010001dc0c
@property(retain, nonatomic) NSString *blePowerStatus; // @synthesize blePowerStatus=_blePowerStatus;
- (void)_updateBLEStatus;	// IMP=0x000000010001dab4
- (void)_watchBLEStatus;	// IMP=0x000000010001d774
- (id)init;	// IMP=0x000000010001d6f8

@end

