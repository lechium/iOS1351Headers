/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:58 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UILongPressGestureRecognizer.h>

@interface PKSelectDrawingGestureRecognizer : UILongPressGestureRecognizer {

	double _lastFailureTime;

}

@property (assign,nonatomic) double lastFailureTime;              //@synthesize lastFailureTime=_lastFailureTime - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(double)lastFailureTime;
-(void)setLastFailureTime:(double)arg1 ;
@end
