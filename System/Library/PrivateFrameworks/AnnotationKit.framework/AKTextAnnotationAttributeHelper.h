/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AKTextAnnotationAttributeHelper : NSObject
+(id)actualOrPlaceholderTextOfAnnotation:(id)arg1 ;
+(id)newTextStorageOriginalFontSavvyWithString:(id)arg1 attributes:(id)arg2 ;
+(id)typingAttributes:(id)arg1 byApplyingScaleFactor:(double)arg2 ;
+(id)newTextStorage:(id)arg1 byApplyingScaleFactor:(double)arg2 ;
+(void)enumerateFontAttributesOfAttributedString:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)font:(id)arg1 byApplyingScaleFactor:(double)arg2 ;
+(id)newTextStorageOriginalFontSavvyWithAttributedString:(id)arg1 ;
+(id)placeholderTextOfAnnotation:(id)arg1 ;
+(void)resolvedAlignmentAndDirection:(id)arg1 locale:(id)arg2 alignment:(long long*)arg3 direction:(long long*)arg4 ;
+(id)fontsOfAnnotations:(id)arg1 ;
+(id)fontsOfEditor:(id)arg1 ;
+(void)setFont:(id)arg1 ofAnnotation:(id)arg2 ;
+(void)setTextAlignment:(long long)arg1 ofAnnotation:(id)arg2 ;
+(id)textAttributesOfAnnotations:(id)arg1 ;
+(id)textAttributesOfEditor:(id)arg1 ;
+(void)setTextAttributes:(id)arg1 ofAnnotation:(id)arg2 ;
+(void)adjustBoundsOfAnnotation:(id)arg1 toFitOptionalText:(id)arg2 onPageController:(id)arg3 ;
+(void)adjustAnnotationBoundsToFitText:(id)arg1 ;
@end
