//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface IndexPathMove : NSObject
{
    NSIndexPath *_indexPathBeforeMove;	// 8 = 0x8
    NSIndexPath *_indexPathAfterMove;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100022974
@property(readonly, nonatomic) NSIndexPath *indexPathAfterMove; // @synthesize indexPathAfterMove=_indexPathAfterMove;
@property(readonly, nonatomic) NSIndexPath *indexPathBeforeMove; // @synthesize indexPathBeforeMove=_indexPathBeforeMove;
- (id)initWithIndexPathBeforeMove:(id)arg1 indexPathAfterMove:(id)arg2;	// IMP=0x00000001000228b0

@end
