/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem {

	NSMutableSet* _principalSearchProperties;

}

@property (nonatomic,retain) NSMutableSet * principalSearchProperties;              //@synthesize principalSearchProperties=_principalSearchProperties - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(NSMutableSet *)principalSearchProperties;
-(void)addPrincipalSearchProperty:(id)arg1 ;
-(void)setPrincipalSearchProperties:(NSMutableSet *)arg1 ;
@end
