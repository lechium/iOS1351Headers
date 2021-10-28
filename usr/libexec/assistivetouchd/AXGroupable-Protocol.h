//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AXElementGroup;

@protocol AXGroupable <NSObject>
@property(nonatomic) AXElementGroup *parentGroup;
@property(readonly, nonatomic) struct CGRect frame;
- (AXElementGroup *)keyboardContainer;
- (_Bool)isGroup;
- (AXElementGroup *)highestAncestorGroup;
@end
