/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <Silex/SXDataTableElementStyle.h>

@class UIColor, SXDataTableBorder, SXJSONArray;

@interface SXDataTableColumnStyle : SXDataTableElementStyle

@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) SXDataTableBorder * divider; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) SXConvertibleValue minimumWidth; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (nonatomic,readonly) SXJSONArray * selectors; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)selectors;
-(SXJSONArray *)conditional;
-(SXConvertibleValue)minimumWidth;
-(double)width;
-(SXDataTableBorder *)divider;
-(UIColor *)backgroundColor;
@end
