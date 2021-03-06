/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DEDFinisher <NSObject>
@optional
-(void)cleanup;
-(void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg1;
-(void)didCancelCollectionOnExtension:(id)arg1;
-(void)didCollectAttachmentGroup:(id)arg1;
-(void)didAdoptAttachmentGroup:(id)arg1;
-(void)didFinishAllCollections;

@required
-(id)initWithConfiguration:(id)arg1 session:(id)arg2;
-(void)finishSession:(id)arg1 withConfiguration:(id)arg2;

@end

