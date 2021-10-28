/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TemplateKit/TLKMultilineText.h>

@class NSArray;

@interface TLKRichText : TLKMultilineText {

	NSArray* _formattedTextItems;

}

@property (nonatomic,retain) NSArray * formattedTextItems;              //@synthesize formattedTextItems=_formattedTextItems - In the implementation block
@property (readonly) BOOL hasContent; 
@property (readonly) BOOL hasOnlyImage; 
-(id)description;
-(id)icons;
-(id)text;
-(BOOL)hasContent;
-(NSArray *)formattedTextItems;
-(BOOL)hasOnlyImage;
-(id)filterItemsByType:(unsigned long long)arg1 ;
-(void)setFormattedTextItems:(NSArray *)arg1 ;
-(id)stars;
-(id)inlineRoundedText;
@end
