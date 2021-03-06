/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIPrintFormatter, WFPDFDocument;

@interface WFPDFPrintFormatter : NSObject <NSCopying> {

	UIPrintFormatter* _printFormatter;
	WFPDFDocument* _document;

}

@property (nonatomic,readonly) WFPDFDocument * document;                       //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) UIPrintFormatter * printFormatter;              //@synthesize printFormatter=_printFormatter - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIPrintFormatter *)printFormatter;
-(WFPDFDocument *)document;
-(id)initWithFileRepresentation:(id)arg1 ;
-(id)initWithPDFDocument:(id)arg1 ;
@end

