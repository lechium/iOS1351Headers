/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TILanguageModelOfflineLearningStrategy.h>

@class TILanguageModelOfflineLearningTask, NSMutableDictionary, NSURL, RKMessageResponseManager, NSString;

@interface TILanguageModelOfflineLearningStrategyResponseKit : NSObject <TILanguageModelOfflineLearningStrategy> {

	NSMutableDictionary* _recipientModels;
	NSURL* _directory;
	RKMessageResponseManager* _trainer;
	TILanguageModelOfflineLearningTask* _learningTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) TILanguageModelOfflineLearningTask * learningTask;              //@synthesize learningTask=_learningTask - In the implementation block
-(TILanguageModelOfflineLearningTask *)learningTask;
-(id)initWithClientIdentifier:(id)arg1 andDirectory:(id)arg2 ;
-(BOOL)learnMessages:(id)arg1 withRecipientRecords:(id)arg2 ;
-(id)filterMessages:(id)arg1 ;
-(void)didFinishLearning;
-(id)messagesClusteredByRecipient:(id)arg1 ;
@end

