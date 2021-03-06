/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSData;

@interface CPSearchMatcher : NSObject {

	int _options;
	NSArray* _components;
	NSArray* _asciiComponents;
	NSData* _wholeSearchStringData;
	NSData* _context;

}
-(void)dealloc;
-(BOOL)matches:(id)arg1 ;
-(BOOL)matchesUTF8String:(const char*)arg1 matchType:(int)arg2 matchOptions:(int)arg3 ;
-(BOOL)matchesASCIIString:(const char*)arg1 matchType:(int)arg2 ;
-(BOOL)matchesUTF8String:(const char*)arg1 ;
-(BOOL)matchesUTF8String:(const char*)arg1 matchType:(int)arg2 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(int)arg3 ;
-(BOOL)matches:(id)arg1 matchType:(int)arg2 ;
-(id)initWithSearchString:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 ;
-(id)initWithSearchString:(id)arg1 options:(int)arg2 ;
@end

