/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountCredential, NSString;

@interface SUScriptAppleAccountCredential : SUScriptObject {

	ACAccountCredential* _credential;

}

@property (readonly) NSString * oauthToken; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)_className;
-(NSString *)oauthToken;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)initWithACAccountCredential:(id)arg1 ;
@end

