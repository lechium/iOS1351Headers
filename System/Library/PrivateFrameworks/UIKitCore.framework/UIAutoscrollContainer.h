/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIAutoscrollContainer
@property (assign,nonatomic) CGPoint autoscrollContentOffset; 
@property (assign,nonatomic) BOOL shouldAutoscroll; 
@optional
-(BOOL)shouldAutoscroll;
-(void)setShouldAutoscroll:(BOOL)arg1;

@required
-(CGRect*)contentFrameForView:(id)arg1;
-(CGPoint)autoscrollContentOffset;
-(void)setAutoscrollContentOffset:(CGPoint)arg1;

@end

