/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarAction.h>

@interface _UIStatusBarSystemNavigationAction : _UIStatusBarAction {

	unsigned long long _destination;

}

@property (assign,nonatomic) unsigned long long destination;              //@synthesize destination=_destination - In the implementation block
+(id)backNavigationAction;
+(id)_navigationActionForDestination:(unsigned long long)arg1 ;
+(id)forwardNavigationAction;
-(unsigned long long)destination;
-(void)setDestination:(unsigned long long)arg1 ;
@end

