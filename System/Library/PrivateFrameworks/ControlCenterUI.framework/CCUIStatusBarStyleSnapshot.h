/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIStatusBarStyleRequest, _UIStatusBarData;

@interface CCUIStatusBarStyleSnapshot : NSObject <NSCopying> {

	BOOL _hidden;
	UIStatusBarStyleRequest* _leadingStyleRequest;
	UIStatusBarStyleRequest* _trailingStyleRequest;
	_UIStatusBarData* _leadingOverlayData;
	CGRect _avoidanceFrame;
	UIEdgeInsets _statusBarInsets;

}

@property (getter=isHidden,nonatomic,readonly) BOOL hidden;                                      //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy,readonly) UIStatusBarStyleRequest * leadingStyleRequest;               //@synthesize leadingStyleRequest=_leadingStyleRequest - In the implementation block
@property (nonatomic,copy,readonly) UIStatusBarStyleRequest * trailingStyleRequest;              //@synthesize trailingStyleRequest=_trailingStyleRequest - In the implementation block
@property (nonatomic,readonly) CGRect avoidanceFrame;                                            //@synthesize avoidanceFrame=_avoidanceFrame - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets statusBarInsets;                                     //@synthesize statusBarInsets=_statusBarInsets - In the implementation block
@property (nonatomic,copy,readonly) _UIStatusBarData * leadingOverlayData;                       //@synthesize leadingOverlayData=_leadingOverlayData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isHidden;
-(CGRect)avoidanceFrame;
-(UIEdgeInsets)statusBarInsets;
-(id)initWithHidden:(BOOL)arg1 leadingStyleRequest:(id)arg2 trailingStyleRequest:(id)arg3 statusBarInsets:(UIEdgeInsets)arg4 avoidanceFrame:(CGRect)arg5 leadingOverlayData:(id)arg6 ;
-(UIStatusBarStyleRequest *)leadingStyleRequest;
-(UIStatusBarStyleRequest *)trailingStyleRequest;
-(_UIStatusBarData *)leadingOverlayData;
@end
