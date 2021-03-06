//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class NSObject;
@protocol MAGSnapshotCanvasAccessibilityElementDelegate;

__attribute__((visibility("hidden")))
@interface MAGSnapshotCanvasAccessibilityElement : UIAccessibilityElement
{
    NSObject<MAGSnapshotCanvasAccessibilityElementDelegate> *_delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000fb34
@property(nonatomic) __weak NSObject<MAGSnapshotCanvasAccessibilityElementDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)accessibilityDecrement;	// IMP=0x000000010000fac0
- (void)accessibilityIncrement;	// IMP=0x000000010000fa80
- (id)accessibilityHint;	// IMP=0x000000010000fa74
- (id)accessibilityValue;	// IMP=0x000000010000fa20
- (id)accessibilityLabel;	// IMP=0x000000010000fa14
- (unsigned long long)accessibilityTraits;	// IMP=0x000000010000fa04

@end

