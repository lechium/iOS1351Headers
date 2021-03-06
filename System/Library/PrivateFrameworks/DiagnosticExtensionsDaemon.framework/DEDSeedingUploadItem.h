/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticExtensionsDaemon/DEDAttachmentItem.h>

@class NSString, NSURLSessionUploadTask;

@interface DEDSeedingUploadItem : DEDAttachmentItem {

	BOOL _completed;
	NSString* _extensionID;
	unsigned long long _bytesUploaded;
	NSURLSessionUploadTask* _uploadTask;

}

@property (retain) NSString * extensionID;                           //@synthesize extensionID=_extensionID - In the implementation block
@property (assign) unsigned long long bytesUploaded;                 //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) BOOL completed;                                   //@synthesize completed=_completed - In the implementation block
@property (retain) NSURLSessionUploadTask * uploadTask;              //@synthesize uploadTask=_uploadTask - In the implementation block
+(id)itemAtPath:(id)arg1 enclosedFilename:(id)arg2 extensionID:(id)arg3 ;
-(id)description;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(unsigned long long)bytesUploaded;
-(void)setBytesUploaded:(unsigned long long)arg1 ;
-(NSString *)extensionID;
-(void)setExtensionID:(NSString *)arg1 ;
-(id)publicDescription;
-(void)setUploadTask:(NSURLSessionUploadTask *)arg1 ;
-(id)promiseFilename;
-(NSURLSessionUploadTask *)uploadTask;
@end

