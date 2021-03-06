/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface TTTodo : NSObject <NSCopying> {

	BOOL _done;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSUUID * uuid;              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BOOL done;                  //@synthesize done=_done - In the implementation block
+(id)todoWithIdentifier:(id)arg1 done:(BOOL)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSUUID *)uuid;
-(id)serialize;
-(BOOL)done;
-(void)saveToArchive:(Todo*)arg1 ;
-(id)initWithArchive:(const Todo*)arg1 ;
-(id)initWithIdentifier:(id)arg1 done:(BOOL)arg2 ;
-(id)todoWithDone:(BOOL)arg1 ;
@end

