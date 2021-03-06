/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableString;

@interface NUHTMLBuilder : NSObject {

	NSMutableString* _string;

}

@property (nonatomic,retain) NSMutableString * string;              //@synthesize string=_string - In the implementation block
-(id)init;
-(NSMutableString *)string;
-(void)setString:(NSMutableString *)arg1 ;
-(id)appendStrong:(id)arg1 ;
-(id)appendBreak;
-(id)appendText:(id)arg1 ;
-(id)appendParagraph:(id)arg1 ;
-(id)appendLink:(id)arg1 withURL:(id)arg2 ;
-(id)fullHTML;
-(id)encodeHTMLEntities:(id)arg1 ;
-(id)HTML;
-(id)URLEncode:(id)arg1 ;
-(id)appendParagraphText:(id)arg1 ;
-(id)appendHTML:(id)arg1 ;
@end

