/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKXPCClient <NSObject>
@required
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)handleOperationStatistics:(id)arg1 forOperationWithID:(id)arg2;
-(void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
-(void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2;
-(void)openFileWithOpenInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 reply:(/*^block*/id)arg3;
-(void)readBytesOfInMemoryAssetContentWithUUID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)consumeSandboxExtensions:(id)arg1 reply:(/*^block*/id)arg2;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2;

@end

