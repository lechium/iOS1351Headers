/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/TCXmlTextWriterProvider.h>

@class NSString, OISFUZipArchiveOutputStream;

@interface TCZipEntryTextWriterProvider : TCXmlTextWriterProvider {

	BOOL _isCompressed;
	NSString* _entryName;
	OISFUZipArchiveOutputStream* _outputStream;

}

@property (nonatomic,copy,readonly) NSString * entryName;                               //@synthesize entryName=_entryName - In the implementation block
@property (nonatomic,readonly) OISFUZipArchiveOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,readonly) BOOL isCompressed;                                       //@synthesize isCompressed=_isCompressed - In the implementation block
-(OISFUZipArchiveOutputStream *)outputStream;
-(BOOL)setUp;
-(BOOL)isCompressed;
-(NSString *)entryName;
-(id)initWithEntryName:(id)arg1 outputStream:(id)arg2 isCompressed:(BOOL)arg3 ;
@end
