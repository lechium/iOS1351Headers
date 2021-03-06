/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HealthKit/HealthKit-Structs.h>
@class NSURL, NSFileHandle;

@interface _HKArchiveCreator : NSObject {

	archiveRef _archive;
	NSURL* _archiveURL;
	NSFileHandle* _fileHandle;

}

@property (nonatomic,copy,readonly) NSURL * archiveURL;                //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,readonly) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
-(void)dealloc;
-(NSFileHandle *)fileHandle;
-(void)closeArchive;
-(id)initWithURL:(id)arg1 fileHandle:(id)arg2 archiveType:(long long)arg3 ;
-(BOOL)archiveIsValid;
-(long long)writeData:(const void*)arg1 ofLength:(unsigned long long)arg2 ;
-(void)_addDataOfSize:(long long)arg1 toPathInArchive:(id)arg2 fromByteProvider:(/*^block*/id)arg3 ;
-(id)initWithURL:(id)arg1 archiveType:(long long)arg2 ;
-(id)initWithFileHandle:(id)arg1 archiveType:(long long)arg2 ;
-(void)addFileToArchive:(id)arg1 pathInArchive:(id)arg2 ;
-(void)addDataToArchive:(id)arg1 pathInArchive:(id)arg2 ;
-(NSURL *)archiveURL;
@end

