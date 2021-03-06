/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNAutocompleteSourceInclusionPolicy.h>

@class NSString;

@interface _CNAutocompleteMutableSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy> {

	BOOL _includeContacts;
	BOOL _includeRecents;
	BOOL _includeSuggestions;
	BOOL _includeLocalExtensions;
	BOOL _includeDirectoryServers;
	BOOL _includeCalendarServers;
	BOOL _includeSupplementalResults;
	BOOL _includePredictions;

}

@property (assign) BOOL includeContacts;                            //@synthesize includeContacts=_includeContacts - In the implementation block
@property (assign) BOOL includeRecents;                             //@synthesize includeRecents=_includeRecents - In the implementation block
@property (assign) BOOL includeSuggestions;                         //@synthesize includeSuggestions=_includeSuggestions - In the implementation block
@property (assign) BOOL includeLocalExtensions;                     //@synthesize includeLocalExtensions=_includeLocalExtensions - In the implementation block
@property (assign) BOOL includeDirectoryServers;                    //@synthesize includeDirectoryServers=_includeDirectoryServers - In the implementation block
@property (assign) BOOL includeCalendarServers;                     //@synthesize includeCalendarServers=_includeCalendarServers - In the implementation block
@property (assign) BOOL includeSupplementalResults;                 //@synthesize includeSupplementalResults=_includeSupplementalResults - In the implementation block
@property (assign) BOOL includePredictions;                         //@synthesize includePredictions=_includePredictions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)includeRecents;
-(void)setIncludeRecents:(BOOL)arg1 ;
-(void)setIncludeContacts:(BOOL)arg1 ;
-(void)setIncludeSuggestions:(BOOL)arg1 ;
-(void)setIncludePredictions:(BOOL)arg1 ;
-(void)setIncludeDirectoryServers:(BOOL)arg1 ;
-(void)setIncludeCalendarServers:(BOOL)arg1 ;
-(BOOL)includeContacts;
-(BOOL)includeSuggestions;
-(void)setIncludeLocalExtensions:(BOOL)arg1 ;
-(BOOL)includeLocalExtensions;
-(BOOL)includeDirectoryServers;
-(BOOL)includeCalendarServers;
-(BOOL)includePredictions;
-(BOOL)includeSupplementalResults;
-(void)setIncludeSupplementalResults:(BOOL)arg1 ;
@end

