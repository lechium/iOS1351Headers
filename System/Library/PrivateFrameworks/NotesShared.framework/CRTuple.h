/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CRCoding.h>

@class NSArray, NSString;

@interface CRTuple : NSObject <CRDataType, CRCoding> {

	NSArray* _contents;

}

@property (nonatomic,retain) NSArray * contents;                    //@synthesize contents=_contents - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tupleWithArray:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)count;
-(id)initWithArray:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(NSArray *)contents;
-(id)tombstone;
-(void)setContents:(NSArray *)arg1 ;
-(void)setDocument:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
@end
