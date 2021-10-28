/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDocumentMapper.h>
#import <libobjc.A.dylib/CMMapperRoot.h>

@class NSString, WDDocument;

@interface WMDocumentMapper : CMDocumentMapper <CMMapperRoot> {

	NSString* mFileName;

}

@property (readonly) WDDocument * document; 
-(double)topMargin;
-(double)rightMargin;
-(id)fileName;
-(void)setFileName:(id)arg1 ;
-(id)archiver;
-(id)documentTitle;
-(double)bottomMargin;
-(double)leftMargin;
-(id)blipAtIndex:(unsigned)arg1 ;
-(int)defaultTabWidth;
-(CGSize)pageSizeForDevice;
-(CGSize)contentSizeForDevice;
-(double)headerMargin;
-(void)mapDefaultCssStylesAt:(id)arg1 ;
-(BOOL)hasSessionBreakAtIndex:(unsigned long long)arg1 ;
-(id)styleMatrix;
-(void)mapWithState:(id)arg1 ;
@end
