/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCOperation.h>

@protocol NTReadablePrivateDataStorage, FCContentContext;
@class NTPBTodayResultOperationInfo;

@interface NTTodayResultOperation : FCOperation {

	id<NTReadablePrivateDataStorage> _privateDataStorage;
	id<FCContentContext> _contentContext;
	/*^block*/id _sessionProvider;
	NTPBTodayResultOperationInfo* _operationInfo;
	/*^block*/id _headlineResultCompletionHandler;

}

@property (nonatomic,retain) id<NTReadablePrivateDataStorage> privateDataStorage;              //@synthesize privateDataStorage=_privateDataStorage - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                              //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,copy) id sessionProvider;                                                 //@synthesize sessionProvider=_sessionProvider - In the implementation block
@property (nonatomic,copy) NTPBTodayResultOperationInfo * operationInfo;                       //@synthesize operationInfo=_operationInfo - In the implementation block
@property (nonatomic,copy) id headlineResultCompletionHandler;                                 //@synthesize headlineResultCompletionHandler=_headlineResultCompletionHandler - In the implementation block
-(id)init;
-(NTPBTodayResultOperationInfo *)operationInfo;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)contentContext;
-(void)setSessionProvider:(id)arg1 ;
-(id)sessionProvider;
-(void)setOperationInfo:(NTPBTodayResultOperationInfo *)arg1 ;
-(id<NTReadablePrivateDataStorage>)privateDataStorage;
-(void)setPrivateDataStorage:(id<NTReadablePrivateDataStorage>)arg1 ;
-(void)setHeadlineResultCompletionHandler:(id)arg1 ;
-(id)headlineResultCompletionHandler;
@end
