/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIScreen, NSDictionary;


@protocol _UIScreenBasedObject <NSObject>
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
@required
-(NSDictionary *)_options;
-(id)_initWithScreen:(id)arg1 options:(id)arg2;
-(BOOL)_matchingOptions:(id)arg1;
-(UIScreen *)_intendedScreen;

@end

