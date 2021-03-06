/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInterfaceActionVisualStyleViewState.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIInterfaceActionGroupViewState : UIInterfaceActionVisualStyleViewState <NSCopying> {

	BOOL _isVerticalLayoutAxis;
	long long _resolvedPresentationStyle;

}

@property (nonatomic,readonly) BOOL isVerticalLayoutAxis;                        //@synthesize isVerticalLayoutAxis=_isVerticalLayoutAxis - In the implementation block
@property (nonatomic,readonly) long long resolvedPresentationStyle;              //@synthesize resolvedPresentationStyle=_resolvedPresentationStyle - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_collectStateFromGroupViewState:(id)arg1 ;
-(BOOL)_stateEqualToGroupViewState:(id)arg1 ;
-(BOOL)isVerticalLayoutAxis;
-(long long)resolvedPresentationStyle;
-(id)copyWithVerticalLayoutAxis:(BOOL)arg1 ;
-(id)copyWithResolvedPresentationStyle:(long long)arg1 ;
@end

