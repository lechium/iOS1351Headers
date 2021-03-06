/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, UIView;

@interface _UIViewPropertyAnimationDescription : NSObject {

	NSMutableDictionary* _updates;
	UIView* _view;

}

@property (nonatomic,readonly) NSMutableDictionary * updates;              //@synthesize updates=_updates - In the implementation block
@property (nonatomic,__weak,readonly) UIView * view;                       //@synthesize view=_view - In the implementation block
-(id)init;
-(UIView *)view;
-(id)initWithView:(id)arg1 ;
-(void)_addUpdate:(id)arg1 ;
-(NSMutableDictionary *)updates;
@end

