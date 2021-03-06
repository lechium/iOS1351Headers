/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/LPCSSText.h>
#import <libobjc.A.dylib/LPHTMLAttributeText.h>

@interface LPPointUnit : NSObject <LPCSSText, LPHTMLAttributeText> {

	double _value;

}

@property (nonatomic,readonly) double value;              //@synthesize value=_value - In the implementation block
+(id)zero;
-(double)value;
-(id)initWithValue:(double)arg1 ;
-(id)_lp_CSSText;
-(id)_lp_HTMLAttributeText;
@end

