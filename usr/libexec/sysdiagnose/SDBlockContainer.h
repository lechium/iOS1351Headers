//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDTaskContainer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SDBlockContainer : SDTaskContainer
{
    NSMutableArray *_paths;	// 16 = 0x10
    CDUnknownBlockType _logBlock;	// 24 = 0x18
}

+ (id)containerWithName:(id)arg1 forBlock:(CDUnknownBlockType)arg2 withTimeout:(double)arg3 withDelegate:(id)arg4;	// IMP=0x000000010003fae8
- (void).cxx_destruct;	// IMP=0x00000001000401c8
@property(copy, nonatomic) CDUnknownBlockType logBlock; // @synthesize logBlock=_logBlock;
@property(retain) NSMutableArray *paths; // @synthesize paths=_paths;
- (_Bool)execute;	// IMP=0x000000010003fbf8

@end

