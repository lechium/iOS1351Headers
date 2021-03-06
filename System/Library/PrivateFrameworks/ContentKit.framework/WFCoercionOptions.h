/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface WFCoercionOptions : NSObject <NSCopying> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(id)new;
+(id)optionsWithDictionary:(id)arg1 ;
+(void)registerDefaultDisallowedCoercionPath:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(id)optionsByAddingContentsOfOptions:(id)arg1 ;
-(BOOL)coercionPathIsDisallowed:(id)arg1 ;
-(id)preferredTypes;
-(id)itemClassPrioritizationType;
-(void)makeContactAccessResourceAvailableIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)makeRemoteServerAccessResourceAvailableIfNeededWithURLs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

