/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSArray, NSMutableDictionary, NSString;

@interface BRCAggregateOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	NSArray* _subOperations;
	NSMutableDictionary* _resultDictionary;
	/*^block*/id _wrapperOperationCompletionHandler;

}

@property (nonatomic,copy) id wrapperOperationCompletionHandler;              //@synthesize wrapperOperationCompletionHandler=_wrapperOperationCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)wrapperOperationCompletionHandler;
-(void)setWrapperOperationCompletionHandler:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 subOperations:(id)arg2 ;
@end

