/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface PXViewSpec : NSObject <NSCopying> {

	BOOL _hidden;
	UIColor* _backgroundColor;
	UIColor* _selectionHighlightColor;
	UIColor* _borderColor;
	double _borderWidth;
	double _cornerRadius;
	double _displayScale;
	long long _compositingFilterType;

}

@property (nonatomic,copy) UIColor * backgroundColor;                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * selectionHighlightColor;              //@synthesize selectionHighlightColor=_selectionHighlightColor - In the implementation block
@property (nonatomic,copy) UIColor * borderColor;                          //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                           //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) double cornerRadius;                          //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double displayScale;                          //@synthesize displayScale=_displayScale - In the implementation block
@property (assign,nonatomic) long long compositingFilterType;              //@synthesize compositingFilterType=_compositingFilterType - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                  //@synthesize hidden=_hidden - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)displayScale;
-(double)cornerRadius;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)selectionHighlightColor;
-(void)setSelectionHighlightColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(void)setDisplayScale:(double)arg1 ;
-(long long)compositingFilterType;
-(void)setCompositingFilterType:(long long)arg1 ;
@end

