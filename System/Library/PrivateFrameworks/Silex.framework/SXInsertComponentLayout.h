/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentLayout.h>

@protocol SXEdgeSpacing;
@class NSString, SXJSONArray;

@interface SXInsertComponentLayout : NSObject <SXComponentLayout> {

	SXComponentContentInset _contentInset;
	unsigned long long _ignoreDocumentGutter;
	unsigned long long _ignoreDocumentMargin;
	id<SXEdgeSpacing> _margin;
	unsigned long long _horizontalContentAlignment;
	id<SXEdgeSpacing> _padding;
	unsigned long long _ignoreViewportPadding;
	NSRange _columnRange;
	SXConvertibleValue _minimumHeight;
	SXConvertibleValue _maximumContentWidth;
	SXConvertibleValue _suggestedHeight;

}

@property (assign,nonatomic) unsigned long long ignoreDocumentMargin;                      //@synthesize ignoreDocumentMargin=_ignoreDocumentMargin - In the implementation block
@property (nonatomic,retain) id<SXEdgeSpacing> margin;                                     //@synthesize margin=_margin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (nonatomic,readonly) NSRange columnRange;                                        //@synthesize columnRange=_columnRange - In the implementation block
@property (nonatomic,readonly) unsigned long long ignoreDocumentGutter;                    //@synthesize ignoreDocumentGutter=_ignoreDocumentGutter - In the implementation block
@property (nonatomic,readonly) unsigned long long ignoreViewportPadding;                   //@synthesize ignoreViewportPadding=_ignoreViewportPadding - In the implementation block
@property (nonatomic,readonly) SXComponentContentInset contentInset;                       //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue minimumHeight;                           //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue suggestedHeight;                         //@synthesize suggestedHeight=_suggestedHeight - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue maximumContentWidth;                     //@synthesize maximumContentWidth=_maximumContentWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long horizontalContentAlignment;              //@synthesize horizontalContentAlignment=_horizontalContentAlignment - In the implementation block
@property (nonatomic,readonly) id<SXEdgeSpacing> padding;                                  //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue minimumWidth; 
@property (nonatomic,readonly) SXConvertibleValue maximumWidth; 
@property (nonatomic,readonly) NSString * identifier; 
-(void)setMargin:(id<SXEdgeSpacing>)arg1 ;
-(id<SXEdgeSpacing>)margin;
-(SXConvertibleValue)minimumHeight;
-(SXComponentContentInset)contentInset;
-(id<SXEdgeSpacing>)padding;
-(SXConvertibleValue)maximumContentWidth;
-(NSRange)columnRange;
-(unsigned long long)ignoreDocumentGutter;
-(unsigned long long)ignoreDocumentMargin;
-(unsigned long long)ignoreViewportPadding;
-(SXConvertibleValue)suggestedHeight;
-(unsigned long long)horizontalContentAlignment;
-(id)initWithColumnRange:(NSRange)arg1 ;
-(void)setIgnoreDocumentMargin:(unsigned long long)arg1 ;
@end

