/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray, NSURL;

@interface DCScannedDocument : NSObject {

	NSString* _title;
	NSMutableArray* _docInfos;
	NSURL* _scannedDocumentImageDirectoryURL;

}

@property (nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableArray * docInfos;                               //@synthesize docInfos=_docInfos - In the implementation block
@property (nonatomic,readonly) NSURL * scannedDocumentImageDirectoryURL;              //@synthesize scannedDocumentImageDirectoryURL=_scannedDocumentImageDirectoryURL - In the implementation block
@property (nonatomic,readonly) unsigned long long pageCount; 
+(void)initialize;
+(id)scannedDocumentsFolderURL;
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)pageCount;
-(void)applicationWillTerminate:(id)arg1 ;
-(BOOL)saveToURL:(id)arg1 error:(id*)arg2 ;
-(id)imageOfPageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfScans;
-(NSMutableArray *)docInfos;
-(id)getImage:(id)arg1 ;
-(BOOL)deleteImage:(id)arg1 ;
-(void)replaceContentsWithDocInfoCollection:(id)arg1 imageCache:(id)arg2 ;
-(void)deleteAllImages;
-(BOOL)copyImagesFromDocInfoCollection:(id)arg1 imageCache:(id)arg2 ;
-(id)pListURL:(id)arg1 ;
-(void)setDocInfos:(NSMutableArray *)arg1 ;
-(id)copyImageForLoading:(id)arg1 fromFolderURL:(id)arg2 ;
-(id)copyImageForSaving:(id)arg1 toFolderURL:(id)arg2 ;
-(BOOL)makeSureScanDirectoryExists:(id*)arg1 ;
-(id)URLForImageWithUUID:(id)arg1 ;
-(id)URLForImageInFolder:(id)arg1 withUUID:(id)arg2 ;
-(id)copyImageAtURL:(id)arg1 ;
-(NSURL *)scannedDocumentImageDirectoryURL;
-(id)getImageURL:(id)arg1 ;
-(id)initWithDocInfoCollection:(id)arg1 imageCache:(id)arg2 ;
-(id)imageForScanAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
@end

