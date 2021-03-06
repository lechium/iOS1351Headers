/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILabelContent.h>

@class NSString;

@interface _UILabelStringContent : _UILabelContent {

	NSString* _string;
	SCD_Struct_UI30 _flags;

}
-(id)string;
-(long long)length;
-(unsigned long long)hash;
-(BOOL)isEqualToString:(id)arg1 ;
-(BOOL)isEqualToAttributedString:(id)arg1 ;
-(id)attributedString;
-(BOOL)isWidthVariant;
-(BOOL)isAttributed;
-(id)attributedStringContent;
-(id)defaultValueForAttribute:(id)arg1 ;
-(BOOL)isNil;
-(id)initWithString:(id)arg1 defaultAttributesProvider:(id)arg2 ;
-(BOOL)_isContentEqualToContent:(id)arg1 ;
@end

