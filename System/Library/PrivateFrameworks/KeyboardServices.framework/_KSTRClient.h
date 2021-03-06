/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_KSTextReplacementServiceProtocol.h>

@class _KSTextReplacementServer, NSString;

@interface _KSTRClient : NSObject <_KSTextReplacementServiceProtocol> {

	_KSTextReplacementServer* _owner;
	BOOL _hasReadAccess;
	long long _generation;

}

@property (assign,nonatomic) long long generation;                  //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) BOOL hasReadAccess;                  //@synthesize hasReadAccess=_hasReadAccess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id)initWithOwner:(id)arg1 ;
-(long long)generation;
-(void)removeAllEntries;
-(void)setGeneration:(long long)arg1 ;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)requestSyncWithReply:(/*^block*/id)arg1 ;
-(void)cancelPendingUpdatesWithReply:(/*^block*/id)arg1 ;
-(void)queryTextReplacementEntriesWithReply:(/*^block*/id)arg1 ;
-(void)queryTextReplacementsWithPredicate:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)hasReadAccess;
-(id)initWithOwner:(id)arg1 forConnection:(id)arg2 ;
@end

