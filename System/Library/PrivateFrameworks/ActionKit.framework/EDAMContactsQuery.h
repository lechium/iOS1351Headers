/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMContactsQuery : FATObject {

	NSNumber* _maxEntries;
	NSString* _prefix;

}

@property (nonatomic,retain) NSNumber * maxEntries;              //@synthesize maxEntries=_maxEntries - In the implementation block
@property (nonatomic,retain) NSString * prefix;                  //@synthesize prefix=_prefix - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(NSNumber *)maxEntries;
-(void)setMaxEntries:(NSNumber *)arg1 ;
@end

