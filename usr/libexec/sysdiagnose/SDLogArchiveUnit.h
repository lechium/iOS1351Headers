//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDUnit.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SDLogArchiveUnit : SDUnit
{
    NSMutableDictionary *_archive_arguments;	// 16 = 0x10
}

+ (id)logArchiveUnitWithDictionary:(id)arg1;	// IMP=0x0000000100003fb4
- (void).cxx_destruct;	// IMP=0x0000000100004320
@property(retain) NSMutableDictionary *archive_arguments; // @synthesize archive_arguments=_archive_arguments;
- (void)logArchiveOverride:(id)arg1;	// IMP=0x000000010000405c

@end

