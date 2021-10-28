/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:47 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptObject.h>

@class WebScriptObject, NSString;

@interface SKScriptStoreSheetRequest : SUScriptObject {

	long long _pageStyle;
	WebScriptObject* _productParameters;
	NSString* _productURL;

}

@property (assign) long long productPageStyle; 
@property (retain) WebScriptObject * productParameters; 
@property (retain) NSString * productURL; 
@property (readonly) long long productPageStyleAutomatic; 
@property (readonly) long long productPageStyleBanner; 
@property (readonly) long long productPageStylePad; 
@property (readonly) long long productPageStylePhone; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKey:(const char*)arg1 ;
-(id)_className;
-(id)attributeKeys;
-(void)setProductPageStyle:(long long)arg1 ;
-(long long)productPageStyle;
-(WebScriptObject *)productParameters;
-(void)setProductParameters:(WebScriptObject *)arg1 ;
-(NSString *)productURL;
-(void)setProductURL:(NSString *)arg1 ;
-(id)_safeValueForValue:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)newNativeStorePageRequest;
-(long long)productPageStyleAutomatic;
-(long long)productPageStyleBanner;
-(long long)productPageStylePad;
-(long long)productPageStylePhone;
@end
