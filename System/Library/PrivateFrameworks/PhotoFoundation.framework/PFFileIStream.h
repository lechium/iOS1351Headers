/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFFile.h>
#import <libobjc.A.dylib/PFIStream.h>
#import <libobjc.A.dylib/PFStream.h>

@class NSError, NSString;

@interface PFFileIStream : PFFile <PFIStream, PFStream> {

	_sFILE* _file;
	char* _buffer;
	unsigned long long _bufferLength;
	NSError* _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)lock;
-(void)unlock;
-(void)setError:(id)arg1 ;
-(BOOL)openStream;
-(void)closeStream;
-(long long)streamLength;
-(long long)streamPosition;
-(BOOL)rewindStream;
-(BOOL)rewindStream:(long long)arg1 ;
-(BOOL)advanceStream;
-(BOOL)advanceStream:(long long)arg1 distanceMoved:(long long*)arg2 ;
-(id)getStreamError;
-(unsigned long long)preferredStreamBlockSize;
-(const char*)streamData:(unsigned long long*)arg1 ;
-(void)updateError;
-(BOOL)createDirectoryIfNecessary;
-(BOOL)readStream:(char*)arg1 length:(unsigned long long)arg2 read:(unsigned long long*)arg3 ;
-(id)initWithFile:(id)arg1 ;
@end

