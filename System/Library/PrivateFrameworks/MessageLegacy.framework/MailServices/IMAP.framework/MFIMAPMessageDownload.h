/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMAP/MFIMAPCompoundDownload.h>

@protocol MFCollectingDataConsumer;
@class MFMessage, MFMimePart;

@interface MFIMAPMessageDownload : MFIMAPCompoundDownload {

	MFMessage* _message;
	MFMimePart* _topLevelPart;
	unsigned _allowsPartialDownloads : 1;
	unsigned _usingPartialDownloads : 1;
	unsigned _startedFetch : 1;
	unsigned _fetchingMessageContents : 1;
	unsigned _fetchingBodyText : 1;
	unsigned _doneAddingSubdownloads : 1;
	unsigned _fetchBodyData : 1;
	id<MFCollectingDataConsumer> _headerConsumer;
	id<MFCollectingDataConsumer> _textConsumer;
	BOOL _receivedHeaders;
	BOOL _receivedText;

}
-(id)data;
-(id)message;
-(BOOL)isComplete;
-(id)initWithMessage:(id)arg1 ;
-(id)topLevelPart;
-(BOOL)partial;
-(void)setTopLevelPart:(id)arg1 ;
-(BOOL)allowsPartialDownloads;
-(void)setAllowsPartialDownloads:(BOOL)arg1 ;
-(BOOL)isSuccessful;
-(void)setFetchBodyData:(BOOL)arg1 ;
-(void)handleFetchResult:(id)arg1 ;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(id)_networkConverterWithConsumer:(id)arg1 didReceiveData:(/*^block*/id)arg2 ;
-(BOOL)fetchBodyData;
@end
