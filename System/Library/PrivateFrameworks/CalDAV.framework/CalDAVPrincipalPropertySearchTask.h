/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVPrincipalPropertySearchTask.h>

@class NSSet, CalDAVPrincipalSearchPropertySet;

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask {

	id _searchContext;
	NSSet* _searchTypes;
	NSSet* _searchStrings;
	CalDAVPrincipalSearchPropertySet* _serverSupportSet;

}

@property (nonatomic,retain) NSSet * searchTypes;                                              //@synthesize searchTypes=_searchTypes - In the implementation block
@property (nonatomic,retain) NSSet * searchStrings;                                            //@synthesize searchStrings=_searchStrings - In the implementation block
@property (nonatomic,retain) CalDAVPrincipalSearchPropertySet * serverSupportSet;              //@synthesize serverSupportSet=_serverSupportSet - In the implementation block
@property (nonatomic,retain) id searchContext;                                                 //@synthesize searchContext=_searchContext - In the implementation block
-(id)searchItems;
-(id)searchContext;
-(void)setSearchContext:(id)arg1 ;
-(id)extraAttributes;
-(void)setSearchTypes:(NSSet *)arg1 ;
-(NSSet *)searchTypes;
-(NSSet *)searchStrings;
-(id)initWithSearchStrings:(id)arg1 searchTypes:(id)arg2 serverSupportSet:(id)arg3 atURL:(id)arg4 ;
-(void)setSearchStrings:(NSSet *)arg1 ;
-(void)setServerSupportSet:(CalDAVPrincipalSearchPropertySet *)arg1 ;
-(CalDAVPrincipalSearchPropertySet *)serverSupportSet;
@end

