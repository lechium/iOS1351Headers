//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface pathStack : NSObject
{
    NSMutableArray *pathElements;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000b158
- (id)fullPath;	// IMP=0x000000010000b108
- (id)pop;	// IMP=0x000000010000b0b8
- (id)peek;	// IMP=0x000000010000b070
- (void)push:(id)arg1;	// IMP=0x000000010000b060
- (id)init;	// IMP=0x000000010000afd4

@end

