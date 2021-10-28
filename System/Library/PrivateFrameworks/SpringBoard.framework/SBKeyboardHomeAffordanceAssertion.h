/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIWindow;

@interface SBKeyboardHomeAffordanceAssertion : NSObject {

	double _additionalEdgeMargin;
	UIWindow* _sourceWindow;

}

@property (assign,nonatomic,__weak) UIWindow * sourceWindow;              //@synthesize sourceWindow=_sourceWindow - In the implementation block
@property (assign,nonatomic) double additionalEdgeMargin;                 //@synthesize additionalEdgeMargin=_additionalEdgeMargin - In the implementation block
+(id)assertionForGestureWindow:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setAdditionalEdgeMargin:(double)arg1 ;
-(UIWindow *)sourceWindow;
-(double)additionalEdgeMargin;
-(id)initWithGestureWindow:(id)arg1 ;
-(void)setSourceWindow:(UIWindow *)arg1 ;
@end
