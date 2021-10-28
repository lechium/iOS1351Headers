/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXDocumentStyle.h>

@protocol SXDocumentStyle <SXDocumentStyleProperties,SXConditionalObject>
@end


@class NSString, UIColor, SXJSONLinearGradient, SXJSONArray;

@interface SXDocumentStyle : SXJSONObject <SXDocumentStyle>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIColor * topBackgroundColor; 
@property (nonatomic,readonly) SXJSONLinearGradient * topBackgroundGradient; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)conditional;
-(UIColor *)backgroundColor;
-(SXJSONLinearGradient *)topBackgroundGradient;
-(UIColor *)topBackgroundColor;
@end
