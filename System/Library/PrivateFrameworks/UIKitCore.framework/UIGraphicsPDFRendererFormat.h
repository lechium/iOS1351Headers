/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRendererFormat.h>

@class NSDictionary, NSURL, NSMutableData;

@interface UIGraphicsPDFRendererFormat : UIGraphicsRendererFormat {

	NSDictionary* _documentInfo;
	NSURL* _outputURL;
	NSMutableData* _pdfData;

}

@property (retain) NSURL * outputURL;                                //@synthesize outputURL=_outputURL - In the implementation block
@property (retain) NSMutableData * pdfData;                          //@synthesize pdfData=_pdfData - In the implementation block
@property (nonatomic,copy) NSDictionary * documentInfo;              //@synthesize documentInfo=_documentInfo - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)outputURL;
-(NSDictionary *)documentInfo;
-(void)setDocumentInfo:(NSDictionary *)arg1 ;
-(void)setOutputURL:(NSURL *)arg1 ;
-(NSMutableData *)pdfData;
-(void)setPdfData:(NSMutableData *)arg1 ;
@end

