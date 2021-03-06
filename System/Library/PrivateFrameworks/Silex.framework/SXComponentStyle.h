/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXComponentStyle.h>
@class NSString;


@protocol SXComponentStyle <SXComponentStyleProperties,SXConditionalObject>
@property (nonatomic,readonly) NSString * identifier; 
@required
-(NSString *)identifier;

@end


@class NSString, SXFill, UIColor, SXComponentShadow, SXBorder, SXDataTableStyle, SXComponentMask, SXJSONArray;

@interface SXComponentStyle : SXJSONObject <SXComponentStyle>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXFill * fill; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) SXComponentShadow * shadow; 
@property (nonatomic,readonly) SXBorder * border; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) double cornerRadius; 
@property (nonatomic,readonly) SXDataTableStyle * tableStyle; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) SXComponentMask * mask; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (nonatomic,readonly) NSString * identifier; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(NSString *)identifier;
-(SXJSONArray *)conditional;
-(SXComponentMask *)mask;
-(SXDataTableStyle *)tableStyle;
-(double)cornerRadius;
-(double)opacity;
-(SXBorder *)border;
-(SXComponentShadow *)shadow;
-(UIColor *)backgroundColor;
-(SXFill *)fill;
-(unsigned long long)traits;
-(id)fillWithValue:(id)arg1 withType:(int)arg2 ;
-(id)maskWithValue:(id)arg1 withType:(int)arg2 ;
@end

