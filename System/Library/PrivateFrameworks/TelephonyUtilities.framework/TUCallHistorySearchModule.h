/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TUSearchModuleProtocol.h>

@class TUSearchResults, TUSearchController, NSMutableArray, NSString;

@interface TUCallHistorySearchModule : NSObject <TUSearchModuleProtocol> {

	BOOL _searchComplete;
	TUSearchController* _searchController;
	NSMutableArray* _currentResultsList;
	NSString* _previousSearchString;

}

@property (nonatomic,retain) NSMutableArray * currentResultsList;                      //@synthesize currentResultsList=_currentResultsList - In the implementation block
@property (nonatomic,copy) NSString * previousSearchString;                            //@synthesize previousSearchString=_previousSearchString - In the implementation block
@property (assign,getter=isSearchComplete,nonatomic) BOOL searchComplete;              //@synthesize searchComplete=_searchComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) TUSearchResults * searchResults; 
@property (__weak) TUSearchController * searchController;                              //@synthesize searchController=_searchController - In the implementation block
-(TUSearchController *)searchController;
-(void)setSearchController:(TUSearchController *)arg1 ;
-(TUSearchResults *)searchResults;
-(void)setSearchComplete:(BOOL)arg1 ;
-(NSString *)previousSearchString;
-(void)setPreviousSearchString:(NSString *)arg1 ;
-(NSMutableArray *)currentResultsList;
-(void)setCurrentResultsList:(NSMutableArray *)arg1 ;
-(void)searchForString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelSearch;
-(BOOL)isSearchComplete;
@end

