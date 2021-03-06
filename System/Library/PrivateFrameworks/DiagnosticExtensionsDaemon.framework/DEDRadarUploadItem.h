/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticExtensionsDaemon/DEDAttachmentItem.h>

@interface DEDRadarUploadItem : DEDAttachmentItem {

	BOOL _isUploaded;
	unsigned long long _taskIdentifier;
	long long _totalBytesSent;
	long long _totalBytesExpectedToSend;

}

@property (assign,nonatomic) unsigned long long taskIdentifier;               //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (assign,nonatomic) long long totalBytesSent;                        //@synthesize totalBytesSent=_totalBytesSent - In the implementation block
@property (assign,nonatomic) long long totalBytesExpectedToSend;              //@synthesize totalBytesExpectedToSend=_totalBytesExpectedToSend - In the implementation block
@property (assign,nonatomic) BOOL isUploaded;                                 //@synthesize isUploaded=_isUploaded - In the implementation block
-(id)description;
-(unsigned long long)taskIdentifier;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(BOOL)isUploaded;
-(void)setIsUploaded:(BOOL)arg1 ;
-(long long)totalBytesSent;
-(void)setTotalBytesSent:(long long)arg1 ;
-(id)initWithUploadTask:(id)arg1 andAttachment:(id)arg2 ;
-(void)setTotalBytesExpectedToSend:(long long)arg1 ;
-(long long)totalBytesExpectedToSend;
@end

