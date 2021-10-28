/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIView;

@interface _UIViewBaselineLoweringInfo : NSObject {

	UIView* _baselineView;
	double _baselineOffset;

}

@property (assign,nonatomic) UIView * baselineView;              //@synthesize baselineView=_baselineView - In the implementation block
@property (assign,nonatomic) double baselineOffset;              //@synthesize baselineOffset=_baselineOffset - In the implementation block
-(id)description;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(void)setBaselineView:(UIView *)arg1 ;
-(UIView *)baselineView;
@end
