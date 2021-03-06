/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSRegularExpression, NSString;

@interface _ECSubjectFormatterContext : NSObject {

	BOOL _prefixLastStrongDirectionalityIsLeftToRight;
	NSRegularExpression* _regex;
	NSString* _localizedPrefix;

}

@property (nonatomic,readonly) NSRegularExpression * regex;                                   //@synthesize regex=_regex - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedPrefix;                               //@synthesize localizedPrefix=_localizedPrefix - In the implementation block
@property (nonatomic,readonly) BOOL prefixLastStrongDirectionalityIsLeftToRight;              //@synthesize prefixLastStrongDirectionalityIsLeftToRight=_prefixLastStrongDirectionalityIsLeftToRight - In the implementation block
-(NSRegularExpression *)regex;
-(id)initWithRegex:(id)arg1 localizedPrefix:(id)arg2 ;
-(NSString *)localizedPrefix;
-(BOOL)prefixLastStrongDirectionalityIsLeftToRight;
@end

