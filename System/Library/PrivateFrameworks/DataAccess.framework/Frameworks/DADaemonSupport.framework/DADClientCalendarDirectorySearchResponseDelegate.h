/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsCalendarDirectorySearchResponseConsumer.h>
#import <DADaemonSupport/DASearchQueryConsumer.h>

@class NSSet, NSString;

@interface DADClientCalendarDirectorySearchResponseDelegate : DADClientDelegate <DAEventsCalendarDirectorySearchResponseConsumer, DASearchQueryConsumer> {

	NSSet* _terms;
	NSSet* _recordTypes;
	unsigned long long _resultLimit;
	id _searchID;
	BOOL _exceededResultLimit;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)finishWithError:(id)arg1 ;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
-(void)calendarDirectorySearchFinishedWithError:(id)arg1 exceededResultLimit:(BOOL)arg2 ;
-(void)performRequest;
-(id)_convertSearchQueryResults:(id)arg1 ;
-(void)calendarDirectorySearchReturnedResults:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 terms:(id)arg3 recordTypes:(id)arg4 resultLimit:(unsigned long long)arg5 ;
@end
