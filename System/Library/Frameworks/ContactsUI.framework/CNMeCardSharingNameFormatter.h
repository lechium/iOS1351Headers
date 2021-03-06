/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:02 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNMeCardSharingNameProvider;
@class NSPersonNameComponents, NSMutableDictionary;

@interface CNMeCardSharingNameFormatter : NSObject {

	id<CNMeCardSharingNameProvider> _nameProvider;
	NSPersonNameComponents* _nameComponents;
	NSMutableDictionary* _cachedFormattedNames;

}

@property (nonatomic,readonly) id<CNMeCardSharingNameProvider> nameProvider;              //@synthesize nameProvider=_nameProvider - In the implementation block
@property (nonatomic,readonly) NSPersonNameComponents * nameComponents;                   //@synthesize nameComponents=_nameComponents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedFormattedNames;                  //@synthesize cachedFormattedNames=_cachedFormattedNames - In the implementation block
+(id)formattedNameFromComponents:(id)arg1 forProvider:(id)arg2 withFormat:(unsigned long long)arg3 ;
+(id)nameComponentsFromProvider:(id)arg1 ;
+(id)formattedNameFromProvider:(id)arg1 withFormat:(unsigned long long)arg2 ;
-(NSPersonNameComponents *)nameComponents;
-(id<CNMeCardSharingNameProvider>)nameProvider;
-(id)initWithNameProvider:(id)arg1 ;
-(id)formattedNameWithFormat:(unsigned long long)arg1 ;
-(NSMutableDictionary *)cachedFormattedNames;
-(void)setCachedFormattedNames:(NSMutableDictionary *)arg1 ;
@end

