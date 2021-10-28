/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVTouchIgnoringView.h>

@protocol AVContentOverlayViewDelegate;
@interface AVContentOverlayView : AVTouchIgnoringView {

	id<AVContentOverlayViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AVContentOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AVContentOverlayViewDelegate>)delegate;
-(void)setDelegate:(id<AVContentOverlayViewDelegate>)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)_didRemoveSubview:(id)arg1 ;
@end
