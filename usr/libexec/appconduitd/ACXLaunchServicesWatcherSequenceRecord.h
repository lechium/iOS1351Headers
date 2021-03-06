//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ACXLaunchServicesWatcherSequenceRecord : NSObject
{
    unsigned long long _lsSequenceNumber;	// 8 = 0x8
    unsigned long long _acxSequenceNumber;	// 16 = 0x10
    NSArray *_counterpartIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100011ee8
@property(readonly, copy, nonatomic) NSArray *counterpartIdentifiers; // @synthesize counterpartIdentifiers=_counterpartIdentifiers;
@property(readonly, nonatomic) unsigned long long acxSequenceNumber; // @synthesize acxSequenceNumber=_acxSequenceNumber;
@property(readonly, nonatomic) unsigned long long lsSequenceNumber; // @synthesize lsSequenceNumber=_lsSequenceNumber;
- (id)dictionaryRepresentation;	// IMP=0x0000000100011c7c
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000001000119a4
- (id)initWithLSSequenceNumber:(unsigned long long)arg1 acxSequenceNumber:(unsigned long long)arg2 counterpartIdentifiers:(id)arg3;	// IMP=0x0000000100011910

@end

