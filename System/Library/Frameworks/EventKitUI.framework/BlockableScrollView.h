/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@protocol BlockableScrollViewDelegate;
@class NSObject;

@interface BlockableScrollView : UIScrollView {

	BOOL _isResizing;
	NSObject*<BlockableScrollViewDelegate> _blockableDelegate;

}

@property (assign,nonatomic,__weak) NSObject*<BlockableScrollViewDelegate> blockableDelegate;              //@synthesize blockableDelegate=_blockableDelegate - In the implementation block
@property (assign,nonatomic) BOOL isResizing;                                                              //@synthesize isResizing=_isResizing - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)isResizing;
-(void)setIsResizing:(BOOL)arg1 ;
-(NSObject*<BlockableScrollViewDelegate>)blockableDelegate;
-(void)setBlockableDelegate:(NSObject*<BlockableScrollViewDelegate>)arg1 ;
@end

