/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNAutocompleteSearchProvider.h>

@protocol CNFuture;
@class NSString;

@interface _CNAutocompleteCachingSearchProvider : NSObject <CNAutocompleteSearchProvider> {

	id<CNFuture> _localSearchFuture;
	id<CNFuture> _recentsSearchFuture;
	id<CNFuture> _suggestionsSearchFuture;
	id<CNFuture> _duetSearchFuture;
	id<CNFuture> _localExtensionSearchesFuture;
	id<CNFuture> _directoryServerSearchFuture;
	id<CNFuture> _calendarServerSearchFuture;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)localSearch;
-(id)initWithSearchProvider:(id)arg1 ;
-(id)recentsSearch;
-(id)suggestionsSearch;
-(id)duetSearch;
-(id)localExtensionSearches;
-(id)directoryServerSearch;
-(id)calendarServerSearch;
@end
