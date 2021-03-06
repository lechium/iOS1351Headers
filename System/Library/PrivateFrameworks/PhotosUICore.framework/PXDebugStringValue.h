/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXDebugValue.h>

@class NSString;

@interface PXDebugStringValue : PXDebugValue {

	unsigned long long _highlightStyle;
	NSString* _string;

}

@property (nonatomic,readonly) NSString * string;              //@synthesize string=_string - In the implementation block
-(NSString *)string;
-(unsigned long long)highlightStyle;
-(id)initWithLabel:(id)arg1 string:(id)arg2 highlightStyle:(unsigned long long)arg3 ;
-(id)initWithLabel:(id)arg1 boolValue:(BOOL)arg2 positiveValue:(BOOL)arg3 positiveHighlighted:(BOOL)arg4 negativeHighlighted:(BOOL)arg5 ;
-(id)initWithLabel:(id)arg1 integerValue:(long long)arg2 ;
-(id)initWithLabel:(id)arg1 doubleValue:(double)arg2 ;
-(id)initWithLabel:(id)arg1 highlightedScore:(double)arg2 ;
@end

