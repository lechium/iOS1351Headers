/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol IMTypingIndicatorLayerProtocol;
@class CALayer, CKBaseLayer;

@interface CKTypingView : UIView {

	CALayer*<IMTypingIndicatorLayerProtocol> _indicatorLayer;
	CKBaseLayer* _baseLayer;

}

@property (nonatomic,retain) CALayer*<IMTypingIndicatorLayerProtocol> indicatorLayer;              //@synthesize indicatorLayer=_indicatorLayer - In the implementation block
@property (nonatomic,retain) CKBaseLayer * baseLayer;                                              //@synthesize baseLayer=_baseLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CALayer*<IMTypingIndicatorLayerProtocol>)indicatorLayer;
-(void)setIndicatorLayer:(CALayer*<IMTypingIndicatorLayerProtocol>)arg1 ;
-(CKBaseLayer *)baseLayer;
-(void)setBaseLayer:(CKBaseLayer *)arg1 ;
@end

