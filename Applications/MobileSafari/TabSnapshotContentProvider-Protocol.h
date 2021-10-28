//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIColor, UIImage, UIView;

@protocol TabSnapshotContentProvider <NSObject>

@optional
@property(readonly, nonatomic) _Bool snapshotContentShouldUnderlapTopBackdrop;
@property(readonly, nonatomic) UIColor *snapshotBackgroundColor;
@property(readonly, nonatomic) UIView *snapshotContentView;
@property(readonly, nonatomic) UIImage *snapshotContentImage;
- (void)prepareForSnapshotOfSize:(struct CGSize)arg1 completion:(void (^)(_Bool))arg2;
- (struct CGRect)snapshotContentRectInBounds:(struct CGRect)arg1;
@end
