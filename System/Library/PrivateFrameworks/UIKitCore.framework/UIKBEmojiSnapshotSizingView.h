/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface UIKBEmojiSnapshotSizingView : UIView {

	CGSize _snapshotSize;
	UIView* _snapshotView;

}

@property (nonatomic,readonly) UIView * snapshotView;              //@synthesize snapshotView=_snapshotView - In the implementation block
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(UIView *)snapshotView;
-(id)initWithSnapshotView:(id)arg1 ;
@end
