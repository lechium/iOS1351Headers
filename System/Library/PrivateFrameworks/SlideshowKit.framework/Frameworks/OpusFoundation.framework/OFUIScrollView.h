/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class OFUIViewController, NSMutableArray;

@interface OFUIScrollView : UIScrollView {

	OFUIViewController* _viewControllerProxy;
	NSMutableArray* _draggingPasteboardTypes;

}

@property (assign,nonatomic) OFUIViewController * viewControllerProxy;              //@synthesize viewControllerProxy=_viewControllerProxy - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setViewControllerProxy:(OFUIViewController *)arg1 ;
-(OFUIViewController *)viewControllerProxy;
-(void)registerDraggingPasteboardType:(id)arg1 ;
-(void)unregisterAllDraggingPasteboardType;
-(id)draggingPasteboardTypes;
@end
