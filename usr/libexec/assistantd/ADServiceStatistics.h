//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface ADServiceStatistics : NSObject
{
    NSString *_serviceIdentifier;	// 8 = 0x8
    NSMutableDictionary *_statsDict;	// 16 = 0x10
    NSMutableDictionary *_commandTimes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000a8d5c
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void)markResponseForCommand:(id)arg1;	// IMP=0x00000001000a8abc
- (void)markIncomingCommand:(id)arg1;	// IMP=0x00000001000a89f0
- (id)_commandTimes;	// IMP=0x00000001000a89ac
- (void)_saveStats;	// IMP=0x00000001000a88bc
- (id)_statsForCommand:(id)arg1;	// IMP=0x00000001000a87dc
- (id)_statsDict;	// IMP=0x00000001000a8690
- (id)_serviceStatsPath;	// IMP=0x00000001000a85e8
- (id)_statsDirectory;	// IMP=0x00000001000a848c
- (void)dealloc;	// IMP=0x00000001000a8440
- (id)initWithServiceIdentifier:(id)arg1;	// IMP=0x00000001000a8354

@end

