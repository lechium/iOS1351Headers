//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EURLogGenerator.h"

@class ClassIndex, NSString;

@interface EURLogGenerator2 : EURLogGenerator
{
    NSString *pListName;	// 16 = 0x10
    ClassIndex *cIndex;	// 24 = 0x18
}

- (id)getStartCommand;	// IMP=0x00000001000146e0
- (id)generateLogUsingState:(id)arg1;	// IMP=0x000000010001464c
- (id)getDisplayFromState:(id)arg1;	// IMP=0x0000000100014484
- (void)printDict:(id)arg1;	// IMP=0x0000000100014294
- (id)processTemplate:(id)arg1;	// IMP=0x0000000100013f58
- (void)updateState:(id)arg1 withData:(id)arg2;	// IMP=0x0000000100013efc
- (void)updateWithData:(id)arg1;	// IMP=0x0000000100013dec
- (void)dealloc;	// IMP=0x0000000100013d70
- (id)initWithPListName:(id)arg1 cIndexObj:(id)arg2;	// IMP=0x0000000100013cc4

@end

