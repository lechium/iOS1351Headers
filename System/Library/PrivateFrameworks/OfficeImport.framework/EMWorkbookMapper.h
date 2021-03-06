/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDocumentMapper.h>
#import <libobjc.A.dylib/CMMapperRoot.h>

@class NSMutableArray, NSString, OIXMLDocument, OIXMLElement, EDWorkbook;

@interface EMWorkbookMapper : CMDocumentMapper <CMMapperRoot> {

	unsigned long long mRealSheetCount;
	int mWidth;
	int mHeight;
	NSMutableArray* mWorksheetUrls;
	NSMutableArray* mWorksheetNames;
	NSMutableArray* mWorksheetGuids;
	NSString* mResourceUrlPrefix;
	NSString* mResourceUrlProtocol;
	NSString* mStyleSheetGuid;
	NSString* mFileName;
	unsigned mSheetIndex;
	BOOL mIsFirstMappedSheet;
	BOOL mIsFrameset;
	OIXMLDocument* mXhtmlDoc;
	OIXMLElement* mBodyElement;
	OIXMLDocument* mTabBarDoc;
	NSString* mTabBarURL;
	NSMutableArray* mSheetURLs;
	double mTabPosition;
	unsigned long long mNumberOfMappedSheets;
	BOOL mHasPushedHeader;
	BOOL mHasPushedFirstSheet;
	BOOL mLoadingMessageVisible;

}

@property (retain) NSString * fileName; 
@property (readonly) EDWorkbook * document; 
+(id)borderStyleCache;
+(id)borderWidthCache;
+(id)cssStyleCache;
-(void)setElementCount:(unsigned long long)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(id)archiver;
-(id)documentTitle;
-(id)blipAtIndex:(unsigned)arg1 ;
-(CGSize)pageSizeForDevice;
-(id)styleMatrix;
-(void)startMappingWithState:(id)arg1 ;
-(void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(BOOL)arg4 ;
-(void)finishMappingWithState:(id)arg1 ;
-(id)initWithDocument:(id)arg1 archiver:(id)arg2 ;
-(BOOL)hasMultipleSheets;
-(void)mapStylesheetData:(id)arg1 name:(id)arg2 atElement:(id)arg3 ;
-(id)headElementForFrontPage;
-(id)tabTitleDrawingAttributes;
-(void)mapStylesheetNamed:(id)arg1 atElement:(id)arg2 ;
-(id)copySheetMapperWithEdSheet:(id)arg1 ;
-(id)_copyStringForSheet:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 andMapper:(id)arg4 ;
-(id)_frontPageByCopyingMainPage;
-(void)_pushTabForSheet:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_mainPageBack;
@end

