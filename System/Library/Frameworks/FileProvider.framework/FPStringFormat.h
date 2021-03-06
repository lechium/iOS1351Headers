/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface FPStringFormat : NSObject {

	NSString* _format;
	NSArray* _keyPaths;

}

@property (nonatomic,retain) NSString * format;               //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSArray * keyPaths;              //@synthesize keyPaths=_keyPaths - In the implementation block
@property (readonly) unsigned long long length; 
+(id)formatForPlistObject:(id)arg1 localizationLookup:(id)arg2 ;
+(id)formatForStringFormatDict:(id)arg1 localizationLookup:(id)arg2 ;
-(unsigned long long)length;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(NSArray *)keyPaths;
-(void)setKeyPaths:(NSArray *)arg1 ;
-(id)evaluateWithValuesByName:(id)arg1 ;
@end

