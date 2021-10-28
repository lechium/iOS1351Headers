/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SSKeyValueStore;

@interface SUScriptKeyValueStore : SUScriptObject {

	NSString* _domain;
	SSKeyValueStore* _keyValueStore;

}
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)_checkOutStoreWithDomain:(id)arg1 ;
+(void)_popStoreWithDomain:(id)arg1 ;
-(void)dealloc;
-(id)valueForKey:(id)arg1 ;
-(id)_className;
-(id)initWithDomain:(id)arg1 ;
-(void)removeAllValues;
-(void)getValueForKey:(id)arg1 usingFunction:(id)arg2 ;
-(void)removeValueForKey:(id)arg1 ;
-(void)setValueForKey:(id)arg1 value:(id)arg2 ;
@end
