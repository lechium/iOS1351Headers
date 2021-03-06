/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, SUScriptMediaItem, MPMediaItemCollection;

@interface SUScriptMediaItemCollection : SUScriptObject {

	NSArray* _items;
	SUScriptMediaItem* _representativeItem;
	BOOL _watchingLibrary;

}

@property (nonatomic,readonly) MPMediaItemCollection * nativeCollection; 
@property (readonly) long long count; 
@property (readonly) NSArray * items; 
@property (readonly) NSArray * mediaTypes; 
@property (readonly) SUScriptMediaItem * representativeItem; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(long long)count;
-(id)_className;
-(NSArray *)items;
-(SUScriptMediaItem *)representativeItem;
-(id)initWithItems:(id)arg1 ;
-(NSArray *)mediaTypes;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)_libraryChangedNotification:(id)arg1 ;
-(void)_beginWatchingLibraryIfNecessary;
-(MPMediaItemCollection *)nativeCollection;
@end

