/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _CDDataCollectionAnonymizer : NSObject <NSCopying> {

	NSData* _salt;

}

@property (nonatomic,copy,readonly) NSData * salt;              //@synthesize salt=_salt - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)salt;
-(id)initWithSalt:(id)arg1 ;
-(id)anonymizeObject:(id)arg1 ;
-(id)anonymizeString:(id)arg1 withSalt:(id)arg2 ;
-(id)anonymizeArray:(id)arg1 ;
-(id)anonymizeDictionary:(id)arg1 ;
@end
