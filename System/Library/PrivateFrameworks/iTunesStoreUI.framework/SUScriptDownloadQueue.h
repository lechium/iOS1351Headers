/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/SSPreorderManagerObserver.h>

@class SUClientInterface, SUDownloadManager, SSPreorderManager, NSString, NSArray;

@interface SUScriptDownloadQueue : SUScriptObject <SSDownloadManagerObserver, SSPreorderManagerObserver> {

	SUClientInterface* _clientInterface;
	SUDownloadManager* _downloadManager;
	SSPreorderManager* _preorderManager;
	NSString* _queueType;

}

@property (readonly) NSArray * downloads; 
@property (readonly) NSString * queueType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)_className;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(id)attributeKeys;
-(NSString *)queueType;
-(void)finalizeForWebScript;
-(NSArray *)downloads;
-(void)preorderManagerPreordersDidChange:(id)arg1 ;
-(id)scriptAttributeKeys;
-(void)_setupManagersWithClientInterface:(id)arg1 queueType:(id)arg2 ;
-(void)_tearDownQueues;
-(void)checkQueue;
-(id)initWithQueueType:(id)arg1 clientInterface:(id)arg2 ;
@end

