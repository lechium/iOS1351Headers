/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CorePDF/CorePDF-Structs.h>
@interface CPDocumentAndData : NSObject {

	CGPDFDocumentRef _document;
	CFDataRef _sourceData;

}

@property (retain) CGPDFDocumentRef document;              //@synthesize document=_document - In the implementation block
@property (retain) CFDataRef sourceData;                   //@synthesize sourceData=_sourceData - In the implementation block
-(void)dealloc;
-(void)setDocument:(CGPDFDocumentRef)arg1 ;
-(CGPDFDocumentRef)document;
-(void)setSourceData:(CFDataRef)arg1 ;
-(CFDataRef)sourceData;
@end

