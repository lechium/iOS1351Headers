/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableDictionary, NSDictionary;

@interface SUScriptDictionary : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSArray* _stringKeys;
	NSMutableDictionary* _cachedNestedScriptDictionaries;
	NSDictionary* _dictionary;

}

@property (readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(void)initialize;
+(BOOL)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(BOOL)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)stringRepresentation;
-(id)attributeKeys;
-(id)valueForNotNativelySupportedKey:(id)arg1 ;
@end

