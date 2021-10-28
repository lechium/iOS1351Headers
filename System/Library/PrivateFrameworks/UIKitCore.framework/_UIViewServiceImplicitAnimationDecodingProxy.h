/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UITargetedProxy.h>
#import <UIKitCore/_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface.h>

@class _UIViewAnimationAttributes, NSString;

@interface _UIViewServiceImplicitAnimationDecodingProxy : _UITargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface> {

	SEL _implicitAnimationSelector;
	_UIViewAnimationAttributes* _animationAttributes;
	BOOL _animationsEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proxyDecodingAnimationsForTarget:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)__animateNextInvocationOfSelector:(id)arg1 withAnimationAttributes:(id)arg2 animationsEnabled:(BOOL)arg3 ;
@end
