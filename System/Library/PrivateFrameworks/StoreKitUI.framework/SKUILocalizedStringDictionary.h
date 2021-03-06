/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:47 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSMutableArray, NSString;

@interface SKUILocalizedStringDictionary : NSObject {

	NSArray* _bundles;
	NSMutableArray* _stringTables;
	NSString* _localeName;

}

@property (nonatomic,readonly) NSString * localeName;              //@synthesize localeName=_localeName - In the implementation block
-(id)localizedStringForKey:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 inTable:(id)arg2 ;
-(id)_stringTableForBundle:(id)arg1 tableName:(id)arg2 ;
-(id)initWithLocaleName:(id)arg1 bundles:(id)arg2 ;
-(NSString *)localeName;
@end

